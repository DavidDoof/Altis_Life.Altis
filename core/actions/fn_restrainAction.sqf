#include "..\..\script_macros.hpp"
/*
    File: fn_restrainAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Restrains the target.
*/
private ["_unit","_item"];
_unit = cursorObject;
if (isNull _unit) exitWith {}; //Not valid
if (player distance _unit > 3) exitWith {};
if (_unit getVariable "restrained") exitWith {};
if (player isEqualTo _unit) exitWith {};
if (!isPlayer _unit) exitWith {};

switch (playerSide) do {
    case west: {
        _item = "handcuffs";
    };
    case civilian: {
        _item = "zipties";
    };
};

if ([false,_item,1] call life_fnc_handleInv) then {
	//Broadcast!
	_unit setVariable ["restrained",true,true];
	[player] remoteExec ["life_fnc_restrain",_unit];
	//[0,"STR_NOTF_Restrained",true,[_unit getVariable ["realname", name _unit], profileName]] remoteExecCall ["life_fnc_broadcast",west];
}else
{
	switch (playerSide) do {
		case west: {
			hint localize "STR_NOTF_no_handcuffs";
		};
		case civilian: {
			hint localize "STR_NOTF_no_zipties";
		};
	};
};