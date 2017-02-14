#include "..\..\script_macros.hpp"
/*
    File: fn_ausweis.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Edit Ausweis and save.
*/
private ["_i","_lbSetCurSel","_switch","_sex","_family","_nationality","_vorname","_nachname","_gebdatum"];
_switch = [_this,0,0,[0]] call bis_fnc_param;

switch (_switch) do 
{
	case 0:
	{
		disableSerialization;
		waitUntil {!isNull (findDisplay 90004)};
		
		_sex = ["Maennlich","Weiblich"];
		_lbSetCurSel = 0;
		_i = 0;
		lbClear CONTROL(90004,203);
		{
			CONTROL(90004,203) lbAdd format ["%1",_x];
			CONTROL(90004,203) lbSetData [(lbSize CONTROL(90004,203))-1,str(_x)];
			
			if(count life_clero_ausweis > 0) then {
				if(_x == (life_clero_ausweis select 2))
				then
				{
					_lbSetCurSel = _i;
				}
				else
				{
					_i = _i + 1;
				};
			};
			
		} forEach _sex;
		lbSetCurSel [203,_lbSetCurSel];	

		_family = ["Verheiratet","Single"];
		_lbSetCurSel = 0;
		_i = 0;
		lbClear CONTROL(90004,205);
		{
			CONTROL(90004,205) lbAdd format ["%1",_x];
			CONTROL(90004,205) lbSetData [(lbSize CONTROL(90004,205))-1,str(_x)];
			
			if(count life_clero_ausweis > 0) then {
				if(_x == (life_clero_ausweis select 4))
				then
				{
					_lbSetCurSel = _i;
				}
				else
				{
					_i = _i + 1;
				};
			};
			
		} forEach _family;
		lbSetCurSel [205,_lbSetCurSel];
		
		_nationality = ["A","B"];
		_lbSetCurSel = 0;
		_i = 0;
		lbClear CONTROL(90004,206);
		{
			CONTROL(90004,206) lbAdd format ["%1",_x];
			CONTROL(90004,206) lbSetData [(lbSize CONTROL(90004,206))-1,str(_x)];
			
			if(count life_clero_ausweis > 0) then {
				if(_x == (life_clero_ausweis select 5))
				then
				{
					_lbSetCurSel = _i;
				}
				else
				{
					_i = _i + 1;
				};
			};
			
		} forEach _nationality;
		lbSetCurSel [206,_lbSetCurSel];
		
		if(count life_clero_ausweis > 0) then {
			(CONTROL(90004,201)) ctrlSetText format["%1",(life_clero_ausweis select 0)];
			(CONTROL(90004,202)) ctrlSetText format["%1",(life_clero_ausweis select 1)];
			(CONTROL(90004,204)) ctrlSetText format["%1",(life_clero_ausweis select 3)];
			(CONTROL(90004,207)) ctrlSetText format["%1",(life_clero_ausweis select 6)];
			(CONTROL(90004,208)) ctrlSetText format["%1",(life_clero_ausweis select 7)];
		};
	};
	case 1:
	{	
		_vorname = parseText(ctrlText 201);
		_nachname = parseText(ctrlText 202);
		_sex = call compile format ["%1",(lbData[203,(lbCurSel 203)])];
		_gebdatum = parseText(ctrlText 204);
		_family = call compile format ["%1",(lbData[205,(lbCurSel 205)])];
		_nationality = call compile format ["%1",(lbData[206,(lbCurSel 206)])];
		_strasse = parseText(ctrlText 207);
		_hausnummer = parseText(ctrlText 208);
		
		life_clero_ausweis = [str(_vorname),str(_nachname),_sex,str(_gebdatum),_family,_nationality,str(_strasse),str(_hausnummer)];
		
		diag_log life_clero_ausweis;
		
		closedialog 0;
	};
	default
	{
		
	};
};