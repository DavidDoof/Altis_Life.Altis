/*
	File: IntroCam
	Author: DeadP4xel (for SealDrop.de)
*/
private ["_camera", "_camDistance","_randCamX","_randCamY","_camTime","_hndl"];
_camDistance = 1000;
_randCamX = 75 - floor(random 150);
_randCamY = 75 - floor(random 150);
_camTime = 5;// you can change the time for sure, I adjusted mine to the intro music

// the one below basically says that if you already joined the server once the time of the camera movement will be faster, else it might get annoying

if(!life_firstSpawn) then {
	_camTime = 10;
};

//for "_x" from 0 to 20 do
//{
//   _x cutRsc ["introLife","PLAIN"];
//};

//intro move
showCinemaBorder true;
camUseNVG false;

//Intro Song
player say2d "intro";

_camera = "camera" camCreate [(position player select 0)+_randCamX, (position player select 1)+_randCamY,(position player select 2)+_camDistance];
_camera cameraEffect ["internal","back"];

"radialBlur" ppEffectEnable true;
"radialBlur" ppEffectAdjust[0.08, 0,0.15,0.15];
"radialBlur" ppEffectCommit 0.5;

_camera camSetFOV 2.000;
_camera camCommit 0;
waitUntil {camCommitted _camera};

[] spawn {
	while{true} do {
		uiSleep 3;
		"radialBlur" ppEffectAdjust[0.08, 0,0.37,0.37];
		"radialBlur" ppEffectCommit 5;
	};
};

_camera camSetTarget vehicle player;
_camera camSetRelPos [0,0,2];
_camera camCommit _camTime;

waitUntil {camCommitted _camera};

_camera cameraEffect ["terminate","back"];
camDestroy _camera;
"radialBlur" ppEffectEnable false;
life_firstSpawn = false;