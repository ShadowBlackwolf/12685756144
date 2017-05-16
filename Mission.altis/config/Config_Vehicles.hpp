class CarShops {
    /*
    *    ARRAY FORMAT:
    *        0: STRING (Classname)
    *        1: STRING (Condition)
    *    FORMAT:
    *        STRING (Conditions) - Must return boolean :
    *            String can contain any amount of conditions, aslong as the entire
    *            string returns a boolean. This allows you to check any levels, licenses etc,
    *            in any combination. For example:
    *                "call life_coplevel && license_civ_someLicense"
    *            This will also let you call any other function.
    *
    *   BLUFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_WEST
    *   OPFOR Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EAST
    *   Independent Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_GUER
    *   Civilian Vehicle classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgVehicles_CIV
    */
    class civ_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_SUV_01_F", "" },
            { "C_Offroad_02_unarmed_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_transport_F", "" },
            { "C_Van_01_box_F", "" },
            { "C_Van_01_fuel_F", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "I_Truck_02_transport_F", "" },
            { "I_Truck_02_covered_F", "" },
            { "I_Truck_02_fuel_F", "" },
            { "I_Truck_02_box_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "B_Truck_01_covered_F", "" },
            { "B_Truck_01_fuel_F", "" },
            { "B_Truck_01_box_F", "" },
            { "B_Truck_01_ammo_F", "" },
            { "O_Truck_03_transport_F", "" },
            { "O_Truck_03_covered_F", "" },
            { "O_Truck_03_fuel_F", "" },
            { "O_Truck_03_ammo_F", "" },
            { "O_Truck_03_repair_F", "" },
            { "O_Truck_03_device_F", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "C_Heli_Light_01_civil_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "I_Heli_Transport_02_F", "" },
            { "B_Heli_Transport_03_unarmed_F", "" },
            { "B_T_VTOL_01_infantry_F", "" },
            { "B_T_VTOL_01_vehicle_F", "" },
            { "O_Heli_Transport_04_bench_F", "" },
            { "O_Heli_Transport_04_box_F", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" },
            { "C_Boat_Transport_02_F", "" },
            { "C_Scooter_Transport_01_F", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "O_G_Offroad_01_armed_F", "" },
            { "O_T_LSV_02_unarmed_F", "" },
            { "B_T_LSV_01_unarmed_F", "" },
            { "B_MRAP_01_F", "" },
            { "O_MRAP_02_F", "" },
            { "O_MRAP_02_hmg_F", "" },
            { "I_MRAP_03_F", "" },
            { "O_APC_Wheeled_02_rcws_F", "" },
            { "I_APC_Wheeled_03_cannon_F", "" }
        };
    };
    class reb_air {
        side = "civ";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
            { "I_Heli_light_03_unarmed_F", "" },
            { "B_Heli_Transport_03_unarmed_F", "" },
            { "O_Heli_Transport_04_bench_F", "" },
            { "O_Heli_Attack_02_F", "" }
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "call life_mediclevel >= 1" },
            { "C_Offroad_01_F", "call life_mediclevel >= 1" },
            { "C_Van_01_box_F", "call life_mediclevel >= 2" },
            { "C_Offroad_02_unarmed_F", "call life_mediclevel >= 2" },
            { "C_Hatchback_01_F", "call life_mediclevel >= 3" },
            { "C_SUV_01_F", "call life_mediclevel >= 3" },
            { "B_MRAP_01_F", "call life_mediclevel >= 3" },
            { "O_Truck_03_fuel_F", "call life_mediclevel >= 3" },
            { "O_Truck_03_repair_F", "call life_mediclevel >= 3" },
            { "O_Truck_02_box_F", "call life_mediclevel >= 4" },
            { "O_MRAP_02_F", "call life_mediclevel >= 4" },
            { "C_Hatchback_01_sport_F", "call life_mediclevel >= 5" },
            { "I_MRAP_03_F", "call life_mediclevel >= 5" },
            { "B_Truck_01_ammo_F", "call life_mediclevel >= 5" },
            { "O_APC_Wheeled_02_rcws_F", "call life_mediclevel >= 6" },
            { "B_APC_Wheeled_01_cannon_F", "call life_mediclevel >= 7" },
        };
    };
    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_Heli_Light_01_civil_F", "call life_mediclevel >= 1" },
            { "O_Heli_Light_02_unarmed_F", "call life_mediclevel >= 2" },
            { "I_Heli_light_03_unarmed_F", "call life_mediclevel >= 3" },
            { "I_Heli_Transport_02_F", "call life_mediclevel >= 3" },
            { "O_Heli_Transport_04_medevac_F", "call life_mediclevel >= 4" },
            { "O_Heli_Transport_04_F", "call life_mediclevel >= 4" },
            { "B_Heli_Transport_03_unarmed_F", "call life_mediclevel >= 5" },
            { "B_Heli_Attack_01_F", "call life_mediclevel >= 6" },
            { "O_T_VTOL_02_infantry_F", "call life_mediclevel >= 6" },
            { "O_T_VTOL_02_vehicle_F", "call life_mediclevel >= 6" },
            { "B_T_VTOL_01_infantry_F", "call life_mediclevel >= 7" },
            { "B_Heli_Transport_01_camo_F", "call life_mediclevel >= 7" }
        };
    };

    class med_ship {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "call life_mediclevel >= 3" },
            { "C_Boat_Civil_01_police_F", "call life_mediclevel >= 4" },
            { "B_SDV_01_F", "call life_mediclevel >= 6" },
            { "C_Boat_Transport_02_F", "call life_mediclevel >=7" },
            
        };
    };
    
    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Quadbike_01_F", "call life_coplevel >= 1" },
            { "C_Offroad_01_F", "call life_coplevel >= 2" },
            { "C_Hatchback_01_F", "call life_coplevel >= 3" },
            { "C_Offroad_02_unarmed_F", "call life_coplevel >= 4" },
            { "C_SUV_01_F", "call life_coplevel >= 4" },
            { "B_T_LSV_01_unarmed_F", "call life_coplevel >= 5" },
            { "C_Hatchback_01_sport_F", "call life_coplevel >= 6" },
            { "B_MRAP_01_F", "call life_coplevel >= 7" },
            //{ "O_T_LSV_02_unarmed_F", "call life_coplevel >= 8" }, Kein Skin 
            { "O_MRAP_02_F", "call life_coplevel >= 8" },
            { "B_T_LSV_01_armed_F", "call life_coplevel >= 8" },
            { "I_MRAP_03_F", "call life_coplevel >= 9" },
            { "B_MRAP_01_hmg_F", "call life_coplevel >= 9" },
            //{ "O_LSV_02_armed_F", "call life_coplevel >= 10" },
            { "O_MRAP_02_hmg_F", "call life_coplevel >= 10" },
            { "O_APC_Wheeled_02_rcws_F", "call life_coplevel >= 10" },
            { "I_MRAP_03_hmg_F", "call life_coplevel >= 11" },
            { "B_APC_Wheeled_01_cannon_F", "call life_coplevel >= 11" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "call life_coplevel >= 3" },
            { "O_Heli_Light_02_unarmed_F", "call life_coplevel >= 4" },
            { "I_Heli_light_03_unarmed_F", "call life_coplevel >= 5" },
            { "I_Heli_Transport_02_F", "call life_coplevel >= 6" },
            { "B_Heli_Transport_03_unarmed_F", "call life_coplevel >= 7" },
            { "B_Heli_Transport_01_camo_F", "call life_coplevel >= 7" },
            { "B_T_VTOL_01_infantry_F", "call life_coplevel >= 8" },
            { "B_Heli_Attack_01_F", "call life_coplevel >= 9" },
            { "B_Heli_Transport_01_F", "call life_coplevel >= 10" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "B_Boat_Transport_01_F", "call life_coplevel >= 3" },
            { "C_Boat_Civil_01_police_F", "call life_coplevel >= 4" },
            { "B_SDV_01_F", "call life_coplevel >= 6" },
            { "C_Boat_Transport_02_F", "call life_coplevel >=7" },
            { "B_Boat_Armed_01_minigun_F", "call life_coplevel >= 8" }
            
        };
    };
};

class LifeCfgVehicles {
    class Land_CargoBox_V1_F {
        vItemSpace = 5000;
        conditions = "";
        price = -1;
        textures[] = {};
    };
    class Box_IND_Grenades_F {
        vItemSpace = 350;
        conditions = "";
        price = -1;
        textures[] = {};
    };
    class B_supplyCrate_F {
        vItemSpace = 700;
        conditions = "";
        price = -1;
        textures[] = {};
    };
    class C_Boat_Transport_02_F {
        vItemSpace = 100;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 22000;
        textures[] = {
            { "Civilian", "civ", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_civilian_CO.paa"
            },"" },
            { "Polizei", "cop", {
                "\A3\Boat_F_Exp\Boat_Transport_02\Data\Boat_Transport_02_exterior_CO.paa"
            }, "" }
        };
    };
    class C_Scooter_Transport_01_F {
        vItemSpace = 30;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Black_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Black_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Blue_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Blue_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Grey_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Grey_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Lime_co.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Lime_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Red_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_CO.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_Yellow_CO.paa",
                "\A3\Boat_F_Exp\Scooter_Transport_01\Data\Scooter_Transport_01_VP_Yellow_CO.paa"
            }, "" }
        };
    };
    class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 5000;
        textures[] = { };
    };
    class B_Boat_Armed_01_minigun_F {
        vItemSpace = 175;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 75000;
        textures[] = { };
    };
    class B_Boat_Transport_01_F {
        vItemSpace = 45;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 3000;
        textures[] = { };
    };
    class C_Boat_Civil_01_F {
        vItemSpace = 85;
        conditions = "license_civ_boat || {!(playerSide isEqualTo civilian)}";
        price = 10000;
        textures[] = { };
    };
    class C_Boat_Civil_01_police_F {
        vItemSpace = 85;
        conditions = "license_cop_cg || {!(playerSide isEqualTo west)}";
        price = 20000;
        textures[] = { };
    };
    class B_SDV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_boat || {license_cop_cg} || {(playerSide isEqualTo independent)}";
        price = 150000;
        textures[] = {};
    };
    class C_Offroad_02_unarmed_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Black", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_blue_co.paa"
            }, "" },
            { "Green", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_green_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_orange_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_Exp\Offroad_02\Data\offroad_02_ext_white_co.paa"
            }, "" },
            { "polizei", "cop", {
                "Textures\Fahrzeuge\4wd\polizei.paa"
            }, "" },
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\4wd\Feuerwehr.paa"
            }, "" }
        };
    };
    class C_Offroad_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 12500;
        textures[] = {
            { "Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE01_CO.paa"
            }, "" },
            { "White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE02_CO.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE03_CO.paa"
            }, "" },
            { "Dark Red", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE04_CO.paa"
            }, "" },
            { "Blue / White", "civ", {
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa",
                "\A3\soft_F\Offroad_01\Data\offroad_01_ext_BASE05_CO.paa"
            }, "" },
            { "Taxi", "civ", {
                "#(argb,8,8,3)color(0.6,0.3,0.01,1)"
            }, "" },
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\Gelandewagen\Feuerwehr.paa"
            }, "" },
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\Gelandewagen\Polizei.paa"
            }, "" }
        };
    };
    class B_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 2500;
        textures[] = {
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\Quad\Polizei.paa"
            }, "" },
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\Quad\Feuerwehr.paa"
            }, "" },
            { "Digi Desert", "reb", {
                "\A3\Soft_F\Quadbike_01\Data\quadbike_01_opfor_co.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_black_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_blue_co.paa"
            }, "" },
            { "Red", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_red_co.paa"
            }, "" },
            { "White", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_civ_white_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\A3\Soft_F_beta\Quadbike_01\Data\quadbike_01_indp_co.paa"
            }, "" },
            { "Hunter Camo", "civ", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" },
            { "Rebel Camo", "reb", {
                "\a3\soft_f_gamma\Quadbike_01\data\quadbike_01_indp_hunter_co.paa"
            }, "" }
        };
    };
    class C_Hatchback_01_F {
        vItemSpace = 40;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 9500;
        textures[] = {
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base01_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base02_co.paa"
            }, "" },
            { "Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base03_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base04_co.paa"
            }, "" },
            { "Yellow", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base06_co.paa"
            }, "" },
            { "White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base07_co.paa"
            }, "" },
            { "Grey", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base08_co.paa"
            }, "" },
            { "Black", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_base09_co.paa"
            }, "" },
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\limosine\Polizei.paa"
            }, "" },
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\limosine\Feuerwehr.paa"
            }, "" }
        };
    };
    class C_Hatchback_01_sport_F {
        vItemSpace = 45;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 40000;
        textures[] = {
            { "Red", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport01_co.paa"
            }, "" },
            { "Dark Blue", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport02_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport03_co.paa"
            }, "" },
            { "Black / White", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport04_co.paa"
            }, "" },
            { "Beige", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport05_co.paa"
            }, "" },
            { "Green", "civ", {
                "\a3\soft_f_gamma\Hatchback_01\data\hatchback_01_ext_sport06_co.paa"
            }, "" },
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\limosine\Polizei.paa"
            }, "" },
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\limosine\Feuerwehr.paa"
            }, "" }
        };
    };
    class C_SUV_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 30000;
        textures[] = {
            { "Dark Red", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_co.paa"
            }, "" },
            { "Silver", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_03_co.paa"
            }, "" },
            { "Orange", "civ", {
                "\a3\soft_f_gamma\SUV_01\Data\suv_01_ext_04_co.paa"
            }, "" },
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\suv\Polizei.paa"
            }, "" }, 
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\suv\Feuerwehr.paa"
            }, "" }
        };
    };
    class O_G_Offroad_01_armed_F {
        vItemSpace = 65;
        conditions = "license_civ_rebel || {!(playerSide isEqualTo civilian)}";
        price = 750000;
        textures[] = { 
        { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Gelandewagen\Rebellen.paa"
            }, "" }
        };
    };
    class O_T_LSV_02_unarmed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Rebellen", "reb", {
                "Textures\Fahrzeuge\Qillin\Rebellen.paa",
                "Textures\Fahrzeuge\Qillin\Rebellen_2.paa"
            }, "" },
			{ "Feuerwehr", "med", {
                "Textures\Fahrzeuge\Qillin\Feuerwehr.paa",
                "Textures\Fahrzeuge\Qillin\Rebellen_2.paa"
            }, "" }
        };
    };
    class O_T_LSV_02_armed_F {
        vItemSpace = 100;
        conditions = "";
        price = 100000;
        textures[] = {
            { "Arid", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_arid_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_arid_CO.paa"
            }, "" },
            { "Black", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_black_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_black_CO.paa"
            }, "" },
            { "Green Hex", "civ", {
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_01_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_02_ghex_CO.paa",
                "\A3\Soft_F_Exp\LSV_02\Data\CSAT_LSV_03_ghex_CO.paa"
            }, "" }
        };
    };
    class B_T_LSV_01_armed_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Prowler\Polizei.paa",
                "Textures\Fahrzeuge\Prowler\Polizei_2.paa",
                "Textures\Fahrzeuge\Prowler\Polizei_3.paa",
                "Textures\Fahrzeuge\Prowler\Polizei_4.paa"
            }, "" }
        };
    };
    class B_T_LSV_01_unarmed_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Prowler\Polizei.paa",
                "Textures\Fahrzeuge\Prowler\Polizei_2.paa",
                "Textures\Fahrzeuge\Prowler\Polizei_3.paa",
                "Textures\Fahrzeuge\Prowler\Polizei_4.paa"
            }, "" },
            { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Prowler\Rebellen.paa",
                "Textures\Fahrzeuge\Prowler\Rebellen_2.paa",
                "Textures\Fahrzeuge\Prowler\Polizei_3.paa",
                "Textures\Fahrzeuge\Prowler\Rebellen_4.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Prowler\Feuerwehr.paa",
                "Textures\Fahrzeuge\Prowler\Feuerwehr_2.paa",
                "Textures\Fahrzeuge\Prowler\Polizei_3.paa",
                "Textures\Fahrzeuge\Prowler\Feuerwehr_4.paa"
            }, "" }
        };
    };
    class B_MRAP_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Hunter\Rebellen.paa",
                "Textures\Fahrzeuge\Hunter\Rebellen_2.paa"
            }, "" },
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Hunter\Polizei.paa",
                "Textures\Fahrzeuge\Hunter\Polizei_2.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Hunter\Feuerwehr.paa",
                "Textures\Fahrzeuge\Hunter\Feuerwehr_2.paa"
            }, "" }
        };
    };
    class B_MRAP_01_hmg_F {
        vItemSpace = 100;
        conditions = "";
        price = 750000;
        textures[] = {
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\Hunter\Polizei.paa",
                "Textures\Fahrzeuge\Hunter\Polizei_2.paa",
                "Textures\Fahrzeuge\hmg.paa"
            }, "" }
        };
    };
    class O_MRAP_02_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Ifrit\Polizei.paa",
                "Textures\Fahrzeuge\Ifrit\Polizei_2.paa"
            }, "" },
            { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Ifrit\Rebellen.paa",
                "Textures\Fahrzeuge\Ifrit\Rebellen_2.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Ifrit\Feuerwehr.paa",
                "Textures\Fahrzeuge\Ifrit\Feuerwehr_2.paa"
            }, "" }
        };
    };
    class O_MRAP_02_hmg_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Ifrit\Polizei.paa",
                "Textures\Fahrzeuge\Ifrit\Polizei_2.paa",
                "Textures\Fahrzeuge\hmg.paa"
            }, "" },
            { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Ifrit\Rebellen.paa",
                "Textures\Fahrzeuge\Ifrit\Rebellen_2.paa",
                "Textures\Fahrzeuge\Ifrit\Rebellen_lmg.paa"
            }, "" }
        };
    };
    class I_MRAP_03_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Strider\Polizei.paa"
            }, "" },
            { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Strider\Rebellen.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Strider\Feuerwehr.paa"
            }, "" }
        };
    };
    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 15000;
        textures[] = {};
    };
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};
    class I_MRAP_03_hmg_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Strider\Polizei.paa",
                "Textures\Fahrzeuge\Strider\lmg.paa"
            }, "" }
        };
    };
    class B_APC_Wheeled_01_cannon_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Marshall\Polizei.paa",
                "Textures\Fahrzeuge\Marshall\Polizei_2.paa",
                "Textures\Fahrzeuge\Marshall\Polizei_3.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Marshall\Feuerwehr.paa",
                "Textures\Fahrzeuge\Marshall\Feuerwehr_2.paa",
                ""
            }, "" },
            { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Marshall\Rebellen.paa",
                "Textures\Fahrzeuge\Marshall\Rebellen_2.paa",
                ""
            }, "" }
        };
    }; 
    class O_APC_Wheeled_02_rcws_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\marid\Polizei.paa",
                "Textures\Fahrzeuge\marid\Polizei_2.paa",
                ""
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\marid\Feuerwehr.paa",
                "Textures\Fahrzeuge\marid\Feuerwehr_2.paa",
                ""
            }, "" }
        };
    }; 
    class I_APC_Wheeled_03_cannon_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Gorgon\Rebellen.paa",
               "Textures\Fahrzeuge\Gorgon\Rebellen_2.paa",
               "Textures\Fahrzeuge\Gorgon\Rebellen_3.paa",
               "Textures\Fahrzeuge\Gorgon\Rebellen_4.paa"
            }, "" }
        };
    }; 
    class C_Plane_Civil_01_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {!(playerSide isEqualTo civilian)}";
        price = 150000;
        textures[] = {
            { "Racing (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Racing", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Racer_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Red Line (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Red Line", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_RedLine_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Tribal (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Tribal", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Tribal_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" },
            { "Blue Wave (Tan Interior)", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_tan_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_tan_co.paa"
            }, "" },
            { "Blue Wave", "civ", {
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_01_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_ext_02_Wave_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_01_co.paa",
                "A3\Air_F_Exp\Plane_Civil_01\Data\btt_int_02_co.paa"
            }, "" }
        };
    };
    class B_Heli_Light_01_F {
        vItemSpace = 90;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\Hummingbird\Polizei.paa"
            }, "" },
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Rebellen", "reb", {
                "Textures\Fahrzeuge\Hummingbird\Rebellen.paa"
            }, "" }
        };
    };
    class C_Heli_Light_01_civil_F : B_Heli_Light_01_F {
        vItemSpace = 75;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 245000;
        textures[] = {
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_co.paa"
            }, "" },
            { "Blueline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_blueline_co.paa"
            }, "" },
            { "Elliptical", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_elliptical_co.paa"
            }, "" },
            { "Furious", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_furious_co.paa"
            }, "" },
            { "Jeans Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_jeans_co.paa"
            }, "" },
            { "Speedy Redline", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_speedy_co.paa"
            }, "" },
            { "Sunset", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sunset_co.paa"
            }, "" },
            { "Vrana", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_vrana_co.paa"
            }, "" },
            { "Waves Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_wave_co.paa"
            }, "" },
            { "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" },
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\Hummingbird\Feuerwehr.paa"
            }, "" }
        };
    };
    class O_Heli_Light_02_unarmed_F {
        vItemSpace = 210;
        conditions = "license_civ_pilot || {license_med_mAir} || {(playerSide isEqualTo west)}";
        price = 750000;
        textures[] = {
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\Orca\Polizei.paa"
            }, "" },
            { "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" },
            { "Rebellen", "reb", {
                "Textures\Fahrzeuge\Orca\Rebellen.paa"
            }, "" },
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\Orca\Feuerwehr.paa"
            }, "" }
        };
    };
    class I_Heli_light_03_unarmed_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Hellcat\Polizei.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Hellcat\Feuerwehr.paa"
            }, "" },
            { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Hellcat\Rebellen.paa"
            }, "" }
        };
    }; 
    class B_Heli_Transport_01_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\Ghosthawk\Polizei.paa",
                "Textures\Fahrzeuge\Ghosthawk\Polizei_2.paa"
            }, "" }
        };
    };
    class B_Heli_Transport_01_camo_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\Ghosthawk\Polizei.paa",
                "Textures\Fahrzeuge\Ghosthawk\Polizei_2.paa"
            }, "" },
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\Ghosthawk\Feuerwehr.paa",
                "Textures\Fahrzeuge\Ghosthawk\Feuerwehr_2.paa"
            }, "" }
        };
    };
    class I_Heli_Transport_02_F {
        vItemSpace = 200;
        conditions = "license_cop_cAir || {!(playerSide isEqualTo west)}";
        price = 200000;
        textures[] = {
            { "Ion", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_ion_co.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_ion_co.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_ion_co.paa"
            }, "" },
            { "Dahoman", "civ", {
                "\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_1_dahoman_co.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_2_dahoman_co.paa",
				"\a3\air_f_beta\Heli_Transport_02\Data\Skins\heli_transport_02_3_dahoman_co.paa"
            }, "" },
            { "Polizei", "cop", {
                "Textures\Fahrzeuge\Mohawk\Polizei.paa",
                "Textures\Fahrzeuge\Mohawk\Polizei_2.paa",
                "Textures\Fahrzeuge\Mohawk\Polizei_3.paa"
            }, "" },
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\Mohawk\Feuerwehr.paa",
                "Textures\Fahrzeuge\Mohawk\Feuerwehr_2.paa",
                "Textures\Fahrzeuge\Mohawk\Feuerwehr_3.paa"
            }, "" }
        };
    };   
    class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Grün", "civ", {
             "\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext01_co.paa",
			 "\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_co.paa"
            }, "" },
            { "Schwarz", "civ", {
               "\A3\Air_F_Heli\Heli_Transport_03\Data\Heli_Transport_03_ext01_black_CO.paa",
			   "\a3\air_f_heli\heli_transport_03\data\heli_transport_03_ext02_black_co.paa"
            }, "" },
            { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Huron\Rebellen.paa",
                "Textures\Fahrzeuge\Huron\Rebellen_2.paa"
            }, "" },
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Huron\Polizei.paa",
                "Textures\Fahrzeuge\Huron\Polizei_2.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Huron\Feuerwehr.paa",
                "Textures\Fahrzeuge\Huron\Feuerwehr_2.paa"
            }, "" }
        };
    }; 
    class O_Heli_Transport_04_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Taru\Feuerwehr.paa",
                "Textures\Fahrzeuge\Taru\Feuerwehr_2.paa"
            }, "" },
            { "Schwarz", "civ", {
               "A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_co.paa",
			   "A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_co.paa"
            }, "" }
        };
    };
    class O_Heli_Transport_04_medevac_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Taru\Feuerwehr.paa",
                "Textures\Fahrzeuge\Taru\Feuerwehr_2.paa",
                "Textures\Fahrzeuge\Taru\Feuerwehr_adds_1.paa",
                "Textures\Fahrzeuge\Taru\Feuerwehr_adds_2.paa"
            }, "" }
        };
    };
    class O_Heli_Transport_04_bench_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Rebellen", "reb", {
              "Textures\Fahrzeuge\Taru\Rebellen.paa",
                "Textures\Fahrzeuge\Taru\Rebellen_2.paa",
				"A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_bench_Black_CO.paa"
            }, "" }
        };
    };
    class O_Heli_Transport_04_box_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Schwarz", "civ", {
              "A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_01_Black_CO.paa",
			  "A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_base_02_Black_CO.paa",
			  "A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext01_Black_CO.paa",
			  "A3\Air_F_Heli\Heli_Transport_04\Data\Heli_Transport_04_Pod_Ext02_Black_CO.paa"
            }, "" }
        };
    };
    class B_T_VTOL_01_infantry_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Olive", "civ", {
               "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa", 
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"
            }, "" },
            { "Blau", "civ", {
               "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"
            }, "" },
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Blackfish\Polizei.paa",
                "Textures\Fahrzeuge\Blackfish\Polizei_2.paa",
                "Textures\Fahrzeuge\Blackfish\Polizei_3.paa",
                "Textures\Fahrzeuge\Blackfish\Polizei_4.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Blackfish\Feuerwehr.paa",
                "Textures\Fahrzeuge\Blackfish\Feuerwehr_2.paa",
                "Textures\Fahrzeuge\Blackfish\Feuerwehr_3.paa",
                "Textures\Fahrzeuge\Blackfish\Feuerwehr_4.paa"
            }, "" }
        };
    };
    class B_T_VTOL_01_vehicle_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Olive", "civ", {
               "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_olive_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_olive_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_olive_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_olive_CO.paa"
            }, "" },
            { "Blau", "civ", {
               "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT01_blue_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT02_blue_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT03_blue_CO.paa",
			   "\A3\Air_F_Exp\VTOL_01\Data\VTOL_01_EXT04_blue_CO.paa"
            }, "" },
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Blackfish\Polizei.paa",
                "Textures\Fahrzeuge\Blackfish\Polizei_2.paa",
                "Textures\Fahrzeuge\Blackfish\Polizei_3.paa",
                "Textures\Fahrzeuge\Blackfish\Polizei_4.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Blackfish\Feuerwehr.paa",
                "Textures\Fahrzeuge\Blackfish\Feuerwehr_2.paa",
                "Textures\Fahrzeuge\Blackfish\Feuerwehr_3.paa",
                "Textures\Fahrzeuge\Blackfish\Feuerwehr_4.paa"
            }, "" }
        };
    };
    class O_T_VTOL_02_infantry_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Xiam\Feuerwehr.paa",
                "Textures\Fahrzeuge\Xiam\Feuerwehr_2.paa",
                "Textures\Fahrzeuge\Xiam\Feuerwehr_3_L.paa",
                "Textures\Fahrzeuge\Xiam\Feuerwehr_3_R.paa"
            }, "" }
        };
    };
    class O_T_VTOL_02_vehicle_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Xiam\Feuerwehr.paa",
                "Textures\Fahrzeuge\Xiam\Feuerwehr_2.paa",
                "Textures\Fahrzeuge\Xiam\Feuerwehr_3_L.paa",
                "Textures\Fahrzeuge\Xiam\Feuerwehr_3_R.paa"
            }, "" }
        };
    };
    class B_Heli_Attack_01_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Polizei", "cop", {
               "Textures\Fahrzeuge\Blackfoot\Polizei.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Blackfoot\Feuerwehr.paa"
            }, "" }
        };
    };
    class O_Heli_Attack_02_F {
        vItemSpace = 65;
        conditions = "";
        price = 30000;
        textures[] = {
            { "Rebellen", "reb", {
               "Textures\Fahrzeuge\Kayman\Rebellen.paa",
               "Textures\Fahrzeuge\Kayman\Rebellen_2.paa"
            }, "" }
        };
    };
    class C_Van_01_transport_F {
        vItemSpace = 100;
        conditions = "license_civ_driver || {!(playerSide isEqualTo civilian)}";
        price = 45000;
        textures[] = {
            { "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
                { "Weiß", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
            }, "" },  
            { "Schwarz", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_black_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
            }, "" },    
            { "Rot", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_red_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
            }, "" }
        };
    };
    class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 60000;
        textures[] = {
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\Truck\Feuerwehr.paa",
                "Textures\Fahrzeuge\Truck\Feuerwehr_2.paa"
            }, "" },
            { "Weiß/Schwarz", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
            }, "" },  
            { "Schwarz", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_black_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
            }, "" },    
            { "Rot/Schwarz", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_red_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\van_01_adds_CO.paa"
            }, "" }  
        };
    };
    class C_Van_01_fuel_F {
        vItemSpace = 20;
        vFuelSpace = 19500;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 120000;
        textures[] = {
            { "Weiß/Rot-Weiß", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\Van_01_tank_red_CO.paa"
            }, "" },  
            { "Schwarz/Rot-Weiß", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_black_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\Van_01_tank_red_CO.paa"
            }, "" },    
            { "Rot/Rot-Weiß", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_red_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\Van_01_tank_red_CO.paa"
            }, "" },
            { "Weiß/Schwarz-weiß", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\Van_01_tank_CO.paa"
            }, "" },  
            { "Schwarz/Schwarz-weiß", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_black_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\Van_01_tank_CO.paa"
            }, "" },    
            { "Rot/Schwarz-weiß", "civ", {
                "\A3\soft_f_gamma\van_01\Data\van_01_ext_red_CO.paa",
                "\A3\soft_f_gamma\van_01\Data\Van_01_tank_CO.paa"
            }, "" }
        };
    };
    class I_Truck_02_covered_F {
        vItemSpace = 250;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 100000;
        textures[] = {
            { "Orange/Blau", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },  
            { "Orange/Olive", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_olive_CO.paa"
            }, "" },    
            { "Blau/Blau", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_CO.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },  
            { "Blau/Olive", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_CO.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_olive_CO.paa"
            }, "" }    
        };
    };
    class I_Truck_02_box_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\Zamak\Feuerwehr.paa",
                "Textures\Fahrzeuge\Zamak\Feuerwehr_2.paa"
            }, "" }, 
            { "Orange/Orange", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa"
            }, "" },  
            { "Orange/Grün", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_repair_green_co.paa"
            }, "" },    
            { "Blau/Orange", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_CO.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_repair_co.paa"
            }, "" },  
            { "Blau/grün", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_CO.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_repair_green_co.paa"
            }, "" }   
        };
    };
    class I_Truck_02_transport_F {
        vItemSpace = 200;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 75000;
        textures[] = {
            { "Orange", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" },
            { "Blau", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_CO.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_kuz_co.paa"
            }, "" }
        };
    };
    class I_Truck_02_fuel_F {
        vItemSpace = 40;
        vFuelSpace = 42000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = {
           { "Orange", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_co.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" },
            { "Blau", "civ", {
                "\a3\soft_f_beta\Truck_02\data\truck_02_kab_blue_CO.paa",
                "\a3\soft_f_beta\Truck_02\data\truck_02_fuel_co.paa"
            }, "" } 
        };
    };
    class B_Truck_01_transport_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = {
            { "Standart", "civ", {
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa", 
				"\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"
            }, "" }
        };
    };    
    class B_Truck_01_covered_F {
        vItemSpace = 325;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 275000;
        textures[] = {
            { "Standart", "civ", {
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
				"\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa"
            }, "" }
        };
    };
    class B_Truck_01_fuel_F {
        vItemSpace = 50;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {
            { "Standart", "civ", {
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
				"\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
				"\A3\Soft_F_Gamma\Truck_01\Data\truck_01_Fuel_CO.paa"
            }, "" }
        };
    };   
    class B_Truck_01_box_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = {
            { "Standart", "civ", {
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
				"\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
				"\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa"
            }, "" }
        };
    };  
    class B_Truck_01_ammo_F {
        vItemSpace = 450;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 350000;
        textures[] = { 
            { "Standart", "civ", {
                "\a3\soft_f_beta\truck_01\data\truck_01_ext_01_co.paa",
				"\a3\soft_f_beta\truck_01\data\truck_01_ext_02_co.paa",
				"\A3\Soft_F_Gamma\Truck_01\Data\truck_01_ammo_CO.paa"
            }, "" },
            { "Feuerwehr", "med", {
               "Textures\Fahrzeuge\Hemmt\Feuerwehr.paa",
			   "Textures\Fahrzeuge\Hemmt\Feuerwehr_2.paa",
			   "Textures\Fahrzeuge\Hemmt\Feuerwehr_3.paa"
            }, "" }
        };
    };
    class O_Truck_03_transport_F {
        vItemSpace = 285;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 200000;
        textures[] = { 
            { "Standart", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa"
            }, "" },
            { "Ghex", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa"
            }, "" }
        };
    };
    class O_Truck_03_covered_F {
        vItemSpace = 300;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {
            { "Standart", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_CO.paa"
            }, "" },
            { "Ghex", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
                "\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
            }, "" }
        };
    };
    class O_Truck_03_fuel_F {
        vItemSpace = 300;
        vFuelSpace = 75000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {
            { "Standart", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_fuel_CO.paa"
            }, "" },
            { "Ghex", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cover_ghex_CO.paa"
            }, "" },
            { "Feuerwehr", "med", {
                 "Textures\Fahrzeuge\Tempest\Feuerwehr.paa",
                "Textures\Fahrzeuge\Tempest\Feuerwehr_2.paa",
                "Textures\Fahrzeuge\Tempest\Feuerwehr_Tank.paa"
            }, "" }
        };
    };
    class O_Truck_03_ammo_F {
        vItemSpace = 300;
        vFuelSpace = 75000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {
             { "Standart", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
				"\A3\Structures_F\Data\Metal\Containers\Containers_colors_01_co.paa"
            }, "" },
            { "Standart", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
				"\A3\Structures_F\Data\Metal\Containers\Containers_colors_02_co.paa"
            }, "" },
            { "Standart", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
				"\A3\Structures_F\Data\Metal\Containers\Containers_colors_03_co.paa"
            }, "" },
            { "Standart", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
				"\A3\Structures_F\Data\Metal\Containers\Containers_colors_04_co.paa"
            }, "" },
            { "Standart", "civ", {
                "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				"\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa", 
				"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
            }, "" },
            { "Ghex", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa", 
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa", 
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
				"\A3\Structures_F\Data\Metal\Containers\Containers_colors_01_co.paa"
            }, "" },
            { "Ghex", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa", 
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
				"\A3\Structures_F\Data\Metal\Containers\Containers_colors_02_co.paa"
            }, "" },
            { "Ghex", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa", 
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
				"\A3\Structures_F\Data\Metal\Containers\Containers_colors_03_co.paa"
            }, "" },
            { "Ghex", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
				"\A3\Structures_F\Data\Metal\Containers\Containers_colors_04_co.paa"
            }, "" },
            { "Ghex", "civ", {
                "\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				"\A3\Soft_F_Exp\Truck_03\Data\Truck_03_cargo_ghex_CO.paa",
				"\A3\Structures_F\Data\Metal\Containers\Containers_colors_05_co.paa"
            }, "" }
        };
    };
    class O_Truck_03_repair_F {
        vItemSpace = 300;
        vFuelSpace = 75000;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 250000;
        textures[] = {
             { "Standart", "civ", {
                 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_CO.paa"
            }, "" },
            { "Ghex", "civ", {
                 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_ghex_CO.paa",
				 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_ghex_CO.paa",
				 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ammo_ghex_CO.paa"
            }, "" },
            { "Feuerwehr", "med", {
                "Textures\Fahrzeuge\Tempest\Feuerwehr.paa",
                "Textures\Fahrzeuge\Tempest\Feuerwehr_2.paa",
                "Textures\Fahrzeuge\Tempest\Feuerwehr_cargo.paa"
            }, "" }
        };
    };
    class O_Truck_03_device_F {
        vItemSpace = 350;
        conditions = "license_civ_trucking || {!(playerSide isEqualTo civilian)}";
        price = 450000;
        textures[] = { 
             { "Standart", "civ", {
                 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
				 "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
				 "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
            }, "" },
            { "Ghex", "civ", {
                 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext01_CO.paa",
				 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_ext02_CO.paa",
				 "\A3\Soft_F_EPC\Truck_03\Data\Truck_03_cargo_CO.paa",
				 "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_02_CO.paa",
				 "\A3\Structures_F_EPC\Items\Electronics\Data\The_Device_03_CO.paa"
            }, "" }
        };
    };
};