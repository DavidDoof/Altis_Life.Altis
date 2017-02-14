class life_ausweis {
	idd = 90004;
    name= "life_ausweis";
    movingEnable = 0;
    enableSimulation = 1;
    onLoad = "[0] spawn life_fnc_ausweis;";
	
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
            colorBackground[] = {0,0,0,1};
            idc = -1;
            x = safeZoneX;
            y = safeZoneY;
            w = safeZoneW;
            h = safeZoneH;
        };

        class Title: Life_RscTitle {
            colorBackground[] = {0,0,0,0};
            idc = -1;
            text = "$STR_ausweis_Title";
            x = 0.1;
            y = 0.2;
            w = 0.72;
            h = (1 / 25);
        };
    };
	
    class controls {	
		
        class Life_RscTextProgress_01: Life_RscEdit {
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

		class Life_RscTextProgress_03: Life_RscCombo {
            idc = 203;
            text = "";
			x = 0.4;
            y = 0.35;
            w = 0.35;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_04: Life_RscEdit {
            idc = 204;
            text = "";
			x = 0.4;
            y = 0.4;
            w = 0.35;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_05: Life_RscCombo {
            idc = 205;
            text = "";
			x = 0.4;
            y = 0.45;
            w = 0.35;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_06: Life_RscCombo {
            idc = 206;
            text = "";
			x = 0.4;
            y = 0.5;
            w = 0.35;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_07: Life_RscEdit {
            idc = 207;
            text = "";
			x = 0.4;
            y = 0.55;
            w = 0.35;
            h = (1 / 25);
        };
		
		class Life_RscTextProgress_08: Life_RscEdit {
            idc = 208;
            text = "";
			x = 0.4;
            y = 0.6;
            w = 0.35;
            h = (1 / 25);
        };
		
		class Life_RscTextLayer_01: Life_RscText {
            idc = 301;
            text = "Nachname:";
			x = 0.11;
            y = 0.25;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_02: Life_RscText {
            idc = 302;
            text = "Vorname:";
			x = 0.11;
            y = 0.3;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_03: Life_RscText {
            idc = 303;
            text = "Geschlecht:";
			x = 0.11;
            y = 0.35;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_04: Life_RscText {
            idc = 304;
            text = "Geb.-Datum:";
			x = 0.11;
            y = 0.4;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_05: Life_RscText {
            idc = 305;
            text = "Familienstand:";
			x = 0.11;
            y = 0.45;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_06: Life_RscText {
            idc = 306;
            text = "Staatsbürgerschaft:";
			x = 0.11;
            y = 0.5;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_07: Life_RscText {
            idc = 307;
            text = "Strasse:";
			x = 0.11;
            y = 0.55;
            w = 0.65;
            h = (1 / 25);
        };	
		
		class Life_RscTextLayer_08: Life_RscText {
            idc = 308;
            text = "Hausnummer:";
			x = 0.11;
            y = 0.6;
            w = 0.65;
            h = (1 / 25);
        };	
		
		 class BtnSave: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Yes";
            onButtonClick = "[1] spawn life_fnc_ausweis;";
            x = 0.1;
            y = 1 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
    };
};