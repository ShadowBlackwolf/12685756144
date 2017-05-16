/*
    File: fn_billAction.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Starts the billing process.
*/
params [
    ["_unit",objNull,[objNull]]
];
disableSerialization;
if (!(createDialog "STR_Medic_BillGive")) exitWith {hint localize "STR_Cop_billFail"};
if (isNull _unit || !isPlayer _unit) exitWith {};
ctrlSetText[2651,format [localize "STR_Medic_Bill",_unit getVariable ["realname",name _unit]]];
life_bill_unit = _unit;