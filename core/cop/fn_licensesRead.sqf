#include "..\..\script_macros.hpp"
/*
    File: fn_licensesRead.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Outprints the licenses.
*/
params [
    ["_civ","",[""]],
    ["_licenses",[(localize "STR_Cop_NoLicenses")],[[]]],
	"_control"
];

//hint parseText format ["<t color='#FF0000'><t size='2'>%1</t></t><br/><t color='#FFD700'><t size='1.5'>" +(localize "STR_Cop_Licenses")+ "</t></t><br/>%2",_civ,_licenses];

disableSerialization;
if(!(createDialog "removeLicenses")) exitWith {hint "removeLicenses hpp Error"};

_control = CONTROL(90005,1);
{
  	_control lbAdd (_x select 1);
	_control lbSetData [(lbSize _control)-1,str(_x select 0)];
	
} forEach _licenses;