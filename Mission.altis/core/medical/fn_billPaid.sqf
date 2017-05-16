#include "..\..\script_macros.hpp"
/*
    File: fn_BillPaid.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Verifies that the Bill was paid.
*/
params [
    ["_value",5,[0]],
    ["_unit",objNull,[objNull]],
    ["_medic",objNull,[objNull]]
];
if (isNull _unit || {!(_unit isEqualTo life_Bill_unit)}) exitWith {}; //NO
if (isNull _medic || {!(_medic isEqualTo player)}) exitWith {}; //Double NO

BANK = BANK + _value;
[1] call SOCK_fnc_updatePartial;
