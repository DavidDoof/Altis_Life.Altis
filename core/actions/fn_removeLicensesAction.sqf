#include "..\..\script_macros.hpp"
/*
    File: 
    Author: Hannes "Clero" Lissak

    Description:
    
*/
private ["_control","_lic","_civ"];
_control = CONTROL(90005,1);
_lic = _control lbData (lbCurSel _control);
_lic = call compile format ["%1", _lic];
_civ = cursorObject;

[4,_lic] remoteExecCall ["life_fnc_removeLicenses",_civ];
hint "Du hast die Lizenz entfernt!";