#include "..\..\script_macros.hpp"
/*
    File: fn_gather.sqf
    Author: Devilfloh

    Description:
    Main functionality for gathering.
*/
private ["_maxGather","_resource","_amount","_maxGather","_requiredItem","_lvlmaster","_xpmaster","_res_name","_lvlres","_xpres","_skillCfgMaster","_lvl_xp_master","_skillCfgRes","_resource_skillCfg","_masterlvl","_lvl_xp","_lvlxp_master_next","_xp_res","_xp_master","_quantity_max","_lvlxp_next","_new_xp_masterlvl","_new_xp_res","_new_lvl_masterlvl","_new_lvl_res","_new_life_clero_skills","_master_set","_arr"];
if (life_action_inUse) exitWith {};
if !(isNull objectParent player) exitWith {};
if (player getVariable "restrained") exitWith {hint localize "STR_NOTF_isrestrained";};
if (player getVariable "playerSurrender") exitWith {hint localize "STR_NOTF_surrender";};

life_action_inUse = true;
_zone = "";
_requiredItem = "";
_exit = false;

_resourceCfg = missionConfigFile >> "CfgGather" >> "Resources";
for "_i" from 0 to count(_resourceCfg)-1 do {

    _curConfig = _resourceCfg select _i;
    _resource = configName _curConfig;
    _maxGather = getNumber(_curConfig >> "amount");
    _zoneSize = getNumber(_curConfig >> "zoneSize");
    _resourceZones = getArray(_curConfig >> "zones");
    _requiredItem = getText(_curConfig >> "item");
    {
        if ((player distance (getMarkerPos _x)) < _zoneSize) exitWith {_zone = _x;};
    } forEach _resourceZones;

    if (_zone != "") exitWith {};
};

if (_zone isEqualTo "") exitWith {life_action_inUse = false;};

if (_requiredItem != "") then {
    _valItem = missionNamespace getVariable "life_inv_" + _requiredItem;

    if (_valItem < 1) exitWith {
        switch (_requiredItem) do {
         //Messages here
        };
        life_action_inUse = false;
        _exit = true;
    };
};

if (_exit) exitWith {life_action_inUse = false;};

//get player Master: LVL + XP
_lvlmaster = 0;
_xpmaster = 0;
{
	_res_name = _x select 0;
    if(_res_name == 'Masterlevel')
	exitWith 
	{
		_lvlmaster = _x select 1;
		_xpmaster = _x select 2;
	};
} forEach life_clero_skills;

//get player RES: LVL + XP
_lvlres = 0;
_xpres = 0;
{
	_res_name = _x select 0;
    if(_res_name == _resource)
	exitWith 
	{
		_lvlres = _x select 1;
		_xpres = _x select 2;
	};
} forEach life_clero_skills;

//get CFG Master
_lvl_xp_master = getArray(missionConfigFile >> "CfgSkills" >> "Masterlevel" >> "lvl_xp");

//get CFG RES
_skillCfgRes = missionConfigFile >> "CfgSkills" >> "Resources";
for "_i" from 0 to count(_skillCfgRes)-1 do {

    _curConfig = _skillCfgRes select _i;
    _resource_skillCfg = configName _curConfig;

    if (_resource_skillCfg == _resource) exitWith 
	{
		_masterlvl = getNumber(_curConfig >> "masterlvl");
		_lvl_xp = getArray(_curConfig >> "lvl_xp");
	};
};

//get Master CFG: next lvl
_lvlxp_master_next = 9999999999999999999999999;
{
	if(_x select 0 == _lvlmaster + 1)
	exitwith
	{
		_lvlxp_master_next = _x select 1;
	};
}forEach _lvl_xp_master;

//get RES CFG: current XP RES, XP Master, quantity, next lvl
_lvlxp_next = 9999999999999999999999999;
{
	if(_x select 0 == _lvlres)
	then
	{
		_xp_res = _x select 2;
		_xp_master = _x select 3;
		_quantity_max = _x select 4;
	};
	
	if(_x select 0 == _lvlres + 1)
	then
	{
		_lvlxp_next	= _x select 1;
	};
}forEach _lvl_xp;

//Fix Backpack full e.g. 40/50 at 10
_amount = round(random(_quantity_max));
if(_amount == 0)then{_amount = 1;};
_diff = [_resource,_amount,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if (_diff isEqualTo 0) then {
    _amount = 1;
};
_diff = [_resource,_amount,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if (_diff isEqualTo 0) exitWith {
    hint localize "STR_NOTF_InvFull";
    life_action_inUse = false;
};

if(_lvlmaster < _masterlvl)exitwith{ hint localize "STR_NOTF_skills_not_enough_xp";};

switch (_requiredItem) do {
    case "pickaxe": {player say3D "mining";};
    default {player say3D "harvest";};
};

for "_i" from 0 to 4 do {
    player playMoveNow "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
    waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
    sleep 0.5;
};

if ([true,_resource,_diff] call life_fnc_handleInv) then {
    _itemName = M_CONFIG(getText,"VirtualItems",_resource,"displayName");
	
	//set Master: new XP, new lvl
	_new_xp_masterlvl = _xpmaster + _xp_master;
	if(_new_xp_masterlvl >= _lvlxp_master_next)
	then
	{
		_new_lvl_masterlvl = _lvlmaster + 1;
		hint format["Master LVL UP! Level: %1",_new_lvl_masterlvl];
	}
	else
	{
		_new_lvl_masterlvl = _lvlmaster;
	};
	
	//set Res: new XP, new lvl
	_new_xp_res = _xpres + _xp_res;
	if(_new_xp_res >= _lvlxp_next)
	then
	{
		_new_lvl_res = _lvlres + 1;
		hint format["Resource LVL UP! Level: %1",_new_lvl_res];
	}
	else
	{
		_new_lvl_res = _lvlres;
	};
	
	//build new skill array
	_new_life_clero_skills = [];
	_master_set = false;
	_res_set = false;
	_arr = [['Masterlevel',_new_lvl_masterlvl,_new_xp_masterlvl],[_resource,_new_lvl_res,_new_xp_res]];	
	
	{
		switch(_x select 0)
		do {
            case 'Masterlevel': 
			{
				_new_life_clero_skills pushback (_arr select 0);
				_master_set = true;
			};
            case ((_arr select 1) select 0): 
			{
				_new_life_clero_skills pushback (_arr select 1);
				_res_set = true;
			};
            default 
			{
				_new_life_clero_skills pushback _x;
			};
		};
	}forEach life_clero_skills;
	
	if(!_master_set)then{_new_life_clero_skills pushback (_arr select 0);};
	if(!_res_set)then{_new_life_clero_skills pushback (_arr select 1);};
	
	life_clero_skills = _new_life_clero_skills;
		
    titleText[format [localize "STR_NOTF_Gather_Success",(localize _itemName),_diff],"PLAIN"];
};

sleep 1;
life_action_inUse = false;