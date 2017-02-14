#include "..\..\script_macros.hpp"
/*
    File: fn_attachHeadphones.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Attach gunnysack.
*/

private ["_unit"];
_unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};

if ([false,"gunnysack",1] call life_fnc_handleInv && !(_unit getVariable ["clero_gunnysack",false])) then {
	_unit setVariable ["clero_gunnysack",true,true];
	[player] remoteExec ["life_fnc_attachGunnysack",_unit];
	hint localize "STR_NOTF_attached_Gunnysack";
};