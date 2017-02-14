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
            { "C_Quadbike_01_F", "" },
            { "C_Hatchback_01_F", "" },
            { "C_Offroad_01_F", "" },
            { "C_Offroad_02_unarmed_F", "" },
			{ "C_SUV_01_F", "" },
            { "C_Hatchback_01_sport_F", "" },
            { "C_Van_01_transport_F", "" }
        };
    };

    class kart_shop {
        side = "civ";
        conditions = "license_civ_driver";
        vehicles[] = {
            { "C_Kart_01_Blu_F", "" },
            { "C_Kart_01_Fuel_F", "" },
            { "C_Kart_01_Red_F", "" },
            { "C_Kart_01_Vrana_F", "" }
        };
    };

    class civ_truck {
        side = "civ";
        conditions = "license_civ_trucking";
        vehicles[] = {
            { "C_Van_01_box_F", "" },
            { "C_Truck_02_transport_F", "" },
            { "C_Truck_02_covered_F", "" },
            { "O_T_Truck_03_transport_ghex_F", "" },
            { "O_T_Truck_03_covered_ghex_F", "" },
            { "B_Truck_01_transport_F", "" },
            { "B_Truck_01_covered_F", "" },
            { "B_Truck_01_fuel_F", "" }
        };
    };

    class civ_air {
        side = "civ";
        conditions = "license_civ_pilot";
        vehicles[] = {
            { "B_Heli_Light_01_F", "" },
            { "O_Heli_Light_02_unarmed_F", "" },
			{ "I_Heli_Transport_02_F", "" },
			{ "O_Heli_Transport_04_covered_F", "" },
            { "C_Plane_Civil_01_F", "" }
        };
    };

     class civ_ship {
        side = "civ";
        conditions = "license_civ_boat";
        vehicles[] = {
            { "C_Rubberboat", "" },
            { "C_Boat_Civil_01_F", "" },
            { "B_SDV_01_F", "" }
        };
    };

    class reb_car {
        side = "civ";
        conditions = "license_civ_rebel";
        vehicles[] = {
            { "O_G_Offroad_01_F", "" },
            { "O_T_MRAP_02_ghex_F", "" },
            { "O_T_LSV_02_unarmed_F", "" },
			{ "O_T_Truck_03_device_ghex_F", "" },
			{ "B_Truck_01_box_F", "" },
			{ "I_G_Offroad_01_armed_F", "" },
			{ "I_APC_Wheeled_03_cannon_F", "" },
			{ "I_Heli_light_03_unarmed_F", "" },
            { "B_Heli_Light_01_stripped_F", "" },
            { "B_Heli_Transport_03_unarmed_F", "" }
        };
    };

    class med_shop {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "C_Hatchback_01_F", "call life_mediclevel >= 2" },
            { "C_Offroad_01_F", "call life_mediclevel >= 1" },
            { "C_SUV_01_F", "call life_mediclevel >= 3" },
			{ "C_Offroad_02_unarmed_F", "call life_mediclevel >= 3" },
			{ "C_Hatchback_01_sport_F", "call life_mediclevel >= 6" },
            { "B_MRAP_01_F", "call life_mediclevel >= 7" }
        };
    };

    class med_air_hs {
        side = "med";
        conditions = "";
        vehicles[] = {
            { "B_Heli_Light_01_F", "call life_mediclevel >= 3" },
			{ "I_Heli_light_03_unarmed_F", "call life_mediclevel >= 6" }
        };
    };

    class cop_car {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_Offroad_01_F", "call life_coplevel >= 2" },
            { "C_Hatchback_01_F", "call life_coplevel >= 3" },
            { "C_SUV_01_F", "call life_coplevel >= 4" },
			{ "C_Hatchback_01_sport_F", "call life_coplevel >= 6" },
            { "B_MRAP_01_F", "call life_coplevel >= 8" },
			{ "B_MRAP_01_hmg_F", "call life_coplevel >= 11" },
            { "I_MRAP_03_F", "call life_coplevel >= 12" },
			{ "B_T_LSV_01_unarmed_F", "call life_coplevel >= 16" },
            { "O_APC_Tracked_02_cannon_F", "call life_coplevel >= 19" }
        };
    };

    class cop_air {
        side = "cop";
        conditions = "license_cop_cAir";
        vehicles[] = {
			////////////Police-Department////////////
            { "B_Heli_Light_01_F", "call life_coplevel >= 4" },
            { "I_Heli_light_03_unarmed_F", "call life_coplevel >= 9" },
			{ "B_T_VTOL_01_infantry_F", "call life_coplevel >= 13" },
			////////////F.B.I////////////
            { "B_Heli_Transport_01_F", "call life_coplevel >= 18" }
        };
    };

    class cop_ship {
        side = "cop";
        conditions = "";
        vehicles[] = {
            { "C_Boat_Civil_01_police_F", "call life_coplevel >= 3" }
        };
    };
};

class LifeCfgVehicles {
    /*
    *    Vehicle Configs (Contains textures and other stuff)
    *
    *    "price" is the price before any multipliers set in Master_Config are applied.
    *
    *    Default Multiplier Values & Calculations:
    *       Civilian [Purchase, Sell]: [1.0, 0.5]
    *       Cop [Purchase, Sell]: [0.5, 0.5]
    *       Medic [Purchase, Sell]: [0.75, 0.5]
    *       ChopShop: Payout = price * 0.25
    *       GarageSell: Payout = price * [0.5, 0.5, 0.5, -1]
    *       Cop Impound: Payout = price * 0.1
    *       Pull Vehicle from Garage: Cost = price * [1, 0.5, 0.75, -1] * [0.5, 0.5, 0.5, -1]
    *           -- Pull Vehicle & GarageSell Array Explanation = [civ,cop,medic,east]
    *
    *       1: STRING (Condition)
    *    Textures config follows { Texture Name, side, {texture(s)path}, Condition}
    *    Texture(s)path follows this format:
    *    INDEX 0: Texture Layer 0
    *    INDEX 1: Texture Layer 1
    *    INDEX 2: Texture Layer 2
    *    etc etc etc
    *
    */

    class Default {
        vItemSpace = -1;
        conditions = "";
        price = -1;
        textures[] = {};
    };
    ///////////BOXEN///////////
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
        vItemSpace = 500;
        conditions = "";
        price = -1;
        textures[] = {};
    };
    ///////////AUTOS///////////
    class C_Kart_01_Blu_F {
        vItemSpace = 20;
        conditions = "license_civ_driver";
        price = 15000;
        textures[] = {};
    };
/*
To edit another information in this classes you can use this exemple.
class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{
    vItemSpace = 40;
    price = ;
};

will modify the virtual space and the price of the vehicle, but other information such as license and textures will pick up the vehicle declare at : Vehicle {};
*/
    class C_Kart_01_Fuel_F : C_Kart_01_Blu_F{}; // Get all information of C_Kart_01_Blu_F
    class C_Kart_01_Red_F : C_Kart_01_Blu_F{};
    class C_Kart_01_Vrana_F : C_Kart_01_Blu_F{};
	
	class C_Hatchback_01_sport_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {license_cop_pcar} || {license_med_mcar}";
        price = 1500000;
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
			{ "A.E.R.S", "med", {
                "textures\a.e.r.s\vehicle\aerslimo.paa"
            }, "" },
			{ "Police", "cop", {
                "textures\police\vehicle\hatchback.paa"
            }, "" } 
		};
    };
	
	class B_MRAP_01_F {
        vItemSpace = 50;
        conditions = "license_civ_driver || {license_cop_pcar} || {license_med_mcar}";
        price = 250000;
        textures[] = {
			{ "A.E.R.S", "med", {
                "textures\a.e.r.s\vehicle\aersfront.paa",
				"textures\a.e.r.s\vehicle\aersback.paa"
            }, "" },
			{ "Police", "cop", {
                "textures\police\vehicle\hunterfront.paa",
				"textures\police\vehicle\hunterback.paa"
            }, "" } 
		};
    };

	class C_Quadbike_01_F {
        vItemSpace = 25;
        conditions = "";
        price = 5000;
        textures[] = {
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
        vItemSpace = 50;
        conditions = "license_civ_driver || {license_cop_pcar} || {license_med_mcar}";
        price = 20000;
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
			{ "A.E.R.S", "med", {
                "textures\a.e.r.s\vehicle\aerslimo.paa"
            }, "" },
			{ "Police", "cop", {
                "textures\police\vehicle\hatchback.paa"
            }, "" } 
		};
    };
	
	class C_Offroad_01_F {
        vItemSpace = 90;
        conditions = "license_civ_driver || {license_cop_pcar} || {license_med_mcar}";
        price = 120000;
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
			{ "A.E.R.S", "med", {
                "textures\a.e.r.s\vehicle\aersoff.paa"
            }, "" },
			{ "Police", "cop", {
                "textures\police\vehicle\off.paa"
            }, "" } 
		};
    };
	
	class C_Offroad_02_unarmed_F {
        vItemSpace = 75;
        conditions = "license_civ_driver || {license_cop_pcar} || {license_med_mcar}";
        price = 90000;
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
			{ "A.E.R.S", "med", {
                "textures\a.e.r.s\vehicle\aerslimo.paa"
            }, "" },
			{ "Police", "cop", {
                "textures\police\vehicle\aerslimo.paa"
            }, "" } 
		};
    };
	
	class C_SUV_01_F {
        vItemSpace = 65;
        conditions = "license_civ_driver || {license_cop_pcar} || {license_med_mcar}";
        price = 180000;
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
			{ "A.E.R.S", "med", {
                "textures\a.e.r.s\vehicle\aerssuv.paa"
            }, "" },
			{ "Police", "cop", {
                "textures\police\vehicle\csuv.paa"
            }, "" } 
		};
    };
	
	class C_Van_01_transport_F {
        vItemSpace = 110;
        conditions = "license_civ_driver";
        price = 240000;
        textures[] = {
			{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
		};
    };
	
	class O_G_Offroad_01_F {
        vItemSpace = 50;
        conditions = "license_civ_rebel";
        price = 100000;
        textures[] = {};
    };
	
	class O_T_MRAP_02_ghex_F {
        vItemSpace = 50;
        conditions = "license_civ_rebel";
        price = 10000000;
        textures[] = {};
    };
	
	class O_T_LSV_02_unarmed_F {
        vItemSpace = 50;
        conditions = "license_civ_rebel";
        price = 1200000;
        textures[] = {};
    };
	
	class I_G_Offroad_01_armed_F {
        vItemSpace = 50;
        conditions = "license_civ_rebel";
        price = 17000000;
        textures[] = {};
    };
	
	class I_APC_Wheeled_03_cannon_F {
        vItemSpace = 50;
        conditions = "license_civ_rebel";
        price = 47000000;
        textures[] = {};
    };
	///////////HELICOPTER///////////
	class C_Heli_Light_01_civil_F {
        vItemSpace = 55;
        conditions = "license_civ_rebel";
        price = 350000;
        textures[] = {
			{ "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" }
		};
    };
	
	class I_Heli_light_03_unarmed_F {
        vItemSpace = 120;
        conditions = "license_civ_rebel || {license_cop_cAir} || {license_med_mAir}";
        price = 7500000;
        textures[] = {
			{ "Standard", "civ", {
            }, "" },
			{ "A.E.R.S", "med", {
                "textures\a.e.r.s\vehicle\aershellc.paa"
            }, "" },
			{ "Police", "cop", {
                "textures\police\vehicle\hellc.paa"
            }, "" }
		};
    };
	
	class B_Heli_Transport_03_unarmed_F {
        vItemSpace = 290;
        conditions = "license_civ_rebel";
        price = 10000000;
        textures[] = {};
    };
	
	class B_Heli_Light_01_stripped_F {
        vItemSpace = 55;
        conditions = "license_civ_rebel";
        price = 350000;
        textures[] = {
			{ "Rebel Digital", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
            { "Digi Green", "reb", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_indp_co.paa"
            }, "" }
		};
    };
	
	class B_Heli_Light_01_F {
        vItemSpace = 55;
        conditions = "license_civ_pilot || {license_cop_cAir} || {license_med_mAir}";
        price = 450000;
        textures[] = {
            { "Sheriff", "civ", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_sheriff_co.paa"
            }, "" },
            { "Civ Blue", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_light_01_ext_blue_co.paa"
            }, "" },
            { "Civ Red", "civ", {
                "\a3\air_f\Heli_Light_01\Data\heli_ligt_01_ext_co.paa"
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
			 { "Rebel Tarn", "reb", {
                "\a3\air_f\Heli_Light_01\Data\Skins\heli_light_01_ext_digital_co.paa"
            }, "" },
			{ "A.E.R.S", "med", {
                "textures\a.e.r.s\vehicle\aerslittle.paa"
            }, "" },
			{ "Police", "cop", {
                "textures\police\vehicle\little.paa"
            }, "" } 
		};
    };
	
	class O_Heli_Light_02_unarmed_F {
        vItemSpace = 165;
        conditions = "license_civ_pilot";
        price = 1500000;
        textures[] = {
			{ "White / Blue", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_civilian_co.paa"
            }, "" },
            { "Digi Green", "civ", {
                "\a3\air_f\Heli_Light_02\Data\heli_light_02_ext_indp_co.paa"
            }, "" }
		};
    };
	
	class I_Heli_Transport_02_F {
        vItemSpace = 285;
        conditions = "license_civ_pilot";
        price = 4500000;
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
            }, "" }
		};
    };
	
	class O_Heli_Transport_04_covered_F {
        vItemSpace = 375;
        conditions = "license_civ_pilot";
        price = 7200000;
        textures[] = {};
    };
	
	class C_Plane_Civil_01_F {
        vItemSpace = 55;
        conditions = "license_civ_pilot";
        price = 450000;
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
    ///////////LASTTANKWAGEN///////////TANKWAGEN///////////
	class C_Van_01_box_F {
        vItemSpace = 150;
        conditions = "license_civ_trucking";
        price = 320000;
        textures[] = {
			{ "White", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_co.paa"
            }, "" },
            { "Red", "civ", {
                "\a3\soft_f_gamma\Van_01\Data\van_01_ext_red_co.paa"
            }, "" }
		};
    };
	
	class C_Truck_02_transport_F {
        vItemSpace = 210;
        conditions = "license_civ_trucking";
        price = 560000;
        textures[] = {};
    };
	
	class C_Truck_02_covered_F {
        vItemSpace = 280;
        conditions = "license_civ_trucking";
        price = 750000;
        textures[] = {};
    };
	
	class O_T_Truck_03_transport_ghex_F {
        vItemSpace = 365;
        conditions = "license_civ_trucking";
        price = 1250000;
        textures[] = {};
    };
	
	class O_T_Truck_03_covered_ghex_F {
        vItemSpace = 430;
        conditions = "license_civ_trucking";
        price = 1840000;
        textures[] = {};
    };
	
	class B_Truck_01_transport_F {
        vItemSpace = 540;
        conditions = "license_civ_trucking";
        price = 2650000;
        textures[] = {};
    };
	
	class B_Truck_01_covered_F {
        vItemSpace = 620;
        conditions = "license_civ_trucking";
        price = 3950000;
        textures[] = {};
    };
	
	class B_Truck_01_fuel_F {
        vItemSpace = 760;
        vFuelSpace = 50000;
        conditions = "license_civ_trucking";
        price = 7450000;
        textures[] = {};
    };
	
	class O_T_Truck_03_device_ghex_F {
        vItemSpace = 920;
        conditions = "license_civ_rebel";
        price = 11500000;
        textures[] = {};
    };
	
	class B_Truck_01_box_F {
        vItemSpace = 1150;
        conditions = "license_civ_rebel";
        price = 18000000;
        textures[] = {};
    };
	/////////BOOTE////////////
	class C_Rubberboat {
        vItemSpace = 45;
        conditions = "license_civ_boat";
        price = 45500;
        textures[] = {};
    };
	
	class C_Boat_Civil_01_F {
        vItemSpace = 65;
        conditions = "license_civ_boat";
        price = 67250;
        textures[] = {};
    };
	
	class B_SDV_01_F {
        vItemSpace = 45;
        conditions = "license_civ_boat";
        price = 120000;
        textures[] = {};
    };
	///////EXTRA/////////
	class O_APC_Tracked_02_cannon_F {
        vItemSpace = 50;
        conditions = "license_cop_pcar";
        price = 2000000;
        textures[] = {};
    };
	
	class B_T_LSV_01_unarmed_F {
        vItemSpace = 75;
        conditions = "license_cop_pcar";
        price = 245000;
        textures[] = {};
    };
	
	class I_MRAP_03_F {
        vItemSpace = 50;
        conditions = "license_cop_pcar";
        price = 630000;
        textures[] = {};
    };
	
	class B_MRAP_01_hmg_F {
        vItemSpace = 50;
        conditions = "license_cop_pcar";
        price = 850000;
        textures[] = {
			{ "Police", "cop", {
                "textures\police\vehicle\hunterfront.paa",
				"textures\police\vehicle\hunterback.paa"
            }, "" } 
		};
    };
	
	class B_T_VTOL_01_infantry_F {
        vItemSpace = 250;
        conditions = "license_cop_cAir";
        price = 1500000;
        textures[] = {};
    };
	
	class B_Heli_Transport_01_F {
        vItemSpace = 80;
        conditions = "license_cop_cAir";
        price = 135000;
        textures[] = {
			{ "Police", "cop", {
                "textures\police\vehicle\ghostvorn.paa",
				"textures\police\vehicle\ghosthinten.paa"
            }, "" } 
		};
    };
};
