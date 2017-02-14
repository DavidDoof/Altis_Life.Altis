#include "..\..\script_macros.hpp"
/*
    File: fn_attachHeadphones.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Attach gunnysack.
*/

private ["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};

if ([true,"gunnysack",1] call life_fnc_handleInv && (_unit getVariable ["clero_gunnysack",false])) then {
	_unit setVariable ["clero_gunnysack",false,true];
	[player] remoteExec ["life_fnc_removeGunnysack",_unit];
	hint localize "STR_NOTF_removed_Gunnysack";
};