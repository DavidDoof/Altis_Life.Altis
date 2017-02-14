#include "..\..\script_macros.hpp"
/*
    File: fn_taxe_heli.sqf
    Author: Hannes "Clero" Lissak

    Description:
	Call dialog or execute taxi script remote;
*/
private["_from","_display","_citys_ctl","_city","_pad","_switch","_pad_to","_pad_from","_heli","_inuse"];
disableSerialization;
_switch = _this select 0; 

_from = [pad_kavala_from,pad_agios_from,pad_syrta_from,pad_athira_from,pad_sofia_from,pad_flughafen_from,pad_zaros_from,pad_flugplatz_from,
			pad_neochori_from,pad_paros_from,pad_salzwueste_from,pad_pyrgos_from,pad_selakano_from];
{
	if(getpos player distance getpos _x <= 50) exitWith
	{
		_pad_from = _x;
	};
}foreach _from;


switch (_switch) do
{
	case 0:
	{
		_display = findDisplay 2001;
		_citys_ctl = _display displayCtrl 2003;
				
		lbClear _citys_ctl;
		{
			_city = _x select 0;
			_pad = _x select 1;
			_from = _x select 2;
			
			if(_pad_from != _from) then
			{
				_citys_ctl lbAdd _city;
				_citys_ctl lbSetData [(lbSize _citys_ctl)-1,_pad];
			};
		} foreach [["Kavala","pad_kavala_to",pad_kavala_from],["Agios","pad_agios_to",pad_agios_from],["Syrta","pad_syrta_to",pad_syrta_from],
					["Athira","pad_athira_to",pad_athira_from],["Sofia","pad_sofia_to",pad_sofia_from],["Flughafen","pad_flughafen_to",pad_flughafen_from],
					["Zaros","pad_zaros_to",pad_zaros_from],["Flugplatz","pad_flugplatz_to",pad_flugplatz_from],["Neochori","pad_neochori_to",pad_neochori_from],
					["Paros","pad_paros_to",pad_paros_from],["Salzwueste","pad_salzwueste_to",pad_salzwueste_from],["Pyrgos","pad_pyrgos_to",pad_pyrgos_from],
					["Selakano","pad_selakano_to",pad_selakano_from]];
	};
	case 1:
	{
		_pad_to = (call compile format["%1",(lbData[2003,(lbCurSel 2003)])]);
		
		_heli = vehicle player;
		_inuse = _heli getVariable "taxi";

		if(isNil "_inuse") then
		{
			_heli setVariable["taxi",false,true];
		};

		_inuse = _heli getVariable "taxi";
		while{isNIl "_inuse"} do
		{
			sleep 0.1;
		};

		if(!_inuse) then
		{	
			[_heli,_pad_to,_pad_from] remoteExec ["TON_fnc_taxi_heli",RSERV];	
		}
		else
		{
			hint "Heli ist beschäftigt!";
		};
	};
};