#include "..\script_macros.hpp"
/*
    File: fn_initMedic.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Initializes the medic..
*/
player addRating 99999999;
waitUntil {!(isNull (findDisplay 46))};

if ((FETCH_CONST(life_medicLevel)) < 1 && (FETCH_CONST(life_adminlevel) isEqualTo 0)) exitWith {
    ["Notwhitelisted",false,true] call BIS_fnc_endMission;
    sleep 35;
};

player setVariable ["mediclevel",(FETCH_CONST(life_mediclevel)),true];

if (LIFE_SETTINGS(getNumber,"restrict_medic_weapons") isEqualTo 1) then {
    [] spawn {
        for "_i" from 0 to 1 step 0 do {
            waitUntil {sleep 3; !(currentWeapon player isEqualTo "")};
            removeAllWeapons player;
        };
    };
};

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
[] spawn life_fnc_medicPlaceablesInit;
[] spawn life_fnc_IntroCam;