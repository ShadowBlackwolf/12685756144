#include "..\..\script_macros.hpp"
/*
    File: fn_billPay.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Pays the bill.
*/
if (isNil "life_bill_val" || isNil "life_bill_medic") exitWith {};
if (CASH < life_bill_val) exitWith {
    if (BANK < life_bill_val) exitWith {
        hint localize "STR_Medic_Bill_NotEnough";
        [1,"STR_Medic_Bill_NotEnoughNOTF",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_bill_medic];
        closeDialog 0;
    };

    hint format [localize "STR_Medic_Bill_Paid",[life_bill_val] call life_fnc_numberText];
    BANK = BANK - life_bill_val;
    [1] call SOCK_fnc_updatePartial;
    life_bill_paid = true;

    [0,"STR_Medic_Bill_PaidNOTF",true,[profileName,[life_bill_val] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",independent];
    [1,"STR_Medic_Bill_PaidNOTF_2",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_bill_medic];
    [life_bill_val,player,life_bill_medic] remoteExecCall ["life_fnc_billPaid",life_bill_medic];
    closeDialog 0;
};

CASH = CASH - life_bill_val;
[0] call SOCK_fnc_updatePartial;
life_bill_paid = true;

[0,"STR_Medic_Bill_PaidNOTF",true,[profileName,[life_bill_val] call life_fnc_numberText]] remoteExecCall ["life_fnc_broadcast",independent];
closeDialog 0;
[1,"STR_Medic_Bill_PaidNOTF_2",true,[profileName]] remoteExecCall ["life_fnc_broadcast",life_bill_medic];
[life_bill_val,player,life_bill_medic] remoteExecCall ["life_fnc_billPaid",life_bill_medic];