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
        name = "Tom´s Waffenshop*";
        side = "civ";
        conditions = "license_civ_gun";
        items[] = {
            { "hgun_Pistol_heavy_01_F", "", 25000, -1, "" },
            { "hgun_ACPC2_F", "", 47800, -1, "" },
            { "hgun_Pistol_01_F", "", 61520, -1, "" },
			{ "hgun_Rook40_F", "", 80500, -1, "" },
            { "hgun_Pistol_heavy_02_F", "", 100000, -1, "" }
        };
        mags[] = {
            { "11Rnd_45ACP_Mag", "", 75, -1, "" },
            { "9Rnd_45ACP_Mag", "", 75, -1, "" },
            { "10Rnd_9x21_Mag", "", 75, -1, "" },
			{ "16Rnd_9x21_Mag", "", 75, -1, "" },
			{ "6Rnd_45ACP_Cylinder", "", 75, -1, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 2500, -1, "" },
			{ "optic_Yorris", "", 2500, -1, "" },
			{ "optic_MRD", "", 2500, -1, "" }
        };
    };

    class rebel {
        name = "Ausrüstung der Rebellen";
        side = "civ";
        conditions = "license_civ_rebel";
        items[] = {
            { "arifle_TRG20_F", "", 320000, 2500, "" },
            { "arifle_Mk20_plain_F", "", 400000, 5000, "" },
            { "arifle_Katiba_C_F", "", 510000, -1, "" },
			{ "arifle_MX_F", "", 620000, 2500, "" },
            { "arifle_MXM_F", "", 750000, 5000, "" },
            { "arifle_MX_SW_F", "", 900000, -1, "" },
			{ "arifle_ARX_ghex_F", "", 1180000, 2500, "" },
            { "arifle_CTAR_ghex_F", "", 1400000, 5000, "" },
            { "arifle_AKS_F", "", 1650000, -1, "" },
			{ "arifle_AK12_F", "", 2000000, 2500, "" },
            { "srifle_DMR_06_camo_F", "", 2600000, 5000, "" },
            { "srifle_EBR_F", "", 3300000, -1, "" },
            { "LMG_Zafir_F", "", 5000000, 7500, "" }
        };
        mags[] = {
            { "30Rnd_556x45_Stanag", "", 350, 100, "" },
            { "30Rnd_65x39_caseless_green", "", 500, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 500, 100, "" },
			{ "100Rnd_65x39_caseless_mag", "", 3000, 100, "" },
            { "30Rnd_65x39_caseless_green", "", 500, 100, "" },
            { "30Rnd_580x42_Mag_F", "", 460, 100, "" },
			{ "30Rnd_545x39_Mag_F", "", 460, 100, "" },
            { "30Rnd_762x39_Mag_F", "", 4500, 100, "" },
            { "20Rnd_762x51_Mag", "", 4500, 100, "" },
			{ "150Rnd_762x54_Box", "", 6000, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 10000, 100, "" },
            { "optic_Arco", "", 35000, 100, "" },
            { "optic_Holosight", "", 15000, 100, "" },
			{ "optic_Hamr", "", 70000, 100, "" },
            { "optic_MRCO", "", 55000, 100, "" },
			{ "optic_ERCO_khk_F", "", 100000, 100, "" },
            { "optic_SOS", "", 165000, 100, "" },
			{ "optic_DMS", "", 230000, 100, "" },
            { "optic_KHS_old", "", 350000, 100, "" },
			{ "optic_AMS_khk", "", 350000, 100, "" },
            { "acc_pointer_IR", "", 20000, 100, "" },
			{ "acc_flashlight", "", 30000, 100, "" },
			{ "bipod_02_F_tan", "", 85000, 100, "" },
			{ "bipod_01_F_khk", "", 85000, 100, "" },
			{ "bipod_03_F_oli", "", 85000, 100, "" },
			{ "Binocular", "", 10000, 100, "" },
			{ "Rangefinder", "", 120000, 100, "" },
            { "FirstAidKit", "", 4500, 100, "" }
        };
    };

    class gang {
        name = "Schwarzmarkt";
        side = "civ";
        conditions = "";
        items[] = {
            { "hgun_PDW2000_F", "", 150000, 500, "" },
            { "SMG_05_F", "", 180000, -1, "" },
            { "SMG_02_F", "", 210000, -1, "" },
			{ "SMG_01_F", "", 175000, -1, "" },
			{ "arifle_SDAR_F", "", 375000, -1, "" },
            { "arifle_MXC_F", "", 750000, -1, "" }
        };
        mags[] = {
            { "30Rnd_9x21_Mag", "", 75, 100, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 75, 100, "" },
            { "30Rnd_45ACP_Mag_SMG_01", "", 125, 100, "" },
			{ "20Rnd_556x45_UW_mag", "", 300, 100, "" },
            { "30Rnd_65x39_caseless_mag", "", 300, 100, "" }
        };
        accs[] = {
            { "optic_ACO_grn_smg", "", 10000, 100, "" }
        };
    };

    //Basic Shops
    class genstore {
        name = "Shutter-Island Baumarkt";
        side = "civ";
        conditions = "";
        items[] = {
            { "Binocular", "", 150, -1, "" },
            { "ItemGPS", "", 5000, 45, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 4500, 65, "" },
            { "Chemlight_red", "", 3000, -1, "" },
            { "Chemlight_yellow", "", 3000, 50, "" },
            { "Chemlight_green", "", 3000, 50, "" },
            { "Chemlight_blue", "", 3000, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    class f_station_store {
        name = "Bert´s TankKaffee";
        side = "";
        conditions = "";
        items[] = {
            { "Binocular", "", 750, -1, "" },
            { "ItemGPS", "", 5000, 45, "" },
            { "ItemMap", "", 250, 35, "" },
            { "ItemCompass", "", 250, 25, "" },
            { "ItemWatch", "", 250, -1, "" },
            { "FirstAidKit", "", 4500, 65, "" },
            { "Chemlight_red", "", 3000, -1, "" },
            { "Chemlight_yellow", "", 3000, 50, "" },
            { "Chemlight_green", "", 3000, 50, "" },
            { "Chemlight_blue", "", 3000, 50, "" }
        };
        mags[] = {};
        accs[] = {};
    };

    //Cop Shops
    class cop_basic {
        name = "LAPD/FBI Shop";
        side = "cop";
        conditions = "";
        items[] = {
            { "hgun_P07_snds_F", "PO Taser", 1500, -1, "call life_coplevel >= 1" },
			{ "arifle_sdar_F", "(PO II) TaserRifle", 5000, -1, "call life_coplevel >= 2" },
            { "SMG_02_F", "(PO II) Sting 9mm", 12000, -1, "call life_coplevel >= 2" },
            { "arifle_MX_Black_F", "(PO III) MX 6.5mm", 15000, -1, "call life_coplevel >= 3" },
            { "arifle_MXM_Black_F", "(PD I-II) MXM 6.5mm", 17500, -1, "call life_coplevel >= 4" },
            { "srifle_DMR_07_blk_F", "(SG I) CMR-76 7,62mm", 20500, -1, "call life_coplevel >= 6" },
            { "arifle_SPAR_01_blk_F", "(SG II) SPAR-16 5.56mm", 23000, -1, "call life_coplevel >= 7" },
            { "arifle_CTAR_blk_F", "(SG II) CAR-95 5,8mm", 26000, -1, "call life_coplevel >= 7" },
            { "arifle_SPAR_03_blk_F", "(LT I) SPAR-17 7,62mm", 20500, -1, "call life_coplevel >= 8" },
			{ "srifle_EBR_F", "(CP I) MK18 7,62mm", 60000, -1, "call life_coplevel >= 10" },
            { "srifle_DMR_03_F", "MK1 7,62mm", 95000, -1, "call life_coplevel >= 11" },
            { "MMG_02_black_F", "(PC) SPMG .338", 180000, -1, "call life_coplevel >= 12" },
            { "srifle_DMR_02_F", "MAR-10 .338", 250000, -1, "call life_coplevel >= 14" },
			{ "arifle_AK12_GL_F", "", 140000, -1, "call life_coplevel >= 16" },
            { "srifle_DMR_06_olive_F", "", 122000, -1, "call life_coplevel >= 16" },
			{ "hgun_Pistol_Signal_F", "", 50000, -1, "call life_coplevel >= 16" },
			{ "HandGrenade_Stone", "Flashbang", 10000, -1, "call life_coplevel >= 16" },
			{ "B_UavTerminal", "UAV Terminal", 15000, -1, "call life_coplevel >= 16" },
			{ "SatchelCharge_Remote_Mag", "Sprengstoff", 32000, -1, "call life_coplevel >= 8" },
            { "Rangefinder", "", 12000, -1, "" },
            { "ItemMap", "", 250, -1, "" },
            { "ItemCompass", "", 250, -1, "" },
			{ "ItemWatch", "", 250, -1, "" },
            { "ItemGPS", "", 5000, -1, "" },
            { "ItemRadio", "", 250, -1, "" },
            { "SmokeShellBlue", "", 1000, -1, "" },
			{ "SmokeShellOrange", "", 1000, -1, "" },
            { "FirstAidKit", "", 1000, -1, "" }
        };
        mags[] = {
            { "16Rnd_9x21_Mag", "", 50, -1, "" },
            { "20Rnd_556x45_UW_mag", "", 65, -1, "" },
            { "30Rnd_9x21_Mag_SMG_02", "", 80, -1, "" },
            { "30Rnd_65x39_caseless_mag", "", 120, -1, "" },
			{ "20Rnd_650x39_Cased_Mag_F", "", 145, -1, "" },
            { "30Rnd_556x45_Stanag", "", 110, -1, "" },
            { "30Rnd_580x42_Mag_F", "", 150, -1, "" },
            { "20Rnd_762x51_Mag", "", 180, -1, "" },
			{ "130Rnd_338_Mag", "", 350, -1, "" },
            { "10Rnd_338_Mag", "", 350, -1, "" },
            { "30Rnd_762x39_Mag_F", "", 180, -1, "" },
            { "6Rnd_GreenSignal_F", "", 95, -1, "" },
            { "6Rnd_RedSignal_F", "", 95, -1, "" }
        };
        accs[] = {
            { "muzzle_snds_L", "", 5500, -1, "call life_coplevel >= 2" },
            { "acc_flashlight", "", 500, -1, "call life_coplevel >= 2" },
            { "optic_Aco_smg", "", 1300, -1, "call life_coplevel >= 2" },
            { "muzzle_snds_H", "", 5500, -1, "call life_coplevel >= 3" },
            { "optic_Hamr", "", 3000, -1, "call life_coplevel >= 3" },
			{ "bipod_01_F_blk", "", 3200, -1, "call life_coplevel >= 3" },
            { "optic_LRPS", "", 9500, -1, "call life_coplevel >= 4" },
            { "muzzle_snds_M", "", 5500, -1, "call life_coplevel >= 7" },
            { "optic_Holosight_smg_blk_F", "", 2400, -1, "call life_coplevel >= 7" },
			{ "muzzle_snds_B", "", 5500, -1, "call life_coplevel >= 8" },
            { "optic_AMS", "", 9500, -1, "call life_coplevel >= 10" },
            { "optic_ERCO_blk_F", "", 3000, -1, "call life_coplevel >= 12" }
        };
    };

    //Medic Shops
    class med_basic {
        name = "A.E.R.S Store";
        side = "med";
        conditions = "";
        items[] = {
            { "ItemMap", "", 250, -1, "" },
            { "ItemCompass", "", 250, -1, "" },
			{ "ItemWatch", "", 250, -1, "" },
            { "ItemGPS", "", 5000, -1, "" },
			{ "Medikit", "", 8500, -1, "" },
			{ "NVGoggles_OPFOR", "", 8500, -1, "call life_mediclevel >= 4" },
			{ "Chemlight_yellow", "", 1200, -1, "" },
			{ "Chemlight_red", "", 1200, -1, "" },
			{ "Chemlight_green", "", 1200, -1, "" }
        };
        mags[] = {};
        accs[] = {};
    };
};
