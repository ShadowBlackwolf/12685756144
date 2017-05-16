#include "..\..\script_macros.hpp"
/*
    File: fn_sirenLights.sqf
    Author: Bryan "Tonic" Boardwine

    Description:
    Lets play a game! Can you guess what it does? I have faith in you, if you can't
    then you have failed me and therefor I lose all faith in humanity.. No pressure.
*/
private ["_vehicle"];
_vehicle = param [0,objNull,[objNull]];
if (isNull _vehicle) exitWith {}; //Bad entry!
if (!(typeOf _vehicle in ["B_Quadbike_01_F","C_Hatchback_01_F","C_Hatchback_01_sport_F","C_Offroad_01_F","C_SUV_01_F","C_Offroad_02_unarmed_F","I_MRAP_03_F","I_MRAP_03_hmg_F","O_MRAP_02_F","O_MRAP_02_hmg_F","B_MRAP_01_F","B_MRAP_01_hmg_F","B_T_LSV_01_armed_F","B_T_LSV_01_unarmed_F","O_APC_Wheeled_02_rcws_F","B_APC_Wheeled_01_cannon_F","O_T_Truck_03_fuel_F","O_T_Truck_03_repair_F","C_Van_01_box_F","I_Truck_02_box_F","B_Truck_01_ammo_F","C_Heli_Light_01_civil_F","B_Heli_Light_01_F","O_Heli_Light_02_unarmed_F","I_Heli_Transport_02_F","I_Heli_light_03_unarmedF","B_Heli_Transport_03_unarmed_green_F","B_Heli_Transport_01_F","B_Heli_Transport_01_camo_F","O_Heli_Transport_04_medevac_F","O_Heli_Transport_04_F","O_T_VTOL_02_infantry_F","O_T_VTOL_02_vehicle_F","B_T_VTOL_01_infantry_F","B_Heli_Attack_01_F"])) exitWith {}; //Last chance check to prevent something from defying humanity and creating a monster.

_trueorfalse = _vehicle getVariable ["lights",false];

if (_trueorfalse) then {
    _vehicle setVariable ["lights",false,true];
} else {
    _vehicle setVariable ["lights",true,true];
    [_vehicle,0.22] remoteExec ["life_fnc_copLights",RCLIENT];
};