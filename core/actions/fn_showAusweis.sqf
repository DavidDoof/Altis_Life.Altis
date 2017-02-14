#include "..\..\script_macros.hpp"
/*
    File: fn_showAusweis.sqf
    Author: Hannes "Clero" Lissak

    Description:
    Show Ausweis.
*/
private ["_ausweis","_dienstnummer"];
_ausweis = [_this,0,[],[[]]] call BIS_fnc_param;
_dienstnummer = [_this,1,0,[0]] call BIS_fnc_param;

if(count _ausweis > 0) then {
	disableSerialization;
	createDialog "life_ausweis_show";

	(CONTROL(90003,201)) ctrlSetText format["%1",(_ausweis select 0)];
	(CONTROL(90003,202)) ctrlSetText format["%1",(_ausweis select 1)];
	(CONTROL(90003,203)) ctrlSetText format["%1",(_ausweis select 2)];
	(CONTROL(90003,204)) ctrlSetText format["%1",(_ausweis select 3)];
	(CONTROL(90003,205)) ctrlSetText format["%1",(_ausweis select 4)];
	(CONTROL(90003,206)) ctrlSetText format["%1",(_ausweis select 5)];
	(CONTROL(90003,207)) ctrlSetText format["%1",(_ausweis select 6)];
	(CONTROL(90003,208)) ctrlSetText format["%1",(_ausweis select 7)];
	
	if(!(playerside isEqualTo west))
	then
	{
		(CONTROL(90003,209)) ctrlSetText format["%1",_dienstnummer];
	}
	else
	{
		(CONTROL(90003,309)) ctrlShow false;
	};
};