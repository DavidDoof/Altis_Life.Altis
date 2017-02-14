#include "..\script_macros.hpp"
/*
    File: fn_initCop.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Cop Initialization file.
*/
player addRating 9999999;
waitUntil {!(isNull (findDisplay 46))};

if (life_blacklisted) exitWith {
    ["Blacklisted",false,true] call BIS_fnc_endMission;
    sleep 30;
};

//if(!(str(player) in ["cop_1","cop_2","cop_3","cop_4"])) then {
//    if ((FETCH_CONST(life_coplevel) isEqualTo 1) && (FETCH_CONST(life_adminlevel) isEqualTo 5)) then {
//    ["NotWhitelisted",false,true] call BIS_fnc_endMission;
//    sleep 35;
//};

if(call life_coplevel == 0) exitWith {
endMission "NotWhitelisted";
};


player setVariable ["rank",(FETCH_CONST(life_coplevel)),true];
if(count life_clero_ausweis < 1)
then
{
	createDialog "life_ausweis";
	waitUntil{!isNull (findDisplay 90004)}; //Wait for the spawn selection to be open.
	waitUntil{isNull (findDisplay 90004)}; //Wait for the spawn selection to be done.
	[] call life_fnc_spawnMenu;
	waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
	waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
}
else
{
	_name = life_clero_ausweis select 0;
	_vorname = life_clero_ausweis select 1;
	_fname = format["%1 %2",_vorname,_name];
	
	diag_log _fname;
	diag_log name player; 
	
	if(name player != _fname)exitwith
	{
		["Notwhitelisted",false,true] call BIS_fnc_endMission;
	};
	
	[] call life_fnc_spawnMenu;
	waitUntil{!isNull (findDisplay 38500)}; //Wait for the spawn selection to be open.
	waitUntil{isNull (findDisplay 38500)}; //Wait for the spawn selection to be done.
};
[] spawn life_fnc_placeablesInit;


//Backpacks für Cops
[] spawn
{
while {true} do
  {
    waitUntil {backpack player == "B_Carryall_khk"};
    (unitBackpack player) setObjectTextureGlobal [0,"textures\police\po.paa"];
    waitUntil {backpack player != "B_Carryall_khk"};
  };
};
[] spawn
{
while {true} do
  {
    waitUntil {backpack player == "B_Carryall_cbr"};
    (unitBackpack player) setObjectTextureGlobal [0,"textures\police\pd.paa"];
    waitUntil {backpack player != "B_Carryall_cbr"};
  };
};
[] spawn
{
while {true} do
  {
    waitUntil {backpack player == "B_Carryall_oli"};
    (unitBackpack player) setObjectTextureGlobal [0,"textures\police\fbi.paa"];
     waitUntil {backpack player != "B_Carryall_oli"};
    };
};
//End Clothes
[] spawn life_fnc_IntroCam;