class NSS_AC_Code
{
	idd = 552266;
	movingEnable = true;											
	controlsBackground[] = {IGUIBack_2200, IGUIBack_2201};
	objects[] = {};
	controls[] = {RscText_1000, RscEdit_1400, RscButton_1600, RscButton_1601, RscButton_1602, RscButton_1603, RscCombo_2100, RscButton_1604, RscButton_1605, RscButton_1606, RscButton_1607, RscCombo_2101, RscButton_1608, RscFrame_1800, RscEdit_1401, RscEdit_1402, RscButton_1609, RscEdit_1403, RscEdit_1404, RscButton_1610, RscEdit_1405, RscEdit_1406, RscButton_1611, RscEdit_1407, RscEdit_1408, RscButton_1612, RscButton_1613, RscButton_1614, RscButton_1615, RscText_1001, RscEdit_1409};

class IGUIBack_2200: NSS_AC_IGUIBack
{
	idc = 2200;
	moving = 1;
	x = 2 * GUI_GRID_W + GUI_GRID_X;
	y = 1 * GUI_GRID_H + GUI_GRID_Y;
	w = 36 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class IGUIBack_2201: NSS_AC_IGUIBack2
{
	idc = 2201;
	moving = 1;
	x = 2 * GUI_GRID_W + GUI_GRID_X;
	y = 2 * GUI_GRID_H + GUI_GRID_Y;
	w = 36 * GUI_GRID_W;
	h = 22 * GUI_GRID_H;
};
class RscText_1000: NSS_AC_RscText
{
	idc = 1000;
	text = "NSS Admin Console // Execute Code"; //--- ToDo: Localize;
	x = 2 * GUI_GRID_W + GUI_GRID_X;
	y = 1 * GUI_GRID_H + GUI_GRID_Y;
	w = 19 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscEdit_1400: NSS_AC_RscEdit
{
	idc = 1400;
	x = 3 * GUI_GRID_W + GUI_GRID_X;
	y = 3 * GUI_GRID_H + GUI_GRID_Y;
	w = 30 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1600: NSS_AC_RscButton
{
	idc = 1600;
	text = "Server Exec"; //--- ToDo: Localize;
	x = 3 * GUI_GRID_W + GUI_GRID_X;
	y = 5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1601: NSS_AC_RscButton
{
	idc = 1601;
	text = "Global Exec"; //--- ToDo: Localize;
	x = 10 * GUI_GRID_W + GUI_GRID_X;
	y = 5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1602: NSS_AC_RscButton
{
	idc = 1602;
	text = "Local Exec"; //--- ToDo: Localize;
	x = 17 * GUI_GRID_W + GUI_GRID_X;
	y = 5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1603: NSS_AC_RscButton
{
	idc = 1603;
	text = "Player Exec"; //--- ToDo: Localize;
	x = 24 * GUI_GRID_W + GUI_GRID_X;
	y = 5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscCombo_2100: NSS_AC_RscCombo
{
	idc = 2100;
	x = 31 * GUI_GRID_W + GUI_GRID_X;
	y = 5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1604: NSS_AC_RscButton2
{
	idc = 1604;
	text = "X"; //--- ToDo: Localize;
	x = 36.5 * GUI_GRID_W + GUI_GRID_X;
	y = 1 * GUI_GRID_H + GUI_GRID_Y;
	w = 1.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1605: NSS_AC_RscButton2
{
	idc = 1605;
	text = "<<"; //--- ToDo: Localize;
	x = 35 * GUI_GRID_W + GUI_GRID_X;
	y = 1 * GUI_GRID_H + GUI_GRID_Y;
	w = 1.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1606: NSS_AC_RscButton
{
	idc = 1606;
	text = "Save Code"; //--- ToDo: Localize;
	x = 10 * GUI_GRID_W + GUI_GRID_X;
	y = 7 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1607: NSS_AC_RscButton
{
	idc = 1607;
	text = "Load Code"; //--- ToDo: Localize;
	x = 3 * GUI_GRID_W + GUI_GRID_X;
	y = 7 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscCombo_2101: NSS_AC_RscCombo
{
	idc = 2101;
	x = 24 * GUI_GRID_W + GUI_GRID_X;
	y = 7 * GUI_GRID_H + GUI_GRID_Y;
	w = 13 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1608: NSS_AC_RscButton
{
	idc = 1608;
	text = "Delete Code"; //--- ToDo: Localize;
	x = 17 * GUI_GRID_W + GUI_GRID_X;
	y = 7 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscFrame_1800: NSS_AC_RscFrame
{
	idc = 1800;
	text = "Variable Monitor"; //--- ToDo: Localize;
	x = 3 * GUI_GRID_W + GUI_GRID_X;
	y = 9 * GUI_GRID_H + GUI_GRID_Y;
	w = 34 * GUI_GRID_W;
	h = 14 * GUI_GRID_H;
};
class RscEdit_1401: NSS_AC_RscEdit
{
	idc = 1401;
	x = 4 * GUI_GRID_W + GUI_GRID_X;
	y = 10.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 32 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscEdit_1402: NSS_AC_RscEdit
{
	idc = 1402;
	x = 4 * GUI_GRID_W + GUI_GRID_X;
	y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 26 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1609: NSS_AC_RscButton
{
	idc = 1609;
	text = "To clipboard"; //--- ToDo: Localize;
	x = 30 * GUI_GRID_W + GUI_GRID_X;
	y = 11.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscEdit_1403: NSS_AC_RscEdit
{
	idc = 1403;
	x = 4 * GUI_GRID_W + GUI_GRID_X;
	y = 13 * GUI_GRID_H + GUI_GRID_Y;
	w = 32 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscEdit_1404: NSS_AC_RscEdit
{
	idc = 1404;
	x = 4 * GUI_GRID_W + GUI_GRID_X;
	y = 14 * GUI_GRID_H + GUI_GRID_Y;
	w = 26 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1610: NSS_AC_RscButton
{
	idc = 1610;
	text = "To clipboard"; //--- ToDo: Localize;
	x = 30 * GUI_GRID_W + GUI_GRID_X;
	y = 14 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscEdit_1405: NSS_AC_RscEdit
{
	idc = 1405;
	x = 4 * GUI_GRID_W + GUI_GRID_X;
	y = 15.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 32 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscEdit_1406: NSS_AC_RscEdit
{
	idc = 1406;
	x = 4 * GUI_GRID_W + GUI_GRID_X;
	y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 26 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1611: NSS_AC_RscButton
{
	idc = 1611;
	text = "To clipboard"; //--- ToDo: Localize;
	x = 30 * GUI_GRID_W + GUI_GRID_X;
	y = 16.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscEdit_1407: NSS_AC_RscEdit
{
	idc = 1407;
	x = 4 * GUI_GRID_W + GUI_GRID_X;
	y = 18 * GUI_GRID_H + GUI_GRID_Y;
	w = 32 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscEdit_1408: NSS_AC_RscEdit
{
	idc = 1408;
	x = 4 * GUI_GRID_W + GUI_GRID_X;
	y = 19 * GUI_GRID_H + GUI_GRID_Y;
	w = 26 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1612: NSS_AC_RscButton
{
	idc = 1612;
	text = "To clipboard"; //--- ToDo: Localize;
	x = 30 * GUI_GRID_W + GUI_GRID_X;
	y = 19 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1613: NSS_AC_RscButton
{
	idc = 1613;
	text = "Clear"; //--- ToDo: Localize;
	x = 34 * GUI_GRID_W + GUI_GRID_X;
	y = 3 * GUI_GRID_H + GUI_GRID_Y;
	w = 3 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1614: NSS_AC_RscButton
{
	idc = 1614;
	text = "Start"; //--- ToDo: Localize;
	x = 23 * GUI_GRID_W + GUI_GRID_X;
	y = 21 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1615: NSS_AC_RscButton
{
	idc = 1615;
	text = "Stop"; //--- ToDo: Localize;
	x = 30 * GUI_GRID_W + GUI_GRID_X;
	y = 21 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscText_1001: NSS_AC_RscText
{
	idc = 1001;
	text = "Interval in milliseconds:"; //--- ToDo: Localize;
	x = 4 * GUI_GRID_W + GUI_GRID_X;
	y = 21 * GUI_GRID_H + GUI_GRID_Y;
	w = 11 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscEdit_1409: NSS_AC_RscEdit
{
	idc = 1409;
	x = 16 * GUI_GRID_W + GUI_GRID_X;
	y = 21 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
};