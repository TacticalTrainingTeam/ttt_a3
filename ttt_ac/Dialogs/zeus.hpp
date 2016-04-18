/*
class IGUIBack_2200: IGUIBack
{
	idc = 2200;
	x = 0.375312 * safezoneW + safezoneX;
	y = 0.388 * safezoneH + safezoneY;
	w = 0.249375 * safezoneW;
	h = 0.028 * safezoneH;
};
class IGUIBack_2201: IGUIBack
{
	idc = 2201;
	x = 0.375312 * safezoneW + safezoneX;
	y = 0.416 * safezoneH + safezoneY;
	w = 0.249375 * safezoneW;
	h = 0.196 * safezoneH;
};
class RscText_1000: RscText
{
	idc = 1000;
	text = "NSS Admin Console // Zeus"; //--- ToDo: Localize;
	x = 0.375312 * safezoneW + safezoneX;
	y = 0.388 * safezoneH + safezoneY;
	w = 0.203437 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscButton_1600: RscButton
{
	idc = 1600;
	text = "X"; //--- ToDo: Localize;
	x = 0.605 * safezoneW + safezoneX;
	y = 0.388 * safezoneH + safezoneY;
	w = 0.0196875 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscButton_1601: RscButton
{
	idc = 1601;
	text = "<<"; //--- ToDo: Localize;
	x = 0.585312 * safezoneW + safezoneX;
	y = 0.388 * safezoneH + safezoneY;
	w = 0.0196875 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscEdit_1400: RscEdit
{
	idc = 1400;
	x = 0.467188 * safezoneW + safezoneX;
	y = 0.444 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscButton_1602: RscButton
{
	idc = 1602;
	text = "Interface"; //--- ToDo: Localize;
	x = 0.388437 * safezoneW + safezoneX;
	y = 0.556 * safezoneH + safezoneY;
	w = 0.065625 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscButton_1603: RscButton
{
	idc = 1603;
	text = "Load"; //--- ToDo: Localize;
	x = 0.388437 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.065625 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscButton_1604: RscButton
{
	idc = 1604;
	text = "Save"; //--- ToDo: Localize;
	x = 0.388437 * safezoneW + safezoneX;
	y = 0.444 * safezoneH + safezoneY;
	w = 0.065625 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscButton_1605: RscButton
{
	idc = 1605;
	text = "Delete"; //--- ToDo: Localize;
	x = 0.467187 * safezoneW + safezoneX;
	y = 0.556 * safezoneH + safezoneY;
	w = 0.065625 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscCombo_2100: RscCombo
{
	idc = 2100;
	x = 0.467187 * safezoneW + safezoneX;
	y = 0.5 * safezoneH + safezoneY;
	w = 0.144375 * safezoneW;
	h = 0.028 * safezoneH;
};
class RscButton_1606: RscButton
{
	idc = 1606;
	text = "Export"; //--- ToDo: Localize;
	x = 0.545937 * safezoneW + safezoneX;
	y = 0.556 * safezoneH + safezoneY;
	w = 0.065625 * safezoneW;
	h = 0.028 * safezoneH;
};
*/

class NSS_AC_Zeus
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
		RscEdit_1400,
		RscButton_1602,
		RscButton_1603,
		RscButton_1604,
		RscButton_1605,
		RscCombo_2100,
		RscButton_1606
	};

	class IGUIBack_2200: NSS_AC_IGUIBack
	{
		idc = 2200;
		moving = 1;
		x = 0.375312 * safezoneW + safezoneX;
		y = 0.388 * safezoneH + safezoneY;
		w = 0.249375 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class IGUIBack_2201: NSS_AC_IGUIBack2
	{
		idc = 2201;
		moving = 1;
		x = 0.375312 * safezoneW + safezoneX;
		y = 0.416 * safezoneH + safezoneY;
		w = 0.249375 * safezoneW;
		h = 0.196 * safezoneH;
	};
	class RscText_1000: NSS_AC_RscText
	{
		idc = 1000;
		text = "NSS Admin Console // Zeus"; //--- ToDo: Localize;
		x = 0.375312 * safezoneW + safezoneX;
		y = 0.388 * safezoneH + safezoneY;
		w = 0.203437 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscButton_1600: NSS_AC_RscButton2
	{
		idc = 1600;
		text = "X"; //--- ToDo: Localize;
		x = 0.605 * safezoneW + safezoneX;
		y = 0.388 * safezoneH + safezoneY;
		w = 0.0196875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscButton_1601: NSS_AC_RscButton2
	{
		idc = 1601;
		text = "<<"; //--- ToDo: Localize;
		x = 0.585312 * safezoneW + safezoneX;
		y = 0.388 * safezoneH + safezoneY;
		w = 0.0196875 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscEdit_1400: NSS_AC_RscEdit
	{
		idc = 1400;
		x = 0.467188 * safezoneW + safezoneX;
		y = 0.444 * safezoneH + safezoneY;
		w = 0.144375 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscButton_1602: NSS_AC_RscButton
	{
		idc = 1602;
		text = "Interface"; //--- ToDo: Localize;
		x = 0.388437 * safezoneW + safezoneX;
		y = 0.556 * safezoneH + safezoneY;
		w = 0.065625 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscButton_1603: NSS_AC_RscButton
	{
		idc = 1603;
		text = "Load"; //--- ToDo: Localize;
		x = 0.388437 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.065625 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscButton_1604: NSS_AC_RscButton
	{
		idc = 1604;
		text = "Save"; //--- ToDo: Localize;
		x = 0.388437 * safezoneW + safezoneX;
		y = 0.444 * safezoneH + safezoneY;
		w = 0.065625 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscButton_1605: NSS_AC_RscButton
	{
		idc = 1605;
		text = "Delete"; //--- ToDo: Localize;
		x = 0.467187 * safezoneW + safezoneX;
		y = 0.556 * safezoneH + safezoneY;
		w = 0.065625 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscCombo_2100: NSS_AC_RscCombo
	{
		idc = 2100;
		x = 0.467187 * safezoneW + safezoneX;
		y = 0.5 * safezoneH + safezoneY;
		w = 0.144375 * safezoneW;
		h = 0.028 * safezoneH;
	};
	class RscButton_1606: NSS_AC_RscButton
	{
		idc = 1606;
		text = "Export"; //--- ToDo: Localize;
		x = 0.545937 * safezoneW + safezoneX;
		y = 0.556 * safezoneH + safezoneY;
		w = 0.065625 * safezoneW;
		h = 0.028 * safezoneH;
	};
};