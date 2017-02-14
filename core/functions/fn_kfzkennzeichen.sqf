#include "..\..\script_macros.hpp"
/*
    File: fn_kfz_kennzeichen.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Edit Kennzeichen and save.
*/
private ["_vehicles","_uid","_params","_i","_lbSetCurSel","_switch","_kennzeichen","_vehicle","_kfz","_exit","_teil1","_teil2","_teil3","_all_kfz"];
_params = [_this,3,[],[[]]] call BIS_fnc_param;
_switch = _params select 0;
_vehicle = _params select 1;

if(_vehicle isEqualTo objNull)
then
{
	_vehicles = nearestObjects [player,["CAR"],25];
	if(count(_vehicles) == 0)exitWith{hint "Kein Auto in der Nähe!";};
	_uid = getPlayerUID player;
	
	{
		if((((_x getVariable "vehicle_info_owners") select 0) select 0) == _uid)
		exitWith
		{
			_vehicle = _x;
		};
	}forEach _vehicles;
};

if(_vehicle isEqualTo objNull)exitWith{hint "Du besitzt kein Auto!";};

switch (_switch) do 
{
	case 0:
	{
		disableSerialization;
		createDialog "life_kfzkennzeichen";
		waitUntil {!isNull (findDisplay 90006)};
				
		_kfz = _vehicle getVariable ["kfz",[]];
		
		_teil1 = ["AN","AS"];
		_lbSetCurSel = 0;
		_i = 0;
		lbClear CONTROL(90006,201);
		{
			CONTROL(90006,201) lbAdd format ["%1",_x];
			CONTROL(90006,201) lbSetData [(lbSize CONTROL(90006,201))-1,str(_x)];
			
			if(count _kfz > 0) then {
				if(_x == (_kfz select 0))
				then
				{
					_lbSetCurSel = _i;
				}
				else
				{
					_i = _i + 1;
				};
			};
			
		} forEach _teil1;
		lbSetCurSel [201,_lbSetCurSel];	

		if(count(_kfz) > 0 )
		then
		{
			(CONTROL(90006,202)) ctrlSetText format["%1",(_kfz select 1)];
			(CONTROL(90006,203)) ctrlSetText format["%1",(_kfz select 2)];
		};
	};
	case 1:
	{	
		_exit = false;
		_teil1 = call compile format ["%1",(lbData[201,(lbCurSel 201)])];
		_teil2 = parseText(ctrlText 202);
		_teil3 = parseText(ctrlText 203);
		_kfz = [_teil1,str(_teil2),str(_teil3)];
		
		{			
			if(_x isEqualTo _kfz)exitwith{hint "Das Kennzeichen gibts schon!";_exit = true;};
		}forEach life_allkfz;
		
		if(!_exit)
		then
		{
			_vehicle setVariable ["kfz",_kfz,true];
			life_allkfz pushback _kfz;
			publicVariable "life_allkfz";
			
			closedialog 0;
		};
		
	};
	default
	{
		
	};
};