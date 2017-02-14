class life_skills {
	idd = 90002;
    name= "life_skills";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[] spawn life_fnc_skillsMenu;";
	
    class controlsBackground {
        class RscTitleBackground: Life_RscText {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.72;
            h = (1 / 25);
        };

        class MainBackGround: Life_RscText {
            colorBackground[] = {0,0,0,0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.72;
            h = 0.79 - (22 / 250);
        };

        class Title: Life_RscTitle {
            colorBackground[] = {0,0,0,0};
            idc = -1;
            text = "$STR_skills_Title";
            x = 0.1;
            y = 0.2;
            w = 0.72;
            h = (1 / 25);
        };
    };
	
    class controls {	
        class Life_RscProgress_01: Life_RscProgress {
			idc = 101;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.252;
			w = 0.29;
			h = (1 / 25);
		};

		class Life_RscProgress_02: Life_RscProgress {
			idc = 102;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.302;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_03: Life_RscProgress {
			idc = 103;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.352;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_04: Life_RscProgress {
			idc = 104;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.402;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_05: Life_RscProgress {
			idc = 105;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.452;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_06: Life_RscProgress {
			idc = 106;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.502;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_07: Life_RscProgress {
			idc = 107;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.552;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_08: Life_RscProgress {
			idc = 108;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.602;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_09: Life_RscProgress {
			idc = 109;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.652;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_10: Life_RscProgress {
			idc = 110;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.702;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_11: Life_RscProgress {
			idc = 111;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.752;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_12: Life_RscProgress {
			idc = 112;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.802;
			w = 0.29;
			h = (1 / 25);
		};
		
		class Life_RscProgress_13: Life_RscProgress {
			idc = 113;
			colorBar[] = {0,0.50,0,0.65};
			x = 0.5;
            y = 0.852;
			w = 0.29;
			h = (1 / 25);
		};
		
        class Life_RscTextProgress_01: Life_RscText {
            idc = 201;
            text = "";
			x = 0.5;
            y = 0.25;
            w = 0.65;
            h = (1 / 25);
        };		

        class Life_RscTextProgress_02: Life_RscText {
            idc = 202;
            text = "";
			x = 0.5;
            y = 0.3;
            w = 0.65;
            h = (1 / 25);
        };

		class Life_RscTextProgress_03: Life_RscText {
            idc = 203;
            text = "";
			x = 0.5;
            y = 0.35;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_04: Life_RscText {
            idc = 204;
            text = "";
			x = 0.5;
            y = 0.4;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_05: Life_RscText {
            idc = 205;
            text = "";
			x = 0.5;
            y = 0.45;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_06: Life_RscText {
            idc = 206;
            text = "";
			x = 0.5;
            y = 0.5;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_07: Life_RscText {
            idc = 207;
            text = "";
			x = 0.5;
            y = 0.55;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_08: Life_RscText {
            idc = 208;
            text = "";
			x = 0.5;
            y = 0.6;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_09: Life_RscText {
            idc = 209;
            text = "";
			x = 0.5;
            y = 0.65;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_10: Life_RscText {
            idc = 210;
            text = "";
			x = 0.5;
            y = 0.7;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_11: Life_RscText {
            idc = 211;
            text = "";
			x = 0.5;
            y = 0.75;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_12: Life_RscText {
            idc = 212;
            text = "";
			x = 0.5;
            y = 0.8;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_13: Life_RscText {
            idc = 213;
            text = "";
			x = 0.5;
            y = 0.85;
            w = 0.65;
            h = (1 / 25);
        };
		
		class Life_RscTextLayer_01: Life_RscText {
            idc = 301;
            text = "";
			x = 0.11;
            y = 0.25;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_02: Life_RscText {
            idc = 302;
            text = "";
			x = 0.11;
            y = 0.3;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_03: Life_RscText {
            idc = 303;
            text = "";
			x = 0.11;
            y = 0.35;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_04: Life_RscText {
            idc = 304;
            text = "";
			x = 0.11;
            y = 0.4;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_05: Life_RscText {
            idc = 305;
            text = "";
			x = 0.11;
            y = 0.45;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_06: Life_RscText {
            idc = 306;
            text = "";
			x = 0.11;
            y = 0.5;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_07: Life_RscText {
            idc = 307;
            text = "";
			x = 0.11;
            y = 0.55;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_08: Life_RscText {
            idc = 308;
            text = "";
			x = 0.11;
            y = 0.6;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_09: Life_RscText {
            idc = 309;
            text = "";
			x = 0.11;
            y = 0.65;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_10: Life_RscText {
            idc = 310;
            text = "";
			x = 0.11;
            y = 0.7;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_11: Life_RscText {
            idc = 311;
            text = "";
			x = 0.11;
            y = 0.75;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_12: Life_RscText {
            idc = 312;
            text = "";
			x = 0.11;
            y = 0.8;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_13: Life_RscText {
            idc = 313;
            text = "";
			x = 0.11;
            y = 0.85;
            w = 0.65;
            h = (1 / 25);
        };	
		
        class BtnClose: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0";
            x = 0.1;
            y = 1 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
    };
};