class removeLicenses {
    idd = 90005;
    movingEnable = 0;
    enableSimulation = 1;

    class controlsBackground {
        class RscTitleBackground: Life_RscText {
            colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
            idc = -1;
            x = 0.1;
            y = 0.2;
            w = 0.62;
            h = (1 / 25);
        };

        class MainBackGround: Life_RscText {
            colorBackground[] = {0,0,0,0.7};
            idc = -1;
            x = 0.1;
            y = 0.2 + (11 / 250);
            w = 0.62;
            h = 0.6 - (22 / 250);
        };

        class Title: Life_RscTitle {
            colorBackground[] = {0,0,0,0};
            idc = -1;
            text = "Lizenzen";
            x = 0.1;
            y = 0.2;
            w = 0.62;
            h = (1 / 25);
        };
    };

    class controls {
        class licList: Life_RscListBox {
            idc = 1;
            sizeEx = 0.04;
            x = 0.11;
            y = 0.25;
            w = 0.6;
            h = 0.38;
        };

        class BtnDoIT: Life_RscButtonMenu {
            idc = -1;
            text = "Lizenz entfernen";
            onButtonclick = "call life_fnc_removeLicensesAction;closeDialog 0;";
            x = 0.1 + (6.25 / 40) + (1 / 250 / (safezoneW / safezoneH));
            y = 0.8 - (1 / 25);
            w = 0.4;
            h = (1 / 25);
        };

        class BtnClose: Life_RscButtonMenu {
            idc = -1;
            text = "$STR_Global_Close";
            onButtonClick = "closeDialog 0";
            x = 0.1;
            y = 0.8 - (1 / 25);
            w = (6.25 / 40);
            h = (1 / 25);
        };
    };
};