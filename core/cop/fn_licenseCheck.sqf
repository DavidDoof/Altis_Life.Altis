#include "..\..\script_macros.hpp"
/*
    File: fn_licenseCheck.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Returns the licenses to the cop.
*/
private ["_cop","_licenses","_licensesConfigs"];
_cop = param [0,objNull,[objNull]];
if (isNull _cop) exitWith {}; //Bad entry

_licenses = [];

//Config entries for licenses that are civilian
_licensesConfigs = "getText(_x >> 'side') isEqualTo 'civ'" configClasses (missionConfigFile >> "Licenses");

{
    if (LICENSE_VALUE(configName _x,"civ")) then {
        _licenses pushback [getText(_x >> "variable"),localize getText(_x >> "displayName")];
    };
} forEach _licensesConfigs;

if (count _licenses == 0) then {_licenses = (localize "STR_Cop_NoLicensesFound");};
[profileName,_licenses] remoteExecCall ["life_fnc_licensesRead",_cop];
