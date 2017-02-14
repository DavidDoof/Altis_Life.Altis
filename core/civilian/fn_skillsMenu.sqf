#include "..\..\script_macros.hpp"
/*
    File: fn_adminMenu.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Opens the skill menu.
*/
private ["_arr","_lvlmaster","_xpmaster","_res_name","_lvl_xp_master","_hpp_master","_xp_master_next_lxl"];
disableSerialization;
waitUntil {!isNull (findDisplay 90002)};

_arr = [];

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

//get CFG Master
_lvl_xp_master = getArray(missionConfigFile >> "CfgSkills" >> "Masterlevel" >> "lvl_xp");
_hpp_master = getArray(missionConfigFile >> "CfgSkills" >> "Masterlevel" >> "hpp_gui");

//get CFG Master: xp next lvl
_xp_master_next_lxl = 9999999999999999999999999;
{
	if(_lvlmaster == 0)
	exitwith
	{
		_xp_master_next_lxl = _x select 1;
	};
	
	if(_x select 0 == _lvlmaster + 1)
	exitwith
	{
		_xp_master_next_lxl = _x select 1;
	};
}forEach _lvl_xp_master;
//					0			1			2				3				4						5						6				
_arr pushback ["Masterlevel",_lvlmaster,_xpmaster,_xp_master_next_lxl,_hpp_master select 0, _hpp_master select 1, _hpp_master select 2];

//get CFG RES
_skillCfgRes = [(missionConfigFile >> "CfgSkills" >> "Resources"),(missionConfigFile >> "CfgSkills" >> "Minerals")];
{
	for "_i" from 0 to count(_x)-1 do {

		_curConfig = _x select _i;
		_resource = configName _curConfig;
		_lvl_xp_res = getArray(_curConfig >> "lvl_xp");
		_hpp_res = getArray(_curConfig >> "hpp_gui");
		
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
		
		//get RES CFG: xp next lvl
		_xp_res_next_lxl = 9999999999999999999999999;
		{		
			if(_x select 0 == _lvlres + 1)
			exitwith
			{
				_xp_res_next_lxl = _x select 1;
			};
		}forEach _lvl_xp_res;
		
		_resource = M_CONFIG(getText,"VirtualItems",_resource,"displayName");
		_arr pushback [localize _resource,_lvlres,_xpres,_xp_res_next_lxl,_hpp_res select 0, _hpp_res select 1, _hpp_res select 2];
	};

	{	
		(CONTROL(90002,(_x select 4))) progressSetPosition ((_x select 2) / (_x select 3));
		(CONTROL(90002,(_x select 5))) ctrlSetText format["%1 / %2",(_x select 2),(_x select 3)]; 
		(CONTROL(90002,(_x select 6))) ctrlSetText format["%1 LVL %2:",(_x select 0),(_x select 1)]; 
	}forEach _arr;
}forEach _skillCfgRes;