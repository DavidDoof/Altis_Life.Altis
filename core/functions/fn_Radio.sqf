#include "..\..\script_macros.hpp"
/*
    File: fn_Radio.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Starts the radio other players. Based on fn_copSiren.
*/
private ["_arr","_rnd","_vehicle"];
_vehicle = param [0,objNull,[objNull]];

if (isNull _vehicle) exitWith {};
if (isNil {_vehicle getVariable "siren"}) exitWith {};

for "_i" from 0 to 1 step 0 do {
    if (!(_vehicle getVariable "siren")) exitWith {};
    if (count crew _vehicle isEqualTo 0) then {_vehicle setVariable ["siren",false,true]};
    if (!alive _vehicle) exitWith {};
    if (isNull _vehicle) exitWith {};
   	
	_arr = [["radio_1",105],["radio_2",105],["radio_3",105],["radio_4",105],["radio_5",105],["radio_6",80],["radio_7",90],["radio_8",105],["radio_9",105],["radio_10",90],["radio_11",101],["radio_12",80],["radio_13",82],["radio_14",105],["radio_15",74]];
	
	_rnd = round(random ((count _arr) -1));
	Radio say3D ((_arr select _rnd) select 0);
    sleep ((_arr select _rnd) select 1);

    if (!(_vehicle getVariable "siren")) exitWith {};
};
