#include "..\..\script_macros.hpp"

private["_cam","_objectfrom","_objectto","_rendertarget"];
_objectfrom = _this select 0;
_objectto = _this select 1;
_rendertarget = _this select 2;
_cam = _this select 3;

if(!(player getVariable[_rendertarget,false]))
then
{
	_cam = "camera" camCreate getpos _objectto;
	_cam attachto [_objectto];
	_cam setVectorDirAndUp [[0,1,0],[1,0,0]];	
	_cam camSetFov 0.8; 		
	_cam camCommit 1;
	_cam cameraEffect ["INTERNAL", "FRONT", _rendertarget];
	_rendertarget setPiPEffect [0, 1, 0.8, 1, 0.1, [0.3, 0.3, 0.3, -0.1], [1.0, 0.0, 1.0, 1.0], [0, 0, 0, 0]];
	_objectfrom setObjectTexture  [0,(format["#(argb,256,256,1)r2t(%1,1.0)",_rendertarget])];
	player setVariable[_rendertarget,true];
}
else
{
	camDestroy _cam;
	player setVariable[_rendertarget,false];
};