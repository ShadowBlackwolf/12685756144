#include "..\..\script_macros.hpp"
/*
    File: fn_billGive.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Gives a bill to the targeted player.
*/
if (isNil "life_bill_unit") exitWith {hint localize "STR_Medic_BillNil"};
if (isNull life_bill_unit) exitWith {hint localize "STR_Medic_BillExist"};

private _val = ctrlText 2652;

if (!([_val] call TON_fnc_isnumber)) exitWith {hint localize "STR_Medic_BillNum"};
if ((parseNumber _val) > 100000) exitWith {hint localize "STR_Medic_BillOver100"};

[0,"STR_Medic_BillGive",true,[profileName,[(parseNumber _val)] call life_fnc_numberText,life_bill_unit getVariable ["realname",name life_bill_unit]]] remoteExecCall ["life_fnc_broadcast",RCLIENT];
[player,(parseNumber _val)] remoteExec ["life_fnc_billPrompt",life_bill_unit];
closeDialog 0;
