#include "..\..\script_macros.hpp"
/*
    File: fn_parkuhrsystem.sqf
    Author: Hannes "Clero" Lissak

    Description:
	Paysystem Parkuhr.
*/
private["_switch","_parkuhr","_price","_ablauf_sec","_diff"];
_switch = _this select 3;
_parkuhr = _this select 0;

_price = 500;
_ablauf_sec = 60;

switch(_switch) do 
{
	case 0:
	{	
		diag_log "0";
		if (CASH > round(_price)) 
		then
		{
			CASH = CASH - round(_price);
			_parkuhr setVariable ["time",serverTime,true];
			hint format["Du hast die Parkuhr für %1$ aufgefuellt!",round(_price)];
		}
		else
		{
			hint format["Du hast nicht genug Kohle! Parkuhrkosten: %1$",round(_price)];
		};	
	};
	case 1:
	{
		diag_log "1";
		_time = _parkuhr getVariable ["time",0];
		_diff = round(serverTime - _time);
		if(_diff < _ablauf_sec)
		then
		{
			hint format["Die Parkuhr ist noch %1sec gültig!",(_ablauf_sec - _diff)];
		}
		else
		{
			hint "Die Parkuhr ist abgelaufen!";
		};
	};
	default{};
};
			