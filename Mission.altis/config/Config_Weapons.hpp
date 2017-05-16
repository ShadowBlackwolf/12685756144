/*
*    FORMAT:
*        STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*            
*
*    ARRAY FORMAT:
*        0: STRING (Classname): Item Classname
*        1: STRING (Nickname): Nickname that will appear purely in the shop dialog
*        2: SCALAR (Buy price)
*        3: SCALAR (Sell price): To disable selling, this should be -1
*        4: STRING (Conditions): Same as above conditions string
*
*    Weapon classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Weapons
*    Item classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Items
*
*/
class WeaponShops {
    //Armory Shops
    class gun {
        name = "Legaler Waffenhändler Altis";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Rook40_F", "", 18000, 9000, "" },
            { "hgun_Pistol_01_F", "", 20000, 10000, "" }, 
            { "hgun_Pistol_heavy_02_F", "", 21000, 10500, "" },
            { "hgun_ACPC2_F", "", 28000, 14000, "" },
            { "SMG_05_F", "", 40000, 20000, "" }, 
            { "hgun_PDW2000_F", "", 38000, 19000, "" },
			{ "SMG_01_F", "", 47000, 23000, "" },
			{ "arifle_SDAR_F", "", 48000, 24000, "" },
			{ "SMG_02_F", "", 70000, 35000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 1000, 500, "" },
            { "6Rnd_45ACP_Cylinder", "", 1000, 500, "" },
            { "9Rnd_45ACP_Mag", "", 1000, 500, "" },
            { "30Rnd_9x21_Mag", "", 2000, 1000, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 2000, 1000, "" },
            { "10Rnd_9x21_Mag", "", 2000, 1000, "" }, 
			{ "20Rnd_556x45_UW_mag", "",2000, 1000, "" },
			{ "30Rnd_45ACP_Mag_SMG_01", "", 3000, 1500, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, 1250, "" }
        };
    };

    class rebel {
        name = "Rebellenhandel des Schwarzen Wolfs";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_SDAR_F", "", 50000, 25000, "" },
            { "arifle_CTAR_hex_F", "", 280000, 140000, "" },
            { "arifle_CTAR_ghex_F", "", 280000, 140000, "" },
            { "arifle_TRG20_F", "", 130000, 65000, "" }, 
            { "arifle_Mk20_F", "", 130000, 65000, "" }, 
            { "arifle_Katiba_F", "", 140000, 70000, "" }, 
			{ "arifle_AKM_F", "", 150000, 75000, "" }, 
			{ "arifle_AKS_F", "", 110000, 55000, "" }, 
            { "LMG_03_F", "", 400000, 200000, "" }, 
            { "srifle_DMR_06_camo_F", "", 320000, 160000, "" }, 
			{ "srifle_DMR_06_olive_F", "", 320000, 160000, "" },
            { "arifle_MXC_F", "", 160000, 90000, "" },
            { "arifle_SPAR_01_khk_F", "", 130000, 65000, "" }, 
            { "arifle_SPAR_01_snd_F", "", 130000, 65000, "" }, 
            { "arifle_SPAR_02_khk_F", "", 210000, 105000, "" }, 
            { "arifle_SPAR_02_snd_F", "", 210000, 105000, "" },
            { "arifle_ARX_ghex_F", "", 190000, 95000, "" },
            { "arifle_ARX_hex_F", "", 190000, 95000, "" },
            { "srifle_EBR_F", "", 310000, 155000, "" },
            { "arifle_MXM_F", "", 180000, 90000, "" },  
            { "LMG_Mk200_F", "", 880000, 440000, "" }, 
            { "arifle_MX_SW_F", "", 430000, 215000, "" }, 
			{ "arifle_MX_SW_khk_F", "", 430000, 215000, "" },
            { "arifle_MX_F", "", 170000, 85000, "" },
            { "arifle_MX_khk_F", "", 170000, 85000, "" },
            { "srifle_DMR_04_F", "", 1200000, 600000, "" }, 
            { "srifle_DMR_04_Tan_F", "", 1200000, 600000, "" }, 
            { "arifle_AK12_F", "", 380000, 190000, "" }, 
            { "srifle_DMR_07_hex_F", "", 185000, 92500, "" },
			{ "srifle_DMR_07_ghex_F", "", 185000, 92500, "" },
            { "arifle_SPAR_03_khk_F", "", 430000, 215000, "" },
            { "arifle_SPAR_03_snd_F", "", 430000, 215000, "" }, 
            { "srifle_DMR_01_F", "", 230000, 115000, "" }, 
            { "srifle_DMR_03_F", "", 440000, 220000, "" }, 
            { "srifle_DMR_03_khaki_F", "", 440000, 220000, "" }, 
            { "srifle_DMR_03_tan_F", "", 440000, 220000, "" },
			{ "srifle_DMR_03_multicam_F", "", 440000, 220000, "" },
            { "srifle_DMR_03_woodland_F", "", 440000, 220000, "" },
            { "srifle_DMR_05_hex_F", "", 1600000, 800000, "" }, 
            { "srifle_DMR_05_hex_F", "", 1600000, 800000, "" }, 
            { "LMG_Zafir_F", "", 980000, 490000, "" }, 
            { "srifle_LRR_F", "", 1900000, 950000, "" }, 
            { "srifle_DMR_02_F", "", 1800000, 900000, "" },
			{ "srifle_DMR_02_camo_F", "", 1800000, 900000, "" },
            { "srifle_DMR_02_sniper_F", "", 1800000, 900000, "" },
            { "MMG_01_hex_F", "", 7800000, 3900000, "" },
            { "MMG_01_tan_F", "", 7800000, 3900000, "" }, 
            { "srifle_GM6_F", "", 2100000, 1050000, "" }, 
            { "MMG_02_camo_F", "", 8000000, 4000000, "" }, 
            { "MMG_02_sand_F", "", 8000000, 4000000, "" }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 1100, 550, "" },
            { "30Rnd_65x39_caseless_mag", "", 1400, 700, "" }, 
            { "150Rnd_556x45_Drum_Mag_F", "", 4900, 2450, "" }, 
            { "30Rnd_65x39_caseless_green", "", 1400, 700, "" },
            { "20Rnd_762x51_Mag", "", 3250, 1700, "" },
            { "200Rnd_65x39_cased_Box", "", 8000, 4000, "" },
            { "100Rnd_65x39_caseless_mag", "", 2800, 1400, "" }, 
            { "10Rnd_127x54_Mag", "", 10000, 5000, "" }, 
            { "30Rnd_762x39_Mag_F", "", 5600, 2800, "" },
            { "20Rnd_650x39_Cased_Mag_F", "", 3100, 1500, "" },
            { "10Rnd_762x54_Mag", "", 2700, 1300, "" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 14000, 7000, "" },
            { "150Rnd_762x54_Box", "", 10500, 5250, "" }, 
            { "7Rnd_408_Mag", "", 21000, 10500, "" }, 
            { "10Rnd_338_Mag", "", 19000, 9500, "" },
            { "150Rnd_93x64_Mag", "", 56000, 26000, "" },
            { "5Rnd_127x108_Mag", "", 25700, 12500, "" },
            { "130Rnd_338_Mag", "", 58000, 29000, "" } 			
        };
        accs[] = {
            { "muzzle_snds_H", "", 60000, 30000, "" },
            { "muzzle_snds_H_khk_F", "", 60000, 30000, "" },
            { "muzzle_snds_H_snd_F", "", 60000, 30000, "" },
			{ "muzzle_snds_M", "", 50000, 25000, "" },
            { "muzzle_snds_m_khk_F", "", 50000, 25000, "" },
            { "muzzle_snds_m_snd_F", "", 50000, 25000, "" },
			{ "muzzle_snds_B", "", 70000, 35000, "" },
            { "muzzle_snds_B_khk_F", "", 70000, 35000, "" },
            { "muzzle_snds_B_snd_F", "", 70000, 35000, "" },
			{ "muzzle_snds_H_MG", "", 80000, 40000, "" },
            { "muzzle_snds_H_MG_blk_F", "", 80000, 40000, "" },
            { "muzzle_snds_58_blk_F", "", 50000, 25000, "" },
			{ "optic_Aco", "", 3000, 1500, "" },
            { "optic_ACO_grn", "", 3000, 1500, "" },
            { "optic_Holosight", "", 6000, 3000, "" },
			{ "Mk17 Holosight SMG", "", 6000, 3000, "" },
            { "optic_Arco", "", 25000, 12500, "" },
            { "optic_Arco_ghex_F", "", 25000, 12500, "" },
			{ "optic_Arco_blk_F", "", 25000, 12500, "" },
            { "optic_Hamr", "", 28000, 14000, "" },
            { "optic_Hamr_khk_F", "", 28000, 14000, "" },
			{ "optic_MRCO", "", 35000, 18000, "" },
            { "optic_DMS", "", 45000, 22500, "" },
            { "optic_DMS_ghex_F", "", 45000, 22500, "" },
			{ "acc_flashlight", "", 35000, 18000, "" },
            { "acc_pointer_IR", "", 35000, 18000, "" },
            { "bipod_01_F_snd", "", 52000, 26000, "" },
			{ "bipod_01_F_blk", "", 52000, 26000, "" },
            { "bipod_01_F_mtp", "", 52000, 26000, "" },
            { "bipod_02_F_tan", "", 52000, 26000, "" },
			{ "bipod_02_F_hex", "", 52000, 26000, "" },
            { "bipod_03_F_oli", "", 52000, 26000, "" }
        };
    };

    class gang {
        name = "Ganghaus des Wolfes";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_Rook40_F", "", 18000, 9000, "" },
            { "hgun_Pistol_heavy_02_F", "", 21000, 10500, "" },
            { "hgun_ACPC2_F", "", 22000, 11000, "" },
            { "hgun_PDW2000_F", "", 35000, 18000, "" },
			{ "arifle_AKM_F", "", 120000, 60000, "" },
			{ "arifle_AKS_F", "", 80000, 40000, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 700, 350, "" },
            { "6Rnd_45ACP_Cylinder", "", 800, 400, "" },
            { "9Rnd_45ACP_Mag", "", 900, 450, "" },
            { "30Rnd_9x21_Mag", "", 1000, 500, "" },
			{ "30Rnd_545x39_Mag_F", "", 3000, 1500, "" },
			{ "30Rnd_762x39_Mag_F", "", 4500, 2225, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 950, 475, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Altis General Store";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "" },
            { "ItemGPS", "", 100, 50, "" },
            { "ItemMap", "", 50, 25, "" },
            { "ItemCompass", "", 50, 25, "" },
            { "ItemWatch", "", 50, 25, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 2000, 1000, "" },
            { "Chemlight_red", "", 300, 150, "" },
            { "Chemlight_yellow", "", 300, 150, "" },
            { "Chemlight_green", "", 300, 150, "" },
            { "Chemlight_blue", "", 300, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Altis Fuel Station Store";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, 75, "" },
            { "ItemGPS", "", 500, 50, "" },
            { "ItemMap", "", 250, 25, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, 25, "" },
            { "FirstAidKit", "", 750, 75, "" },
            { "NVGoggles", "", 10000, 1000, "" },
            { "Chemlight_red", "", 1500, 150, "" },
            { "Chemlight_yellow", "", 1500, 150, "" },
            { "Chemlight_green", "", 1500, 150, "" },
            { "Chemlight_blue", "", 1500, 150, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "Polizei-Waffenkammer";
        side = "cop";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, 75, "call life_coplevel >= 1" },
            { "ItemGPS", "", 100, 50, "call life_coplevel >= 1" },
            { "FirstAidKit", "", 150, 75, "call life_coplevel >= 1" },
            { "NVGoggles", "", 2000, 1000, "call life_coplevel >= 1" },
            { "HandGrenade_Stone", $STR_W_items_Flashbang, 1700, 850, "call life_coplevel >= 6" },
            { "hgun_P07_snds_F", $STR_W_items_StunPistol, 2000, 1000, "call life_coplevel >= 1" },
			 { "SMG_05_F", "", 40000, 20000, "call life_coplevel >= 1" }, 
            { "hgun_PDW2000_F", "", 38000, 19000, "call life_coplevel >= 1" },
			{ "SMG_01_F", "", 47000, 23000, "call life_coplevel >= 1" },
			{ "SMG_02_F", "", 70000, 35000, "call life_coplevel >= 1" },
			{ "arifle_SDAR_F", "", 50000, 25000, "call life_coplevel >= 1" },
            { "arifle_CTAR_blk_F", "", 280000, 140000, "call life_coplevel >= 2" },
            { "arifle_TRG20_F", "", 130000, 65000, "call life_coplevel >= 2" }, 
            { "arifle_Mk20_F", "", 130000, 65000, "call life_coplevel >= 2" }, 
            { "arifle_Katiba_F", "", 140000, 70000, "call life_coplevel >= 2" }, 
            { "LMG_03_F", "", 400000, 200000, "call life_coplevel >= 4" }, 
            { "srifle_DMR_06_camo_F", "", 320000, 160000, "call life_coplevel >= 5" }, 
			{ "srifle_DMR_06_olive_F", "", 320000, 160000, "call life_coplevel >= 5" },
            { "arifle_MXC_Black_F", "", 160000, 90000, "call life_coplevel >= 3" },
            { "arifle_SPAR_01_blk_F", "", 130000, 65000, "call life_coplevel >= 3" },
            { "arifle_SPAR_02_blk_F", "", 210000, 105000, "call life_coplevel >= 4" }, 
			{ "arifle_ARX_blk_F", "", 190000, 95000, "call life_coplevel >= 5" },
            { "srifle_EBR_F", "", 310000, 155000, "call life_coplevel >= 6" },
            { "arifle_MXM_Black_F", "", 180000, 90000, "call life_coplevel >= 4" }, 
            { "LMG_Mk200_F", "", 880000, 440000, "call life_coplevel >= 5" }, 
            { "arifle_MX_SW_Black_F", "", 430000, 215000, "call life_coplevel >= 4" },
            { "arifle_MX_Black_F", "", 170000, 85000, "call life_coplevel >= 4" },
            { "srifle_DMR_04_F", "", 1200000, 600000, "call life_coplevel >= 5" }, 
            { "srifle_DMR_04_Tan_F", "", 1200000, 600000, "call life_coplevel >= 5" }, 
            { "arifle_AK12_F", "", 380000, 190000, "call life_coplevel >= 6" }, 
            { "srifle_DMR_07_blk_F", "", 185000, 92500, "call life_coplevel >= 6" }, 
            { "arifle_SPAR_03_blk_F", "", 430000, 215000, "call life_coplevel >= 6" },
            { "srifle_DMR_01_F", "", 230000, 115000, "call life_coplevel >= 5" }, 
            { "srifle_DMR_03_F", "", 440000, 220000, "call life_coplevel >= 7" }, 
            { "srifle_DMR_05_blk_F", "", 1600000, 800000, "call life_coplevel >= 8" },
            { "LMG_Zafir_F", "", 980000, 490000, "call life_coplevel >= 7" }, 
            { "srifle_LRR_F", "", 1900000, 950000, "call life_coplevel >= 9" }, 
            { "srifle_DMR_02_F", "", 1800000, 900000, "call life_coplevel >= 8" },
			{ "srifle_DMR_02_camo_F", "", 1800000, 900000, "call life_coplevel >= 8" },
            { "srifle_DMR_02_sniper_F", "", 1800000, 900000, "call life_coplevel >= 8" },
            { "MMG_01_hex_F", "", 7800000, 3900000, "call life_coplevel >= 9" },
            { "MMG_01_tan_F", "", 7800000, 3900000, "call life_coplevel >= 9" }, 
            { "srifle_GM6_F", "", 2100000, 1050000, "call life_coplevel >= 10" }, 
            { "MMG_02_black_F", "", 8000000, 4000000, "call life_coplevel >= 11" }, 
            
        };
        mags[] = {
			{ "30Rnd_556x45_Stanag", "", 1100, 550, "call life_coplevel >= 1" },
            { "30Rnd_65x39_caseless_mag", "", 1400, 700, "call life_coplevel >= 1" }, 
            { "150Rnd_556x45_Drum_Mag_F", "", 4900, 2450, "call life_coplevel >= 1" }, 
            { "30Rnd_65x39_caseless_green", "", 1400, 700, "call life_coplevel >= 1" },
            { "20Rnd_762x51_Mag", "", 3250, 1700, "call life_coplevel >= 1" },
            { "200Rnd_65x39_cased_Box", "", 8000, 4000, "call life_coplevel >= 1" },
            { "100Rnd_65x39_caseless_mag", "", 2800, 1400, "call life_coplevel >= 1" }, 
            { "10Rnd_127x54_Mag", "", 10000, 5000, "call life_coplevel >= 1" }, 
            { "30Rnd_762x39_Mag_F", "", 5600, 2800, "call life_coplevel >= 1" },
            { "20Rnd_650x39_Cased_Mag_F", "", 3100, 1500, "call life_coplevel >= 1" },
            { "10Rnd_762x54_Mag", "", 2700, 1300, "call life_coplevel >= 1" },
			{ "10Rnd_93x64_DMR_05_Mag", "", 14000, 7000, "call life_coplevel >= 1" },
            { "150Rnd_762x54_Box", "", 10500, 5250, "call life_coplevel >= 1" }, 
            { "7Rnd_408_Mag", "", 21000, 10500, "call life_coplevel >= 1" }, 
            { "10Rnd_338_Mag", "", 19000, 9500, "call life_coplevel >= 1" },
            { "150Rnd_93x64_Mag", "", 56000, 26000, "call life_coplevel >= 1" },
            { "5Rnd_127x108_Mag", "", 25700, 12500, "call life_coplevel >= 1" },
            { "130Rnd_338_Mag", "", 58000, 29000, "call life_coplevel >= 1" },
			{ "16Rnd_9x21_Mag", "", 700, 350, "call life_coplevel >= 1" },
            { "6Rnd_45ACP_Cylinder", "", 800, 400, "call life_coplevel >= 1" },
            { "9Rnd_45ACP_Mag", "", 900, 450, "call life_coplevel >= 1" },
            { "30Rnd_9x21_Mag", "", 1000, 500, "call life_coplevel >= 1" },
			{ "30Rnd_545x39_Mag_F", "", 3000, 1500, "call life_coplevel >= 1" },
			{ "30Rnd_762x39_Mag_F", "", 4500, 2225, "call life_coplevel >= 1" }
            
        };
        accs[] = {
			{ "muzzle_snds_H", "", 60000, 30000, "call life_coplevel >= 1" },
            { "muzzle_snds_H_khk_F", "", 60000, 30000, "call life_coplevel >= 1" },
            { "muzzle_snds_H_snd_F", "", 60000, 30000, "call life_coplevel >= 1" },
			{ "muzzle_snds_M", "", 50000, 25000, "call life_coplevel >= 1" },
            { "muzzle_snds_m_khk_F", "", 50000, 25000, "call life_coplevel >= 1" },
            { "muzzle_snds_m_snd_F", "", 50000, 25000, "call life_coplevel >= 1" },
			{ "muzzle_snds_B", "", 70000, 35000, "call life_coplevel >= 1" },
            { "muzzle_snds_B_khk_F", "", 70000, 35000, "call life_coplevel >= 1" },
            { "muzzle_snds_B_snd_F", "", 70000, 35000, "call life_coplevel >= 1" },
			{ "muzzle_snds_H_MG", "", 80000, 40000, "call life_coplevel >= 1" },
            { "muzzle_snds_H_MG_blk_F", "", 80000, 40000, "call life_coplevel >= 1" },
            { "muzzle_snds_58_blk_F", "", 50000, 25000, "call life_coplevel >= 1" },
			{ "optic_Aco", "", 3000, 1500, "call life_coplevel >= 1" },
            { "optic_ACO_grn", "", 3000, 1500, "call life_coplevel >= 1" },
            { "optic_Holosight", "", 6000, 3000, "call life_coplevel >= 2" },
			{ "Mk17 Holosight SMG", "", 6000, 3000, "call life_coplevel >= 2" },
            { "optic_Arco", "", 25000, 12500, "call life_coplevel >= 3" },
            { "optic_Arco_ghex_F", "", 25000, 12500, "call life_coplevel >= 3" },
			{ "optic_Arco_blk_F", "", 25000, 12500, "call life_coplevel >= 3" },
            { "optic_Hamr", "", 28000, 14000, "call life_coplevel >= 4" },
            { "optic_Hamr_khk_F", "", 28000, 14000, "call life_coplevel >= 4" },
			{ "optic_MRCO", "", 35000, 18000, "call life_coplevel >= 5" },
            { "optic_DMS", "", 45000, 22500, "call life_coplevel >= 6" },
            { "optic_DMS_ghex_F", "", 45000, 22500, "call life_coplevel >= 6" },
			{ "acc_flashlight", "", 35000, 18000, "call life_coplevel >= 1" },
            { "acc_pointer_IR", "", 35000, 18000, "call life_coplevel >= 1" },
            { "bipod_01_F_snd", "", 52000, 26000, "call life_coplevel >= 1" },
			{ "bipod_01_F_blk", "", 52000, 26000, "call life_coplevel >= 1" },
            { "bipod_01_F_mtp", "", 52000, 26000, "call life_coplevel >= 1" },
            { "bipod_02_F_tan", "", 52000, 26000, "call life_coplevel >= 1" },
			{ "bipod_02_F_hex", "", 52000, 26000, "call life_coplevel >= 1" },
            { "bipod_03_F_oli", "", 52000, 26000, "call life_coplevel >= 1" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "Feuerwehr-kammer";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemGPS", "", 100, 50, "" },
            { "Binocular", "", 150, 75, "" },
            { "FirstAidKit", "", 150, 75, "" },
            { "NVGoggles", "", 1200, 600, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
