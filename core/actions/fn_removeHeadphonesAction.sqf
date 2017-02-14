#include "..\..\script_macros.hpp"
/*
    File: fn_attachHeadphones.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Attach headphones.
*/

private ["_unit"];
_unit = param [0,objNull,[objNull]];
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};

if ([true,"headphones",1] call life_fnc_handleInv && (_unit getVariable ["clero_headphones",false])) then {
	_unit setVariable ["clero_headphones",false,true];
	[player] remoteExec ["life_fnc_removeHeadphones",_unit];
	hint localize "STR_NOTF_removed_Headphones";
};