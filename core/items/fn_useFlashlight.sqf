/*
 Author: Nox
 Description: Macht dunkle Sachen hell.
*/
private ["_unit"];
_unit = [_this,0,objNull,[objNull]] call BIS_fnc_param;

if (_unit getVariable["restrained", false]) exitWith { hint "Du kannst deine Schulterlampe nicht einschalten solange du gefesselt bist!"; };
if (vehicle player != player) exitWith { hint "Du kannst deine Schulterlampe nicht einschalten während du in einem Fahrzeug sitzt."};
if (!(life_inv_flashlightshoulder > 0)) exitWith { hint "Du besitzt keine Schulterlampe." };
if (!(alive vehicle player)) exitWith {}; 
 
 if(life_flashlight) then { 
 
 deleteVehicle light; 
 deleteVehicle flashlight; 
 life_flashlight = false; 
 
 } else { 

 lightpos = [0.33,-0.04,-0.05]; //Position des #lightpoints
 light = "#lightpoint" createVehicleLocal lightpos; 
 light setLightBrightness 0.45; //Helligkeit 
 light setLightAmbient [1,0.99,0.88]; 
 light setLightColor [1,0.99,0.88]; 
 light attachTo [player, [0,5,-0.5], "Pelvis"]; 
 light setDir 60; 
 life_flashlight = true; 
 
};