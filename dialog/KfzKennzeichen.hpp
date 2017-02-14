class life_kfzkennzeichen {
	idd = 90006;
    name= "life_kfzkennzeichen";
    movingEnable = 0;
    enableSimulation = 1;
    //onLoad = "[null,null,null,[0,objnull]] spawn life_fnc_kfzkennzeichen;";
	
    class controlsBackground {
        class RscTitleBackground: Life_RscText {
            colorBackground[] = {0.663,0.149,0.149,1};
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
            text = "Kfz-Kennzeichen";
            x = 0.1;
            y = 0.2;
            w = 0.72;
            h = (1 / 25);
        };
    };
	
    class controls {	
		
        class Life_RscTextProgress_01: Life_RscCombo {
            idc = 201;
            text = "";
			x = 0.4;
            y = 0.25;
            w = 0.35;
            h = (1 / 25);
        };		

        class Life_RscTextProgress_02: Life_RscEdit {
            idc = 202;
            text = "";
			x = 0.4;
            y = 0.3;
            w = 0.35;
            h = (1 / 25);
        };

		class Life_RscTextProgress_03: Life_RscEdit {
            idc = 203;
            text = "";
			x = 0.4;
            y = 0.35;
            w = 0.35;
            h = (1 / 25);
        };
				
		class Life_RscTextLayer_01: Life_RscText {
            idc = 301;
            text = "Stadt:";
			x = 0.11;
            y = 0.25;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_02: Life_RscText {
            idc = 302;
            text = "2 Buchstaben:";
			x = 0.11;
            y = 0.3;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_03: Life_RscText {
            idc = 303;
            text = "3 Zahlen:";
			x = 0.11;
            y = 0.35;
            w = 0.65;
            h = (1 / 25);
        };	
				
		 class BtnSave: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Yes";
            onButtonClick = "[null,null,null,[1,objnull]] spawn life_fnc_kfzkennzeichen;";
            x = 0.1;
            y = 1 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
    };
};