class NSS_AC_Login
{
	idd = -1;
	movingEnable = true;											
	controlsBackground[] = {IGUIBack_2200, IGUIBack_2201};
	objects[] = {};
	controls[] = 
	{
		RscText_1000,
		RscButton_1600,
		RscText_1001,
		RscEdit_1400,
		RscButton_1601
	};

class IGUIBack_2200: NSS_AC_IGUIBack
{
	idc = 2200;
	moving = 1;
	x = 0.36875 * safezoneW + safezoneX;
	y = 0.402 * safezoneH + safezoneY;
	w = 0.2625 * safezoneW;
	h = 0.028 * safezoneH;
};
class IGUIBack_2201: NSS_AC_IGUIBack2
{
	idc = 2201;
	moving = 1;
	x = 0.36875 * safezoneW + safezoneX;
	y = 0.43 * safezoneH + safezoneY;
	w = 0.2625 * safezoneW;
	h = 0.14 * safezoneH;
};
class RscText_1000: NSS_AC_RscText
{
	idc = 1000;
	text = "NSS Admin Console // Login"; //--- ToDo: Localize;
	x = 0.36875 * safezoneW + safezoneX;
	y = 0.402 * safezoneH + safezoneY;
	w = 0.23625 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscButton_1600: NSS_AC_RscButton2
{
	idc = 1600;
	text = "X"; //--- ToDo: Localize;
	x = 0.611562 * safezoneW + safezoneX;
	y = 0.402 * safezoneH + safezoneY;
	w = 0.0196875 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscText_1001: NSS_AC_RscText
{
	idc = 1001;
	text = "Password:"; //--- ToDo: Localize;
	x = 0.375312 * safezoneW + safezoneX;
	y = 0.458 * safezoneH + safezoneY;
	w = 0.0721875 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscEdit_1400: NSS_AC_RscEdit
{
	idc = 1400;
	x = 0.4475 * safezoneW + safezoneX;
	y = 0.458 * safezoneH + safezoneY;
	w = 0.170625 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscButton_1601: NSS_AC_RscButton
{
	idc = 1601;
	text = "Login"; //--- ToDo: Localize;
	x = 0.460625 * safezoneW + safezoneX;
	y = 0.514 * safezoneH + safezoneY;
	w = 0.07875 * safezoneW;
	h = 0.028 * safezoneH;
};
};