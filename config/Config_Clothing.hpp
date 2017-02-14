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
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Poloshirt_blue", "", 2500, "" },
            { "U_C_Poloshirt_burgundy", "", 2500, "" },
            { "U_C_Poloshirt_salmon", "", 2500, "" },
            { "U_C_Poloshirt_redwhite", "", 2500, "" },
            { "U_C_Poloshirt_stripped", "", 2500, "" },
            { "U_C_Poloshirt_tricolour", "", 2500, "" },
            { "U_OrestesBody", "", 3750, "" },
            { "U_C_HunterBody_grn", "", 4200, "" },
            { "U_C_Journalist", "", 4850, "" },
            { "U_OrestesBody", "", 5300, "" },
            { "U_Marshal", "", 6200, "" },
			{ "U_NikosAgedBody", "", 8500, "" },
			//////APEX//////
            { "U_C_Man_casual_5_F", "", 5000, "" },
            { "U_C_Man_casual_4_F", "", 5000, "" },
			{ "U_C_Man_casual_6_F", "", 5000, "" },
            { "U_C_man_sport_3_F", "", 5000, "" },
			{ "U_C_man_sport_2_F", "", 5000, "" },
            { "U_C_man_sport_1_F", "", 5000, "" },
			{ "U_C_Man_casual_2_F", "", 5000, "" },
            { "U_C_Man_casual_3_F", "", 5000, "" },
			{ "U_C_Man_casual_1_F", "", 5000, "" },
            { "U_I_C_Soldier_Bandit_4_F", "", 10000, "" },
			{ "U_I_C_Soldier_Bandit_5_F", "", 10000, "" },
            { "U_I_C_Soldier_Bandit_1_F", "", 10000, "" },
			{ "U_I_C_Soldier_Bandit_3_F", "", 10000, "" },
            { "U_I_C_Soldier_Bandit_2_F", "", 10000, "" },
			{ "U_C_Poor_1", "", 7500, "" },
            { "U_BG_Guerilla2_1", "", 9000, "" },
			{ "U_BG_Guerilla2_2", "", 9000, "" },
            { "U_BG_Guerilla3_1", "", 9000, "" },
			{ "U_B_Protagonist_VR", "", 100000, "" },
            { "U_I_Protagonist_VR", "", 100000, "" },
            { "U_O_Protagonist_VR", "", 100000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Bandanna_blu", "", 250, "" },
            { "H_Bandanna_gry", "", 250, "" },
            { "H_Bandanna_surfer_grn", "", 250, "" },
            { "H_Bandanna_surfer_blk", "", 250, "" },
            { "H_Cap_blu", "", 345, "" },
            { "H_Cap_grn", "", 345, "" },
            { "H_Cap_press", "", 345, "" },
            { "H_Cap_red", "", 345, "" },
            { "H_Cap_surfer", "", 345, "" },
            { "H_Hat_blue", "", 345, "" },
            { "H_Hat_brown", "", 345, "" },
            { "H_Hat_grey", "", 345, "" },
            { "H_Hat_tan", "", 345, "" },
            { "H_Hat_checker", "", 345, "" },
            { "H_StrawHat", "", 345, "" },
            { "H_StrawHat_dark", "", 345, "" },
            { "H_MilCap_gry", "", 345, "" },
            { "H_MilCap_blue", "", 345, "" },
            { "H_Helmet_Skate", "", 345, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Aviator", "", 20, "" },
            { "G_Spectacles", "", 20, "" },
            { "G_Spectacles_Tinted", "", 20, "" },
            { "G_Squares_Tinted", "", 20, "" },
            { "G_Shades_Black", "", 25, "" },
            { "G_Shades_Red", "", 25, "" },
            { "G_Shades_Blue", "", 25, "" },
            { "G_Balaclava_lowprofile", "", 25, "" },
            { "G_Balaclava_combat", "", 150, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
			{ "V_Rangemaster_belt", "", 10000, "" },
			{ "V_Press_F", "", 8500, "" },
			{ "V_TacVest_oli", "", 20000, "" },
			{ "V_TacVest_blk", "", 20000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_AssaultPack_blk", "", 1200, "" },
            { "B_FieldPack_oli", "", 2000, "" },
            { "B_FieldPack_blk", "", 2000, "" },
            { "B_Kitbag_cbr", "", 3500, "" },
            { "B_Kitbag_sgg", "", 3500, "" },
            { "B_Kitbag_rgr", "", 3500, "" },
            { "B_TacticalPack_blk", "", 5000, "" },
            { "B_TacticalPack_rgr", "", 5000, "" },
            { "B_TacticalPack_oli", "", 5000, "" },
            { "B_Carryall_cbr", "", 7500, "" },
            { "B_Carryall_khk", "", 7500, "" },
            { "B_Carryall_oli", "", 7500, "" },
			///////////APEX///////////
            { "B_ViperLightHarness_khk_F", "", 25000, "" },
            { "B_ViperLightHarness_oli_F", "", 25000, "" },
            { "B_ViperLightHarness_blk_F", "", 25000, "" },
            { "B_ViperHarness_khk_F", "", 42000, "" },
            { "B_ViperHarness_oli_F", "", 42000, "" },
            { "B_ViperHarness_blk_F", "", 42000, "" }
        };
    };

    class cop {
        title = "STR_Shops_C_Police";
        conditions = "";
        side = "cop";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_CTRG_3", "PO 1-3", 120, "call life_coplevel >= 1" },
            { "U_Rangemaster", "PD 1-3", 200, "call life_coplevel >= 4" },
            { "U_B_CTRG_1", "SG 1-2", 240, "call life_coplevel >= 6" },
            { "U_B_Wetsuit", "Taucheranzug", 800, "call life_coplevel >= 4" },
			{ "U_Marshal", "PDC", 300, "call life_coplevel >= 10" },
			{ "U_Competitor", "Agent Uniform", 500, "call life_coplevel >= 16" },
			{ "U_B_CombatUniform_mcam", "Agent Chief", 500, "call life_coplevel >= 19" },
			{ "U_B_FullGhillie_ard", "FBI Tarn", 5000, "call life_coplevel >= 16" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Beret_blk", "PO 1", 50, "call life_coplevel >= 1" },
            { "H_Beret_02", "PD 1-3", 50, "call life_coplevel >= 1" },
            { "H_MilCap_blue", "SG 1-2", 50, "call life_coplevel >= 1" },
			{ "H_Cap_police", "LT 1-2", 50, "call life_coplevel >= 1" },
			{ "H_MilCap_gry", "Agent Hut", 50, "call life_coplevel >= 1" },
			{ "H_HelmetB_TI_tna_F", "Agent Hut2", 50, "call life_coplevel >= 1" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Squares", "", 35, "call life_coplevel >= 1" },
            { "G_Diving", "", 35, "call life_coplevel >= 1" },
            { "G_Bandanna_blk", "LT 1-2", 35, "call life_coplevel >= 1" },
            { "G_Bandanna_beast ", "PDC 1", 35, "call life_coplevel >= 1" },
            { "G_Aviator", "PDC 1", 35, "call life_coplevel >= 1" },
            { "G_Spectacles_Tinted", "Agenten Brille", 35, "call life_coplevel >= 1" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_TacVest_blk_POLICE", "PO 1-2", 3500, "call life_coplevel >= 1" },
            { "V_PlateCarrier1_blk", "PD 1-3", 7000, "call life_coplevel >= 1" },
			{ "V_RebreatherB", "", 2500, "call life_coplevel >= 1" },
			{ "V_PlateCarrier2_blk", "LT 1-2/Agent Weste", 9200, "call life_coplevel >= 1" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_Carryall_khk", "PO 1-3", 5000, "call life_coplevel >= 1" },
            { "B_Carryall_cbr", "PD", 5000, "call life_coplevel >= 9" },
            { "B_Carryall_oli", "Agenten Rucksack", 5000, "call life_coplevel >= 16" },
            { "B_UAV_01_backpack_F", "UAV Rucksack", 25000, "call life_coplevel >= 18" }
        };
    };

    class dive {
        title = "STR_Shops_C_Diving";
        conditions = "license_civ_dive";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_Wetsuit", "", 2000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Diving", "", 500, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_RebreatherB", "", 5000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gun_clothing {
        title = "STR_Shops_C_Gun";
        conditions = "license_civ_gun";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 10000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class gang_clothing {
        title = "STR_Shops_C_Gang";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_Rangemaster_belt", "", 10000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };

    class med_clothing {
        title = "STR_MAR_EMS_Clothing_Shop";
        conditions = "";
        side = "med";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_B_CTRG_1", "1-4 Rang", 8500, "" },
			{ "U_B_CTRG_3", "5-7 Rang", 16500, "call life_mediclevel >= 5" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Beret_blk", "", 5000, "call life_mediclevel >= 5" },
			{ "H_Watchcap_blk", "", 3500, "call life_mediclevel >= 4" },
			{ "H_Bandanna_gry", "", 15000, "call life_mediclevel >= 7" },
			{ "H_Cap_oli_hs", "", 250, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
			{ "G_Aviator", "", 75, "" },
			{ "G_Spectacles", "", 75, "" },
            { "G_Squares", "", 75, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_FieldPack_oli", "", 6000, "" }
        };
    };

    class reb {
        title = "STR_Shops_C_Rebel";
        conditions = "license_civ_rebel";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_BG_Guerilla1_1", "", 30000, "" },
            { "U_BG_Guerrilla_6_1", "", 30000, "" },
            { "U_BG_leader", "", 50000, "" },
            { "U_B_CombatUniform_mcam", "", 50000, "" },
            { "U_B_CombatUniform_mcam_tshirt", "", 50000, "" },
            { "U_I_G_resistanceLeader_F", "", 75000, "" },
			{ "U_I_CombatUniform", "", 75000, "" },
            { "U_I_CombatUniform_shortsleeve", "", 75000, "" },
            { "U_I_OfficerUniform", "", 75000, "" },
            { "U_O_CombatUniform_ocamo", "", 100000, "" },
            { "U_O_CombatUniform_oucamo", "", 100000, "" },
            { "U_O_OfficerUniform_ocamo", "", 100000, "" },
			{ "U_O_SpecopsUniform_ocamo", "", 100000, "" },
            { "U_B_CombatUniform_mcam_vest", "", 120000, "" },
            { "U_I_GhillieSuit", "", 250000, "" },
            { "U_O_GhillieSuit", "", 250000, "" },
            { "U_I_FullGhillie_lsh", "", 500000, "" },
            { "U_I_FullGhillie_sard", "", 500000, "" },
			{ "U_I_FullGhillie_ard", "", 500000, "" },
			///////////APEX////////////
            { "U_O_T_Officer_F", "", 65000, "" },
            { "U_I_C_Soldier_Para_2_F", "", 65000, "" },
            { "U_I_C_Soldier_Para_4_F", "", 65000, "" },
            { "U_I_C_Soldier_Para_3_F", "", 65000, "" },
            { "U_I_C_Soldier_Para_5_F", "", 65000, "" },
			{ "U_I_C_Soldier_Para_1_F", "", 65000, "" },
            { "U_B_CTRG_Soldier_urb_1_F", "", 80000, "" },
            { "U_B_CTRG_Soldier_urb_2_F", "", 80000, "" },
            { "U_B_CTRG_Soldier_3_F", "", 80000, "" },
            { "U_B_T_Soldier_F", "", 100000, "" },
            { "U_B_T_Soldier_SL_F", "", 100000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_Cap_tan_specops_US", "", 5000, "" },
            { "H_Cap_blk_Raven", "", 5000, "" },
            { "H_MilCap_mcamo", "", 7500, "" },
            { "H_MilCap_dgtl", "", 7500, "" },
            { "H_Watchcap_khk", "", 9200, "" },
			{ "H_Watchcap_cbr", "", 9200, "" },
            { "H_Watchcap_camo", "", 9200, "" },
            { "H_Booniehat_khk_hs", "", 11000, "" },
            { "H_Booniehat_mcamo", "", 11000, "" },
            { "H_Booniehat_oli", "", 11000, "" },
			{ "H_Booniehat_tan", "", 11000, "" },
            { "H_ShemagOpen_khk", "", 20000, "" },
            { "H_ShemagOpen_tan", "", 20000, "" },
            { "H_Shemag_olive", "", 20000, "" },
            { "H_Shemag_olive_hs", "", 20000, "" },
			{ "H_HelmetB_camo", "", 35000, "" },
            { "H_HelmetSpecB", "", 35000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" },
            { "G_Bandanna_shades", "", 2500, "" },
            { "G_Bandanna_beast", "", 2500, "" },
            { "G_Bandanna_sport", "", 2500, "" },
            { "G_Aviator", "", 1200, "" },
            { "G_Balaclava_blk", "", 3000, "" },
            { "G_Balaclava_oli", "", 3000, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" },
            { "V_BandollierB_blk", "", 85000, "" },
            { "V_BandollierB_rgr", "", 85000, "" },
			{ "V_BandollierB_oli", "", 85000, "" },
            { "V_HarnessO_brn", "", 120000, "" },
			{ "V_HarnessO_gry", "", 120000, "" },
            { "V_TacVestIR_blk", "", 165000, "" },
			{ "V_PlateCarrier1_rgr", "", 250000, "" },
            { "V_PlateCarrier2_rgr", "", 250000, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" },
            { "B_AssaultPack_ocamo", "", 2000, "" },
            { "B_AssaultPack_mcamo", "", 2000, "" },
            { "B_FieldPack_ocamo", "", 3000, "" },
            { "B_TacticalPack_ocamo", "", 3500, "" },
            { "B_TacticalPack_mcamo", "", 3500, "" },
            { "B_Kitbag_mcamo", "", 5000, "" },
            { "B_Carryall_ocamo", "", 7500, "" },
            { "B_Carryall_mcamo", "", 7500, "" },
            { "B_Carryall_oucamo", "", 7500, "" },
			//////////APEX//////////
            { "B_ViperLightHarness_hex_F", "", 25000, "" },
            { "B_ViperLightHarness_ghex_F", "", 25000, "" },
            { "B_ViperHarness_hex_F", "", 45000, "" },
            { "B_ViperHarness_ghex_F", "", 45000, "" },
            { "B_Bergen_dgtl_F", "", 200000, "" },
            { "B_Bergen_hex_F", "", 200000, "" },
            { "B_Bergen_mcamo_F", "", 200000, "" },
            { "B_Bergen_tna_F", "", 200000, "" }
        };
    };

    class kart {
        title = "STR_Shops_C_Kart";
        conditions = "";
        side = "civ";
        uniforms[] = {
            { "NONE", "Remove Uniform", 0, "" },
            { "U_C_Driver_1_black", "", 20000, "" },
            { "U_C_Driver_1_blue", "", 20000, "" },
            { "U_C_Driver_1_red", "", 20000, "" },
            { "U_C_Driver_1_orange", "", 20000, "" },
            { "U_C_Driver_1_green", "", 20000, "" },
            { "U_C_Driver_1_white", "", 20000, "" },
            { "U_C_Driver_1_yellow", "", 20000, "" },
            { "U_C_Driver_2", "", 20000, "" },
            { "U_C_Driver_1", "", 20000, "" },
            { "U_C_Driver_3", "", 20000, "" },
            { "U_C_Driver_4", "", 20000, "" }
        };
        headgear[] = {
            { "NONE", "Remove Hat", 0, "" },
            { "H_RacingHelmet_1_black_F", "", 10000, "" },
            { "H_RacingHelmet_1_red_F", "", 10000, "" },
            { "H_RacingHelmet_1_white_F", "", 10000, "" },
            { "H_RacingHelmet_1_blue_F", "", 10000, "" },
            { "H_RacingHelmet_1_yellow_F", "", 10000, "" },
            { "H_RacingHelmet_1_green_F", "", 10000, "" },
            { "H_RacingHelmet_1_F", "", 10000, "" },
            { "H_RacingHelmet_2_F", "", 10000, "" },
            { "H_RacingHelmet_3_F", "", 10000, "" },
            { "H_RacingHelmet_4_F", "", 10000, "" }
        };
        goggles[] = {
            { "NONE", "Remove Glasses", 0, "" }
        };
        vests[] = {
            { "NONE", "Remove Vest", 0, "" }
        };
        backpacks[] = {
            { "NONE", "Remove Backpack", 0, "" }
        };
    };
};
