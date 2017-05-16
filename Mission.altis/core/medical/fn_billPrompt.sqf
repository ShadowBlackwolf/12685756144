#include "..\..\script_macros.hpp"
/*
    File: fn_billPrompt
    Author: Bryan "Tonic" Boardwine

    Description:
    Prompts the player that he is being billed.
*/
private ["_medic","_val"];
if (!isNull (findDisplay 2600)) exitWith {}; //Already at the bill menu, block for abuse?
_medic = _this select 0;
if (isNull _medic) exitWith {};
_val = _this select 1;

createDialog "life_bill_pay";
disableSerialization;
waitUntil {!isNull (findDisplay 2600)};

life_bill_paid = false;
life_bill_val = _val;
life_bill_medic = _medic;
CONTROL(2600,2601) ctrlSetStructuredText parseText format ["<t align='center'><t size='.8px'>" +(localize "STR_Medic_Bill_GUI_Given"),_medic getVariable ["realname",name _medic],_val];

[] spawn {
    disableSerialization;
    waitUntil {life_bill_paid || (isNull (findDisplay 2600))};
    if (isNull (findDisplay 2600) && !life_bill_paid) then {
        [0,"STR_Medic_Bill_Refuse",true,[profileName]] remoteExecCall ["life_fnc_broadcast",independent];
        [1,"STR_Medic_Bill_Refuse",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_bill_medic];
    };
};