class NSS_AC_confirmBox
{
	idd = -1;
	movingEnable = true;											
	controlsBackground[] = {IGUIBack_2200, IGUIBack_2201};
	objects[] = {};
	controls[] = 
	{
		RscText_1000,
		RscButton_1600,
		RscButton_1601,
		RscFrame_1800,
		RscText_1001
	};

	class IGUIBack_2200: NSS_AC_IGUIBack
	{
		idc = 2200;
		x = 0.329375 * safezoneW + safezoneX;
		y = 0.346 * safezoneH + safezoneY;
		w = 0.34125 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class IGUIBack_2201: NSS_AC_IGUIBack2
	{
		idc = 2201;
		x = 0.329375 * safezoneW + safezoneX;
		y = 0.374 * safezoneH + safezoneY;
		w = 0.34125 * safezoneW;
		h = 0.252 * safezoneH;
	};
	class RscText_1000: NSS_AC_RscText
	{
		idc = 1000;
		text = "test"; //--- ToDo: Localize;
		x = 0.329375 * safezoneW + safezoneX;
		y = 0.346 * safezoneH + safezoneY;
		w = 0.34125 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscButton_1600: NSS_AC_RscButton
	{
		idc = 1600;
		text = "Yes"; //--- ToDo: Localize;
		x = 0.3425 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscButton_1601: NSS_AC_RscButton
	{
		idc = 1601;
		text = "No"; //--- ToDo: Localize;
		x = 0.57875 * safezoneW + safezoneX;
		y = 0.57 * safezoneH + safezoneY;
		w = 0.07875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscFrame_1800: NSS_AC_RscFrame
	{
		idc = 1800;
		x = 0.3425 * safezoneW + safezoneX;
		y = 0.402 * safezoneH + safezoneY;
		w = 0.315 * safezoneW;
		h = 0.14 * safezoneH;
	};
	class RscText_1001: NSS_AC_RscText
	{
		idc = 1001;
		style = ST_MULTI;
		text = ""; //--- ToDo: Localize;
		x = 0.3425 * safezoneW + safezoneX;
		y = 0.402 * safezoneH + safezoneY;
		w = 0.315 * safezoneW;
		h = 0.14 * safezoneH;
	};
};