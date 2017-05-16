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
                    case (_x in (units group player) && playerSide isEqualTo civilian): {format ["<t color='#00FF00'>%1</t>",(_x getVariable ["realname",name _x])];};
                    case (side _x isEqualTo west && {!isNil {_x getVariable "rank"}}): {format ["<img image='%1' size='1'></img> %2["<img image='%1' size='1'></img> <t size='1.2' color='#022f59'>%3<br/></t>%2",
					switch ((_x getVariable "rank")) do {
                       case 2: {"textures\Ranks\Polizeimeister.paa"};
						case 3: {"textures\Ranks\Polizeiobermeister.paa"};
						case 4: {"textures\Ranks\Polizeihauptmeister.paa"};
						case 5: {"textures\Ranks\Kommissaranwarter.paa"};
						case 6: {"textures\Ranks\Kommissar.paa"};
						case 7: {"textures\Ranks\Oberkommissar.paa"};					
						case 8: {"textures\Ranks\Hauptkommissar.paa"};			
						case 9: {"textures\Ranks\1Hauptkommissar.paa"};			
						case 10: {"textures\Ranks\Polizeirat.paa"};			
						case 11: {"textures\Ranks\Polizeidirektor.paa"};				
						default {"textures\Ranks\anwarter.paa"};
                        },_x getVariable ["realname",name _x],
						switch ((_x getVariable "rank")) do {
							case 2: {"Polizeimeister"};
							case 3: {"Polizeiobermeister"};
							case 4: {"Polizeihauptmeister"};
                            case 5: {"Kommissaranwärter"};
							case 6: {"Kommissar"};
							case 7: {"Oberkommissar"};
							case 8: {"Hauptkommissar"};
							case 9: {"Erster Hauptkommissar"};
							case 10: {"Polizeirat"};
                            case 11: {"Polizeidirektor"};
							default {"Anwärter/Praktikant"};
						}
						]
					};
                    case (side _x isEqualTo independent): format["<img image='%1' size='1'></img> <t size='1.2' color='#89110f'>%3<br/></t>%2",
					switch ((_x getVariable "Feuerwehr")) do {
					   default {"textures\Ranks\Feuerwehr.paa"};
					},
					_x getVariable ["realname",name _x],
					switch ((_x getVariable "Feuerwehr")) do {
							case 2: {"Feuerwehrmann"};
							case 3: {"Gruppenführer"};
							case 4: {"Stv. Zugführer"};
                            case 5: {"Zugführer"};
							case 6: {"Stv. Wehrführer"};
							case 7: {"Wehrführer"};
							default {"Jugendfeuerwehr"};
						}
					]
				};
                    default {
                        if (!isNil {(group _x) getVariable "gang_name"}) then {
                            format ["%1<br/><t size='0.8' color='#B6B6B6'>%2</t>",_x getVariable ["realname",name _x],(group _x) getVariable ["gang_name",""]];
                        } else {
                            if (alive _x) then {
                                _x getVariable ["realname",name _x];
                            } else {
                                if (!isPlayer _x) then {
                                    _x getVariable ["realname","ERROR"];
                                };
                            };
                        };
                    };
                };
				
				if(_x getVariable ["SpeakingInGame",false]) then {
				_text = format ["<img image='\A3\ui_f\data\igui\rscingameui\rscdisplayvoicechat\microphone_ca.paa' size='1'></img>"];
				};
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