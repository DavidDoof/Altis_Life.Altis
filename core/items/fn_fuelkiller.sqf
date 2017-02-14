#include "..\..\script_macros.hpp"
/*
    File: fn_fuelkiller.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Open dialog with vehicles - fuelkiller.
*/
private ["_nearVehicles","_control","_className","_classNameLife","_displayName","_picture","_distance"];

if(life_action_inUse) exitWith {};
if !(playerSide isEqualTo west) exitWith {hint localize "STR_NOTF_fuelkiller_no_cop"};
if(vehicle player == player) exitWith {hint localize "STR_NOTF_fuelkiller_no_veh"};
if(player == driver vehicle player && speed (vehicle player) > 1) exitWith {hint localize "STR_NOTF_fuelkiller_no_passenger"};
if(!(createDialog "fuelkiller")) exitWith {hint localize "STR_fuelkillerError"};

disableSerialization;
_nearVehicles = nearestObjects[getPosATL player,["LandVehicle","Ship","Air"],250];
_control = CONTROL(90001,1);
{
    if (alive _x) then {
        _className = typeOf _x;
        _classNameLife = _className;
        _displayName = getText(configFile >> "CfgVehicles" >> _className >> "displayName");
        _picture = getText(configFile >> "CfgVehicles" >> _className >> "picture");

        if (!isClass (missionConfigFile >> "LifeCfgVehicles" >> _classNameLife)) then {
            _classNameLife = "Default"; //Use Default class if it doesn't exist
            diag_log format ["%1: LifeCfgVehicles class doesn't exist",_className];
        };
				
		_distance = player distance _x;
		_displayName = format["%1 - %2", _displayName, _distance];
		
		_control lbAdd _displayName;
		_control lbSetData [(lbSize _control)-1,str(_forEachIndex)];
		_control lbSetPicture [(lbSize _control)-1,_picture];
    };
} forEach _nearVehicles;