#include "..\..\script_macros.hpp"
/*
    File: fn_copInteractionMenu.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Replaces the mass addactions for various Medic actions towards another player.
*/
#define Btn1 37450
#define Btn2 37451
#define Btn3 37452
#define Btn4 37453
#define Btn5 37454
#define Title 37401

private ["_display","_curTarget","_Btn1","_Btn2","_Btn3","_Btn4","_Btn5","_Btn6","_Btn7","_Btn8"];

disableSerialization;
_curTarget = param [0,objNull,[objNull]];
_seizeRank = LIFE_SETTINGS(getNumber,"seize_minimum_rank");

if (player getVariable ["Escorting", false]) then {
    if (isNull _curTarget) exitWith {closeDialog 0;}; //Bad target
    if (!isPlayer _curTarget && side _curTarget isEqualTo civilian) exitWith {closeDialog 0;}; //Bad side check?
    if (player distance _curTarget > 4 ) exitWith {closeDialog 0;}; // Prevents menu accessing from far distances.
};

if (!dialog) then {
    createDialog "pInteraction_Menu";
};

_display = findDisplay 37400;
_Btn1 = _display displayCtrl Btn1;
_Btn2 = _display displayCtrl Btn2;
_Btn3 = _display displayCtrl Btn3;
_Btn4 = _display displayCtrl Btn4;
_Btn5 = _display displayCtrl Btn5;
life_pInact_curTarget = _curTarget;

if (player getVariable ["isEscorting",false]) then {
    { _x ctrlShow false; } forEach [_Btn1,_Btn2,_Btn3,_Btn5,_Btn6,_Btn7,_Btn8];
};

//Set Unrestrain Button
_Btn1 ctrlSetText localize "STR_pInAct_Unrestrain";
_Btn1 buttonSetAction "[life_pInact_curTarget] call life_fnc_unrestrain; closeDialog 0;";

//Set Check Licenses Button
_Btn2 ctrlSetText localize "STR_pInAct_checkLicenses";
_Btn2 buttonSetAction "[player] remoteExecCall [""life_fnc_licenseCheck"",life_pInact_curTarget]; closeDialog 0;";

//Set Escort Button
if (player getVariable ["isEscorting",false]) then {
    _Btn3 ctrlSetText localize "STR_pInAct_StopEscort";
    _Btn3 buttonSetAction "[] call life_fnc_stopEscorting; closeDialog 0;";
} else {
    _Btn3 ctrlSetText localize "STR_pInAct_Escort";
    _Btn3 buttonSetAction "[life_pInact_curTarget] call life_fnc_escortAction; closeDialog 0;";
};

//Set Ticket Button
_Btn4 ctrlSetText localize "STR_pInAct_BillBtn";
_Btn4 buttonSetAction "[life_pInact_curTarget] call life_fnc_BillAction;";

_Btn5 ctrlSetText localize "STR_pInAct_PutInCar";
_Btn5 buttonSetAction "[life_pInact_curTarget] call life_fnc_putInCar; closeDialog 0;";