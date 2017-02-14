class life_my_taxi_heli {
	idd = 2001;
	name= "life_my_taxi_heli";
	movingEnable = 0;
	enableSimulation = 1;
	onLoad = "[0] spawn life_fnc_taxi_heli";
	
	class controlsBackground {
		class Life_RscTitleBackground:Life_RscText {
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", "(profilenamespace getvariable ['GUI_BCG_RGB_A',0.7])"};
			idc = -1;
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
		
		class MainBackground:Life_RscText {
			colorBackground[] = {0, 0, 0, 0.7};
			idc = -1;
			x = 0.1;
			y = 0.2 + (11 / 250);
			w = 0.6;
			h = 0.6 - (22 / 250);
		};
	};
	
	class controls {

		
		class Title : Life_RscTitle {
			colorBackground[] = {0, 0, 0, 0};
			idc = 2002;
			text = "";
			x = 0.1;
			y = 0.2;
			w = 0.6;
			h = (1 / 25);
		};
		
		class citys : Life_RscListBox 
		{
			idc = 2003;
			sizeEx = 0.035;
			
			x = 0.335 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.209 * safezoneH;
			
		};

		class close : Life_RscButtonMenu {
			idc = -1;
			text = "$STR_Global_Close";
			onButtonClick = "closeDialog 0;";
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.43 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.033 * safezoneH;
		};
		
		class ok : Life_RscButtonMenu {
			idc = -1;
			text = "GO";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0.5};
			onButtonClick = "closeDialog 0;[1] call life_fnc_taxi_heli";
			x = 0.484531 * safezoneW + safezoneX;
			y = 0.379 * safezoneH + safezoneY;
			w = 0.08 * safezoneW;
			h = 0.033 * safezoneH;
		};
		
		
	};
};