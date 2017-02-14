#include "..\..\script_macros.hpp"
/*
    File: fn_playerTags.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Adds the tags above other players heads when close and have visible range.
*/
if (!life_settings_tagson) exitWith {};
private ["_ui","_units","_masks"];
#define iconID 78000
#define scale 0.8

if (visibleMap || {!alive player} || {dialog}) exitWith {
    500 cutText["","PLAIN"];
};

_ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
if (isNull _ui) then {
    500 cutRsc["Life_HUD_nameTags","PLAIN"];
    _ui = uiNamespace getVariable ["Life_HUD_nameTags",displayNull];
};

_units = nearestObjects[(visiblePosition player),["Man","Land_Pallet_MilBoxes_F","Land_Sink_F"],50];
_units = _units - [player];

_masks = LIFE_SETTINGS(getArray,"clothing_masks");

private _index = -1;
{
    private "_text";
    _idc = _ui displayCtrl (iconID + _forEachIndex);
    if (!(lineIntersects [eyePos player, eyePos _x, player, _x]) && alive _x && {!isNil {_x getVariable "realname"}}) then {
        _pos = switch (typeOf _x) do {
            case "Land_Pallet_MilBoxes_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 1.5]};
            case "Land_Sink_F": {[visiblePosition _x select 0, visiblePosition _x select 1, (getPosATL _x select 2) + 2]};
            default {[visiblePosition _x select 0, visiblePosition _x select 1, ((_x modelToWorld (_x selectionPosition "head")) select 2)+.5]};
        };
        _sPos = worldToScreen _pos;
        _distance = _pos distance player;
        if (!((headgear _x) in _masks || (goggles _x) in _masks || (uniform _x) in _masks)) then {
            if (count _sPos > 1 && {_distance < 15}) then {
                _text = switch (true) do {
                    case (_x in (units group player) && playerSide isEqualTo civilian): 
					{
						format ["<t color='#00FF00'>%1</t>",(_x getVariable ["realname",name _x])];
					};
                    case (side _x isEqualTo west && {!isNil {_x getVariable "rank"}}): {format ["<img image='%1' size='1'></img> %2<br/><t size='0.8' color='#5882FA'>%3</t>",switch ((_x getVariable "rank")) do {
                            case 1: {"textures\policeDepartment\Rang1.paa"};
                            case 2: {"textures\policeDepartment\Rang1.paa"};
                            case 3: {"textures\policeDepartment\Rang2.paa"};
                            case 4: {"textures\policeDepartment\Rang3.paa"};
                            case 5: {"textures\policeDepartment\Rang4.paa"};
                            case 6: {"textures\policeDepartment\Rang5.paa"};
                            case 7: {"textures\policeDepartment\Rang6.paa"};
						    case 8: {"textures\policeDepartment\Rang7.paa"};
						    case 9: {"textures\policeDepartment\Rang7.paa"};
						    case 10: {"textures\policeDepartment\Rang8.paa"};
						    case 11: {"textures\policeDepartment\Rang8.paa"};
						    case 12: {"textures\policeDepartment\Rang9.paa"};
						    case 13: {"textures\policeDepartment\Rang10.paa"};
						    case 14: {"textures\policeDepartment\Rang11.paa"};
						    case 15: {"textures\policeDepartment\Rang12.paa"};
						    case 16: {"textures\policeDepartment\Rang13.paa"};
						    case 17: {"textures\policeDepartment\Rang13.paa"};
						    case 18: {"textures\policeDepartment\Rang14.paa"};
						    case 19: {"textures\policeDepartment\Rang15.paa"};
						    case 20: {"textures\policeDepartment\Rang15.paa"};
						    case 21: {"textures\policeDepartment\Rang15.paa"};
                            default {"textures\policeDepartment\Rang1.paa"};
                        },
						_x getVariable ["realname",name _x],
						switch ((_x getVariable "rank")) do {
						    case 1: {"Police Officer I"};
							case 2: {"Police Officer II"};
							case 3: {"Police Officer III"};
							case 4: {"Police Detective I"};
							case 5: {"Police Detective II"};
							case 6: {"Police Sergeant I"};
							case 7: {"Police Sergeant II"};
							case 8: {"Police Lieutenant I"};
							case 9: {"Police Lieutenant II"};
							case 10: {"Police Captain I"};
							case 11: {"Police Captain II"};
							case 12: {"Police Commander"};
							case 13: {"Police Deputy Chief I"};
							case 14: {"Police Assistant Chief"};
							case 15: {"Chief of Police"};
							case 16: {"Agent"};
							case 17: {"Special Agent"};
							case 18: {"Commander Special Agent"};
							case 19: {"Assistant Director"};
							case 20: {"Deputy Director"};
							case 21: {"Director"};
							default {""};
						}]};
                    case (side _x isEqualTo independent && {!isNil {_x getVariable "mediclevel"}}): {format ["<t color='#FF0000'><img image='a3\ui_f\data\map\MapControl\hospital_ca.paa' size='1.5'></img> %1<br/><t size='0.8' color='#5882FA'>%2</t>",
						_x getVariable ["realname",name _x],
						switch ((_x getVariable "mediclevel")) do {
						    case 1: {"A.E.R.S Sanitätshelfer"};
							case 2: {"A.E.R.S Rettungssanitäter"};
							case 3: {"A.E.R.S Rettungsassistent"};
							case 4: {"A.E.R.S Notfallsanitäter"};
							case 5: {"A.E.R.S Notarzt"};
							case 6: {"A.E.R.S Oberarzt"};
							case 7: {"A.E.R.S Chefarzt"};
							default {""};
						}]};					
					//case (side _x isEqualTo independent): {format ["<t color='#FF0000'><img image='a3\ui_f\data\map\MapControl\hospital_ca.paa' size='1.5'></img></t> %1",_x getVariable ["realname",name _x]]};
                    default {
                        if (!isNil {(group _x) getVariable "gang_name"}) then {
                            format ["%1<br/><t size='0.8' color='#B6B6B6'>%2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]];
                        } else {
                            if (alive _x) then 
							{
                                _x getVariable ["realname",name _x];
                            } 
							else 
							{
                                if (!isPlayer _x) then 
								{
                                    _x getVariable ["realname","ERROR"];
                                };
                            };
                        };
                    };
                };
				
				//Start Edit - Clero 
				if(playerSide isEqualTo civilian)
				then
				{
					_atmbank = (_x getVariable ["clero_atmbank",0]);
					_cash = (_x getVariable ["clero_cash",0]);
					
					if((_atmbank + _cash) < 500000)
					then
					{
						_text = format ["%1 - <t color='#00FF00'>%2</t>",_text,"Neuling"];
					};
				};
				//End Edit - Clero 
				
                _idc ctrlSetStructuredText parseText _text;
                _idc ctrlSetPosition [_sPos select 0, _sPos select 1, 0.4, 0.65];
                _idc ctrlSetScale scale;
                _idc ctrlSetFade 0;
                _idc ctrlCommit 0;
                _idc ctrlShow true;
            } else {
                _idc ctrlShow false;
            };
        } else {
            _idc ctrlShow false;
        };
    } else {
        _idc ctrlShow false;
    };
    _index = _forEachIndex;
} forEach _units;
(_ui displayCtrl (iconID + _index + 1)) ctrlSetStructuredText parseText "";