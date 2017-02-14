/*
    File: fn_moveMnts.sqf
    Author: Hannes "Clero" Lissak

    Description:
    User move Mnts.
*/
private ["_unit","_moveMnt","_switch"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;
_moveMnt = [_this,1,"",[""]] call BIS_fnc_param;
_switch = [_this,2,0,[0]] call BIS_fnc_param;

if (isNull _unit) exitWith {}; //Bad data

if (animationState _unit == _moveMnt) exitWith {};

switch(_switch) do {
	case 0: {_unit playMove _moveMnt;};
	case 1: {_unit switchMove _moveMnt;};
	case 2: {_unit playAction _moveMnt;};
	default {};
};
