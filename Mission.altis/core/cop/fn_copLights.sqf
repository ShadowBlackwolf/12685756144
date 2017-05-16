/*
	File: fn_copLights.sqf
	Author: mindstorm
    modified: Shadow @ Blackwolf-community
    Blaulicht für BOS Kräfte
*/ 
private ["_vehicle","_lightRed","_lightBlue","_lightleft","_lightright","_leftRed","_brightness","_attach"];

_vehicle = _this select 0;

if (isNil "_vehicle" || isNull _vehicle || !(_vehicle getVariable "lights")) exitWith {};

switch (typeOf _vehicle) do {
		//Zivil
        case "B_Quadbike_01_F": { _attach = [[-0.20, 1, 0.8], [0.20, 1, 0.8]]; };//Quad
        case "C_Hatchback_01_F": { _attach = [[-0.6, 2, -0.95], [0.6, 2, -0.95]]; };//Limo
        case "C_Hatchback_01_sport_F": { _attach = [[-0.6, 2, -0.95], [0.6, 2, -0.95]]; };//Sportlimo
		case "C_Offroad_01_F": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };//Geländewagen
		case "C_SUV_01_F": { _attach = [[-0.4, 2.25, -0.51], [0.4, 2.25, -0.51]]; };//Suv
		case "C_Offroad_02_unarmed_F": { _attach = [[-0.84, 1.82, -0.35], [0.76, 1.82, -0.34]]; }; //4WD
		//Gepanzert
        case "I_MRAP_03_F": { _attach = [[-1.05, 2.25, -0.29], [1.05, 2.25, -0.29]]; };// Strider
        case "I_MRAP_03_hmg_F": { _attach = [[-1.05, 2.25, -0.29], [1.05, 2.25, -0.29]]; };// Strider Hmg
		case "O_MRAP_02_F": { _attach = [[-1, -2.8, 0.55], [1, -2.8, 0.55]]; };	// Ifrit
		case "O_MRAP_02_hmg_F": { _attach = [[-1, -2.8, 0.55], [1, -2.8, 0.55]]; };	// Ifrit Hmg
        case "B_MRAP_01_F": { _attach = [[-1.42, -4.09, 0.28], [1.42, -4.09, 0.28]]; };// Hunter
        case "B_MRAP_01_hmg_F": { _attach = [[-1.42, -4.09, 0.28], [1.42, -4.09, 0.28]]; };// Hunter Hmg
        case "B_T_LSV_01_armed_F": { _attach = [[-0.69,2.1,-0.9], [0.75,2.1,-0.9]]; };// Prowler Bewaffnet
        case "B_T_LSV_01_unarmed_F": { _attach = [[-0.69,2.1,-0.9], [0.75,2.1,-0.9]]; };// Prowler
		case "O_APC_Wheeled_02_rcws_F": { _attach = [[-0.82, 1.55, -1.1], [1.48, 1.55, -1.1]]; };//	Marid
		case "B_APC_Wheeled_01_cannon_F": { _attach = [[-0.9, 2.8, -0.9], [0.9, 2.8, -0.9]]; };// Marschall
        //LKW´s
        case "O_T_Truck_03_fuel_F": { _attach = [[-1,3.1,-0.75], [1,3.1,-0.75]]; };// Tempest tanken
        case "O_T_Truck_03_repair_F": { _attach = [[-1,3.1,-0.75], [1,3.1,-0.75]]; };// Tempest repair
        case "C_Van_01_box_F": { _attach = [[-0.67,1.9,-0.44], [0.64,1.9,-0.43]]; };// Van Box
        case "I_Truck_02_box_F": { _attach = [[-0.8, 3.3, 0.46], [0.8, 3.3, 0.46]]; };// Zamak Repair
        case "B_Truck_01_ammo_F": { _attach = [[-0.95, 4.95, -0.2], [0.95, 4.95, -0.2]]; };// Hemmt Munni
        //Helikopter
        case "C_Heli_Light_01_civil_F": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };//M900
		case "B_Heli_Light_01_F": { _attach = [[-0.37, 0.0, 0.56], [0.37, 0.0, 0.56]]; };//Hummingbird
		case "O_Heli_Light_02_unarmed_F": { _attach = [[-1, 3.2, -2], [1, 3.2, -2]]; };//Orca
		case "I_Heli_Transport_02_F": { _attach = [[-1.3, 6.3, -2.65], [1.3, 6.3, -2.65]]; };//Mohawk
		case "I_Heli_light_03_unarmed_F": { _attach = [[-1.23, 4.5, -1.42], [1.23, 4.5, -1.42]]; };//Hellcat
		case "B_Heli_Transport_03_unarmed_green_F": { _attach = [[-1.38,0,-0.5], [1.38,0,-0.5]]; };//Huron
		case "B_Heli_Transport_01_F": { _attach = [[-1.1, 0.23, 0.55], [1.1, 0.23, 0.55]]; };// Ghosthawk
		case "B_Heli_Transport_01_camo_F": { _attach = [[-1.1, 0.23, 0.55], [1.1, 0.23, 0.55]]; };// Ghosthawk
        case "O_Heli_Transport_04_medevac_F": { _attach = [[-3.7,-0.3028,-0.76], [3.7,-0.3028,-0.76]]; };//Taru
		case "O_Heli_Transport_04_F": { _attach = [[-3.7,-0.3028,-0.76], [3.7,-0.3028,-0.76]]; };//Taru
    	case "O_T_VTOL_02_infantry_F": { _attach = [[-8.16,-0.42,-0.97], [8.16,-0.42,-0.97]]; };// Xi´An
		case "O_T_VTOL_02_vehicle_F": { _attach = [[-8.16,-0.42,-0.97], [8.16,-0.42,-0.97]]; };// Xi´An
		case "B_T_VTOL_01_infantry_F": { _attach = [[0,-3.4,-5.9], [0, 12.5,-5.2]]; };// Blackfish
		case "B_Heli_Attack_01_F": { _attach = [[-0.7,4,-1], [0.7,4,-1]]; };// Blackfoot
};

_lightRed = [20, 0.1, 0.1];
_lightBlue = [0.1, 0.1, 20];

_lightleft = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
sleep 0.2;
_lightleft setLightColor _lightBlue;
_lightleft setLightBrightness 0;
_lightleft lightAttachObject [_vehicle, _attach select 0];
_lightleft setLightAttenuation [0.181, 0, 1000, 130];
_lightleft setLightIntensity 20;
_lightleft setLightFlareSize 0.38;
_lightleft setLightFlareMaxDistance 150;
_lightleft setLightUseFlare true;
_lightleft setLightDayLight true;

_lightright = createVehicle ["#lightpoint", getPos _vehicle, [], 0, "CAN_COLLIDE"];
sleep 0.2;
_lightright setLightColor _lightBlue;
_lightright setLightBrightness 0;
_lightright lightAttachObject [_vehicle, _attach select 1];
_lightright setLightAttenuation [0.181, 0, 1000, 130];
_lightright setLightIntensity 20;
_lightright setLightFlareSize 0.38;
_lightright setLightFlareMaxDistance 150;
_lightright setLightUseFlare true;
_lightright setLightDayLight true;

if (sunOrMoon < 1) then {
	_brightness = 6;
} else {
	_brightness = 50;
};

_leftRed = true;  
while {(alive _vehicle)} do { 
	if (!(_vehicle getVariable "lights")) exitWith {};
	if (_leftRed) then {  
		_leftRed = false;  
		_lightright setLightBrightness 0;  
		sleep 0.05;
		_lightleft setLightBrightness _brightness;  
	} else {  
		_leftRed = true;  
		_lightleft setLightBrightness 0;  
		sleep 0.05;
		_lightright setLightBrightness _brightness;  
	};
	sleep 0.22;  
};  
deleteVehicle _lightleft;
deleteVehicle _lightright;
