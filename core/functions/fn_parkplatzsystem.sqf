#include "..\..\script_macros.hpp"
/*
    File: fn_parkplatzsystem.sqf
    Author: Hannes "Clero" Lissak

    Description:
	Paysystem.
*/
private["_switch","_automat_in","_schranke_in","_schranke_out","_old_automat","_new_automat","_exit","_playertickets","_price"];
_switch = _this select 0;
_automat_in = (_this select 1) select 0;
_schranke_in = (_this select 1) select 1;
_automat_out = (_this select 1) select 2;
_schranke_out = (_this select 1) select 3;
_exit = false;

switch(_switch) do 
{
	case 0:
	{				
		if(!(_automat_in getVariable ["active",false]))
		then
		{
			if(!((vehicle player) getVariable["parkplatzticket",false]))
			then
			{
				_automat_in setVariable ["active",true,true];
				
				_old_automat = _automat_in getVariable ["parkplatzsystem",[]];
				_old_automat pushback [getPlayerUID player, serverTime];
				_automat_in setVariable ["parkplatzsystem",_old_automat,true];
				
				_schranke_in animate ["Door_1_rot", 1];
				(vehicle player) setVariable["parkplatzticket",true,true];
				hint "Du hasst ein Ticket gezogen!";
				waitUntil{(((vehicle player) distance _schranke_in > 5) && (((vehicle player) distance _schranke_in) < ((vehicle player) distance _automat_in))) };
				_schranke_in animate ["Door_1_rot", 0];
				_automat_in setVariable ["active",false,true];
			}
			else
			{
				hint "Du musst dein Ticket erst bezahlen!";
			};
		}
		else
		{
			hint "Bitte warten... Computer berechnet...";
		};
	};
	case 1:
	{	
		if(!(_automat_in getVariable ["active",false]))
		then
		{
			_automat_in setVariable ["active",true,true];
			_old_automat = _automat_in getVariable ["parkplatzsystem",[]];
			_new_automat = [];
			_playertickets = [];
			_price = 5;
			
			{
				if(_x select 0 == getPlayerUID player)
				then
				{
					_playertickets pushback _x;
				}
				else
				{
					_new_automat pushback _x;
				};
				
			}forEach _old_automat;
			
			{
				if((_playertickets select 0) select 1 == _x select 1)
				then
				{
					_exit = true;
					_price = _price * serverTime - (_x select 1); 
				}
				else
				{
					_new_automat pushback _x;
				};
				
			}forEach _playertickets;
						
			if(_exit)
			then
			{
				if (CASH > round(_price)) 
				then
				{
					CASH = CASH - round(_price);
					_automat_in setVariable ["parkplatzsystem",_new_automat,true];
					_schranke_out animate ["Door_1_rot", 1];
					(vehicle player) setVariable["parkplatzticket",false,true];
					hint format["Du hast dein Ticket in Höhe von %1$ bezahlt!",round(_price)];
					waitUntil{(((vehicle player) distance _schranke_out > 5) && (((vehicle player) distance _schranke_out) < ((vehicle player) distance _automat_out))) };
					_schranke_out animate ["Door_1_rot", 0];
				}
				else
				{
					hint format["Du hast nicht genug Kohle! Ticketpreis: %1$",round(_price)];
				};				
			}
			else
			{
				hint "Du hast kein Ticket!";
			};
			
			_automat_in setVariable ["active",false,true];
		}
		else
		{
			hint "Bitte warten... Computer berechnet...";
		};
	};
	default{};
};
			