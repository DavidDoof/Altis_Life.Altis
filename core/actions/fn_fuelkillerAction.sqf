#include "..\..\script_macros.hpp"
/*
    File: fn_fuelkillerAction.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Set fuel to 2%.
*/
private ["_control","_vehicle","_nearVehicles"];
_control = CONTROL(90001,1);
_vehicle = _control lbData (lbCurSel _control);
_vehicle = call compile format ["%1", _vehicle];
_nearVehicles = nearestObjects[getPosATL player,["LandVehicle","Ship","Air"],250];
_vehicle = (_nearVehicles select _vehicle);

if ([false,"fuelkiller",1] call life_fnc_handleInv) then
{
	if (!local _vehicle) then {
		[_vehicle,0.1] remoteExecCall ["life_fnc_setFuel",_vehicle];
	} else {
		_vehicle setFuel 0.00001;
	};
};  