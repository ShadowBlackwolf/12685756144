/*
*    ARRAY FORMAT:
*        0: STRING (Classname)
*        1: STRING (Display Name, leave as "" for default)
*        2: SCALAR (Price)
*        3: STRING (Conditions) - Must return boolean :
*            String can contain any amount of conditions, aslong as the entire
*            string returns a boolean. This allows you to check any levels, licenses etc,
*            in any combination. For example:
*                "call life_coplevel && license_civ_someLicense"
*            This will also let you call any other function.
*
*   Clothing classnames can be found here: https://community.bistudio.com/wiki/Arma_3_CfgWeapons_Equipment
*   Backpacks/remaining classnames can be found here (TIP: Search page for "pack"): https://community.bistudio.com/wiki/Arma_3_CfgVehicles_EMPTY
*
*/
class Clothing {
    class bruce {
        title = "STR_Shops_C_Bruce";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Poloshirt_stripped", "", 125, "" },
            { "U_C_Poloshirt_redwhite", "", 150, "" },
            { "U_C_Poloshirt_salmon", "", 175, "" },
            { "U_C_Poloshirt_blue", "", 250, "" },
            { "U_C_Poloshirt_burgundy", "", 275, "" },
            { "U_C_Poloshirt_tricolour", "", 350, "" },
            { "U_C_Poor_2", "", 250, "" },
            { "U_IG_Guerilla2_2", "", 650, "" },
            { "U_IG_Guerilla3_1", "", 735, "" },
            { "U_OrestesBody", "", 1100, "" },
            { "U_IG_Guerilla2_3", "", 1200, "" },
            { "U_C_HunterBody_grn", "", 1500, "" },
            { "U_C_WorkerCoveralls", "", 2500, "" },
            { "U_NikosBody", "", 3000, "" },
            { "U_NikosAgedBody", $STR_C_Civ_Niko, 5000, "" },
            { "U_C_Man_casual_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_3_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_4_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_5_F", "", 5000, "" }, //Apex DLC
            { "U_C_Man_casual_6_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_1_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_2_F", "", 5000, "" }, //Apex DLC
            { "U_C_man_sport_3_F", "", 5000, "" } //Apex DLC
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Bandanna_camo", "", 120, "" },
            { "H_Bandanna_surfer", "", 130, "" },
            { "H_Bandanna_khk", "", 145, "" },
            { "H_Cap_blu", "", 150, "" },
            { "H_Cap_grn", "", 150, "" },
            { "H_Cap_grn_BI", "", 150, "" },
            { "H_Cap_oli", "", 150, "" },
            { "H_Cap_red", "", 150, "" },
            { "H_Cap_tan", "", 150, "" },
            { "H_Helmet_Skate", "", 150, "" }, //Apex DLC
            { "H_Bandanna_gry", "", 150, "" },
            { "H_Bandanna_sgg", "", 160, "" },
            { "H_Bandanna_cbr", "", 165, "" },
            { "H_StrawHat", "", 225, "" },
            { "H_Hat_tan", "", 265, "" },
            { "H_Hat_brown", "", 276, "" },
            { "H_Hat_grey", "", 280, "" },
            { "H_BandMask_blk", $STR_C_Civ_BandMask, 300, "" },
            { "H_Hat_blue", "", 310, "" },
            { "H_Hat_checker", "", 340, "" },
            { "H_Booniehat_tan", "", 425, "" },
            { "H_Booniehat_grn", "", 425, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Shades_Green", "", 20, "" },
            { "G_Shades_Red", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Greenblack", "", 25, "" },
            { "G_Sport_Red", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Aviator", "", 100, "" },
            { "G_Combat", "", 125, "" },
            { "G_Lady_Mirror", "", 150, "" },
            { "G_Lady_Dark", "", 150, "" },
            { "G_Lady_Blue", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_AssaultPack_tna_f", "", 2000, "" }, //Apex DLC
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_FieldPack_ghex_f", "", 5000, "" }, //Apex DLC
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_ghex_f", "", 7500, "" }, //Apex DLC
            { "B_Bergen_dgtl_f", "", 9500, "" }, //Apex DLC
            { "B_Bergen_tna_f", "", 9500, "" } //Apex DLC
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_Rangemaster", $STR_C_Cop_P_uniforms, 25, "call life_coplevel == 1" },
            { "U_IG_Guerilla2_1", $STR_C_Cop_R_uniforms, 25, "call life_coplevel == 1" },
            { "U_B_Wetsuit", $STR_C_Cop_R_uniforms, 25, "call life_coplevel >= 1" },
            { "U_IG_Guerrilla_6_1", $STR_C_Cop_uniforms, 350, "call life_coplevel == 2" },
            { "U_IG_Guerrilla_6_1", $STR_C_Cop_uniforms, 350, "call life_coplevel == 3" },
            { "U_IG_Guerrilla_6_1", $STR_C_Cop_uniforms, 350, "call life_coplevel == 4" },
            { "U_O_GhillieSuit", "", 350, "call life_coplevel == 4" },
            { "U_I_GhillieSuit", "", 350, "call life_coplevel == 4" },
            { "U_B_T_Sniper_F", "", 350, "call life_coplevel == 4" },
            { "U_O_T_Sniper_F", "", 350, "call life_coplevel == 4" },
            { "U_IG_Guerrilla_6_1", $STR_C_Cop_uniforms, 350, "call life_coplevel == 5" },
            { "U_O_GhillieSuit", "", 350, "call life_coplevel == 5" },
            { "U_I_GhillieSuit", "", 350, "call life_coplevel == 5" },
            { "U_B_T_Sniper_F", "", 350, "call life_coplevel == 5" },
            { "U_O_T_Sniper_F", "", 350, "call life_coplevel == 5" },
            { "U_O_T_FullGhillie_tna_F", "", 350, "call life_coplevel == 5" },
            { "U_B_T_FullGhillie_tna_F", "", 350, "call life_coplevel == 5" },
            { "U_I_FullGhillie_lsh", "", 350, "call life_coplevel == 5" },
            { "U_I_FullGhillie_sard", "", 350, "call life_coplevel == 5" },
            { "U_I_FullGhillie_lsh", "", 350, "call life_coplevel == 5" },
            { "U_B_CombatUniform_mcam_worn", $STR_C_Cop_uniforms, 550, "call life_coplevel >= 6" },
            { "U_O_GhillieSuit", "", 350, "call life_coplevel >= 6" },
            { "U_I_GhillieSuit", "", 350, "call life_coplevel >= 6" },
            { "U_B_T_Sniper_F", "", 350, "call life_coplevel >= 6" },
            { "U_O_T_Sniper_F", "", 350, "call life_coplevel >= 6" },
            { "U_O_T_FullGhillie_tna_F", "", 350, "call life_coplevel >= 6" },
            { "U_B_T_FullGhillie_tna_F", "", 350, "call life_coplevel >= 6" },
            { "U_I_FullGhillie_lsh", "", 350, "call life_coplevel >= 6" },
            { "U_I_FullGhillie_sard", "", 350, "call life_coplevel >= 6" },
            { "U_I_FullGhillie_lsh", "", 350, "call life_coplevel >= 6" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_police", "", 25, "" },
            { "H_Beret_blk_POLICE", "", 120, "call life_coplevel >= 1" },
            { "H_Beret_gen_F", "", 75, "call life_coplevel >= 2" },
            { "H_Watchcap_blk", "", 80, "call life_coplevel >= 2" },
            { "H_Beret_blk_POLICE", "", 50, "call life_coplevel >= 2" },
            { "H_Beret_gen_F", "", 100, "call life_coplevel >= 3" },
            { "H_Watchcap_blk", "", 1200, "call life_coplevel >= 3" }, 
            { "H_CrewHelmetHeli_B", "", 1200, "call life_coplevel >= 4" },
            { "H_HelmetB_black", "", 1200, "call life_coplevel >= 4" },
            { "H_Booniehat_mcamo", "", 1200, "call life_coplevel >= 4" },
            { "H_MilCap_mcamo", "", 1200, "call life_coplevel >= 4" },
            { "H_HelmetIA", "", 1200, "call life_coplevel >= 4" },
            { "H_Beret_02", "", 1200, "call life_coplevel >= 5" },
            { "H_Beret_Colonel", "", 1200, "call life_coplevel >= 8" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 10, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 20, "call life_coplevel >= 3" },
            { "G_Sport_Checkered", "", 20, "call life_coplevel >= 3" },
            { "G_B_Diving", "", 20, "call life_coplevel >= 3" },
            { "G_Sport_Blackyellow", "", 20, "call life_coplevel >= 3" },
            { "G_Sport_BlackWhite", "", 25, "call life_coplevel >= 3" },
            { "G_Aviator", "", 30, "call life_coplevel >= 3" },
            { "G_Squares", "", 55, "call life_coplevel >= 4" },
            { "G_Lowprofile", "", 100, "call life_coplevel >= 4" },
            { "G_Combat", "", 150, "call life_coplevel >= 4" },
            { "G_Balaclava_blk", "", 150, "call life_coplevel >= 4" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 800, "call life_coplevel >= 1" },
            { "V_RebreatherB", "", 1000, "call life_coplevel >= 1" }, 
            { "V_TacVest_blk_POLICE", "", 1000, "call life_coplevel >= 2" },
            { "V_PlateCarrier1_blk", "", 1500, "call life_coplevel >= 4" },
            { "V_PlateCarrier2_blk", "", 1500, "call life_coplevel >= 6" },
            { "V_PlateCarrierSpec_blk", "", 1500, "call life_coplevel >= 8" },
            { "V_PlateCarrierGL_blk", "", 1500, "call life_coplevel >= 9" },
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_AssaultPack_cbr", "", 500, "" },
            { "B_Kitbag_cbr", "", 700, "call life_coplevel >= 2" },
            { "B_FieldPack_cbr", "", 700, "call life_coplevel >= 4" },
            { "B_Bergen_sgg", "", 700, "call life_coplevel >= 4" },
            { "B_UAV_01_backpack_F", "", 800, "call life_coplevel >= 5" },
            { "B_Carryall_cbr", "", 2500, "call life_coplevel >= 5" },
            { "B_Bergen_dgtl_F", "", 3500, "call life_coplevel >= 6" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 4900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 1900, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_IG_Guerrilla_6_1", $STR_C_EMS_uniforms, 50, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_Cap_blu", "", 10, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Blue", "", 10, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_Bergen_blk", $STR_C_EMS_backpacks, 3000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 11000, "" },
            { "U_I_CombatUniform_tshirt", "", 11000, "" },
            { "U_B_CTRG_2", "", 11000, "" },
            { "U_B_CombatUniform_mcam_vest", "", 15000, "" },
            { "U_I_CombatUniform_shortsleeve", "", 15500, "" },
            { "U_B_CTRG_3", "", 15300, "" },  
            { "U_B_CombatUniform_mcam", "", 16800, "" }, 
            { "U_I_CombatUniform", "", 16700, "" }, 
            { "U_B_CTRG_1", "", 16900, "" }, 
			{ "U_B_T_Soldier_F", "", 15000, "" },
            { "U_B_T_Soldier_AR_F", "", 15000, "" },
            { "U_B_T_Soldier_SL_F", "", 15000, "" },
            { "U_B_CTRG_Soldier_F", "", 15000, "" },
            { "U_B_CTRG_Soldier_2_F", "", 15000, "" },
			{ "U_B_CTRG_Soldier_3_F", "", 15000, "" },
            { "U_B_survival_uniform", "", 50000, "" }, 
            { "U_IG_leader", "", 18000, "" }, 
            { "U_I_OfficerUniform", "", 20000, "" }, 
            { "U_O_OfficerUniform_ocamo", "", 20000, "" }, 
            { "U_O_CombatUniform_oucamo", "", 15000, "" }, 
            { "U_O_CombatUniform_ocamo", "", 15000, "" }, 
			{ "U_B_HeliPilotCoveralls", "", 17800, "" },
            { "U_O_PilotCoveralls", "", 17300, "" },
            { "U_B_PilotCoveralls", "", 17500, "" },
            { "U_I_pilotCoveralls", "", 17000, "" },
            { "U_I_HeliPilotCoveralls", "", 18000, "" },
			{ "U_B_GhillieSuit", "", 180000, "" },
            { "U_O_GhillieSuit", "", 180000, "" },
            { "U_I_GhillieSuit", "", 180000, "" },
            { "U_B_T_Sniper_F", "", 180000, "" },
            { "U_B_T_FullGhillie_tna_F", "", 350000, "" }, 
            { "U_B_FullGhillie_ard", "", 350000, "" }, 
            { "U_B_FullGhillie_sard", "", 350000, "" }, 
            { "U_B_FullGhillie_lsh", "", 350000, "" } 
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
			{ "H_MilCap_ocamo", "", 650, "" },
            { "H_MilCap_mcamo", "", 800, "" },
            { "H_MilCap_oucamo", "", 850, "" },
            { "H_MilCap_rucamo", "", 850, "" },
			{ "H_MilCap_gry", "", 650, "" },
            { "H_MilCap_dgtl", "", 800, "" },
            { "H_MilCap_blue", "", 850, "" },
            { "H_MilCap_tna_F", "", 850, "" },
			{ "H_MilCap_ghex_F", "", 650, "" },
            { "H_Booniehat_khk", "", 650, "" },
            { "H_Booniehat_oli", "", 800, "" },
            { "H_Booniehat_indp", "", 850, "" },
            { "H_Booniehat_mcamo", "", 850, "" },
			{ "H_Booniehat_grn", "", 650, "" },
            { "H_Booniehat_tan", "", 800, "" },
            { "H_Booniehat_dirty", "", 850, "" },
            { "H_Booniehat_dgtl", "", 850, "" },
			{ "H_Booniehat_khk_hs", "", 650, "" },
            { "H_HelmetB_plain_mcamo", "", 800, "" },
            { "H_HelmetSpecB_paint1", "", 850, "" },
            { "H_HelmetSpecB_paint2", "", 850, "" },
			{ "H_HelmetB_tna_F", "", 850, "" },
			{ "H_HelmetB_camo", "", 650, "" },
            { "H_HelmetB_light_grass", "", 800, "" },
            { "H_HelmetB_light_snakeskin", "", 850, "" },
            { "H_HelmetB_light_desert", "", 850, "" },
			{ "H_HelmetB_light_sand", "", 650, "" },
			{ "H_HelmetB_Light_tna_F", "", 850, "" },
            { "H_HelmetB_grass", "", 800, "" },
            { "H_HelmetB_snakeskin", "", 850, "" },
            { "H_HelmetB_desert", "", 850, "" },
			{ "H_HelmetB_sand", "", 650, "" },
			{ "H_HelmetB_Enh_tna_F", "", 850, "" },
            { "H_HelmetCrew_B", "", 800, "" },
            { "H_HelmetCrew_O", "", 850, "" },
            { "H_HelmetCrew_I", "", 850, "" },
			{ "H_PilotHelmetHeli_B", "", 650, "" },
            { "H_PilotHelmetHeli_O", "", 800, "" },
            { "H_PilotHelmetHeli_I", "", 850, "" },
            { "H_CrewHelmetHeli_O", "", 850, "" },
			{ "H_CrewHelmetHeli_I", "", 650, "" },
            { "H_HelmetO_ocamo", "", 800, "" },
            { "H_HelmetLeaderO_ocamo", "", 850, "" },
            { "H_Shemag_khk", "", 850, "" },
			{ "H_Shemag_tan", "", 650, "" },
            { "H_ShemagOpen_khk", "", 800, "" }
            
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" },
            { "G_Shades_Black", "", 20, "" },
            { "G_Shades_Blue", "", 20, "" },
            { "G_Sport_Blackred", "", 25, "" },
            { "G_Sport_Checkered", "", 25, "" },
            { "G_Sport_Blackyellow", "", 25, "" },
            { "G_Sport_BlackWhite", "", 25, "" },
            { "G_Lowprofile", "", 30, "" },
            { "G_Squares", "", 50, "" },
            { "G_Combat", "", 125, "" },
            { "G_Balaclava_blk", "", 150, "" },
            { "G_Balaclava_combat", "", 150, "" },
            { "G_Balaclava_lowprofile", "", 150, "" },
            { "G_Balaclava_oli", "", 150, "" },
            { "G_Bandanna_aviator", "", 150, "" },
            { "G_Bandanna_beast", "", 150, "" },
            { "G_Bandanna_blk", "", 150, "" },
            { "G_Bandanna_khk", "", 150, "" },
            { "G_Bandanna_oli", "", 150, "" },
            { "G_Bandanna_shades", "", 150, "" },
            { "G_Bandanna_sport", "", 150, "" },
            { "G_Bandanna_tan", "", 150, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" },
            { "V_Rangemaster_belt", "", 3000, "" },
            { "V_BandollierB_khk", "", 5000, "" },
            { "V_BandollierB_cbr", "", 5000, "" },
			{ "V_BandollierB_rgr", "", 5000, "" },
            { "V_BandollierB_oli", "", 5000, "" },
            { "V_Chestrig_khk", "", 7000, "" },
			{ "V_Chestrig_rgr", "", 7000, "" },
            { "V_Chestrig_oli", "", 7000, "" },
            { "V_TacVest_khk", "", 21000, "" },
			{ "V_TacVest_brn", "", 21000, "" },
            { "V_TacVest_oli", "", 21000, "" },
            { "V_TacVest_camo", "", 21000, "" },
			{ "V_PlateCarrierIA1_dgtl", "", 35000, "" },
			{ "V_PlateCarrier1_rgr", "", 50000, "" },
			{ "V_PlateCarrier1_tna_F", "", 50000, "" },
            { "V_PlateCarrier2_rgr", "", 90000, "" },
			{ "V_PlateCarrier2_tna_F", "", 90000, "" },
			{ "V_PlateCarrier3_rgr", "", 110000, "" },
			{ "V_PlateCarrierIA2_dgtl", "", 120000, "" },
			{ "V_PlateCarrierIAGL_dgtl", "", 130000, "" },
            { "V_PlateCarrierIAGL_oli", "", 130000, "" },
            { "V_PlateCarrierSpec_tna_F", "", 150000, "" },
			{ "V_PlateCarrierSpec_mtp", "", 150000, "" },
			{ "V_PlateCarrierGL_rgr", "", 200000, "" },
            { "V_PlateCarrierGL_mtp", "", 200000, "" },
            { "V_PlateCarrierGL_tna_F", "", 200000, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" },
            { "B_OutdoorPack_blk", "", 500, "" },
            { "B_AssaultPack_khk", "", 2000, "" },
            { "B_AssaultPack_dgtl", "", 2000, "" },
            { "B_AssaultPack_rgr", "", 2000, "" },
            { "B_AssaultPack_sgg", "", 2000, "" },
            { "B_AssaultPack_blk", "", 2000, "" },
            { "B_AssaultPack_cbr", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_TacticalPack_oli", "", 2500, "" },
            { "B_Kitbag_mcamo", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_FieldPack_blk", "", 5000, "" },
            { "B_FieldPack_ocamo", "", 5000, "" },
            { "B_FieldPack_oucamo", "", 5000, "" },
            { "B_Bergen_sgg", "", 6500, "" },
            { "B_Bergen_mcamo", "", 6500, "" },
            { "B_Bergen_rgr", "", 6500, "" },
            { "B_Bergen_blk", "", 6500, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_cbr", "", 7500, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", $STR_C_Remove_uniforms, 0, "" },
            { "U_C_Driver_1_black", "", 1500, "" },
            { "U_C_Driver_1_blue", "", 1500, "" },
            { "U_C_Driver_1_red", "", 1500, "" },
            { "U_C_Driver_1_orange", "", 1500, "" },
            { "U_C_Driver_1_green", "", 1500, "" },
            { "U_C_Driver_1_white", "", 1500, "" },
            { "U_C_Driver_1_yellow", "", 1500, "" },
            { "U_C_Driver_2", "", 3500, "" },
            { "U_C_Driver_1", "", 3600, "" },
            { "U_C_Driver_3", "", 3700, "" },
            { "U_C_Driver_4", "", 3700, "" }
        };
        headgear[] = {
            { "NONE", $STR_C_Remove_headgear, 0, "" },
            { "H_RacingHelmet_1_black_F", "", 1000, "" },
            { "H_RacingHelmet_1_red_F", "", 1000, "" },
            { "H_RacingHelmet_1_white_F", "", 1000, "" },
            { "H_RacingHelmet_1_blue_F", "", 1000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 1000, "" },
            { "H_RacingHelmet_1_green_F", "", 1000, "" },
            { "H_RacingHelmet_1_F", "", 2500, "" },
            { "H_RacingHelmet_2_F", "", 2500, "" },
            { "H_RacingHelmet_3_F", "", 2500, "" },
            { "H_RacingHelmet_4_F", "", 2500, "" }
        };
        goggles[] = {
            { "NONE", $STR_C_Remove_goggles, 0, "" }
        };
        vests[] = {
            { "NONE", $STR_C_Remove_vests, 0, "" }
        };
        backpacks[] = {
            { "NONE", $STR_C_Remove_backpacks, 0, "" }
        };
    };
};
