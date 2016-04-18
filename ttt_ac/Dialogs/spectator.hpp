/* #Leneqe
$[
	1.062,
	["",[[0,0,1,1],0.025,0.04,"GUI_GRID"],0,0,0],
	[2200,"",[2,"",["7 * GUI_GRID_W + GUI_GRID_X","3 * GUI_GRID_H + GUI_GRID_Y","26 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2201,"",[2,"",["7 * GUI_GRID_W + GUI_GRID_X","4 * GUI_GRID_H + GUI_GRID_Y","26 * GUI_GRID_W","9 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1000,"",[2,"NSS Admin Console // Spectator",["7 * GUI_GRID_W + GUI_GRID_X","3 * GUI_GRID_H + GUI_GRID_Y","21.5 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1600,"",[2,"X",["31.5 * GUI_GRID_W + GUI_GRID_X","3 * GUI_GRID_H + GUI_GRID_Y","1.5 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1601,"",[2,"<<",["30 * GUI_GRID_W + GUI_GRID_X","3 * GUI_GRID_H + GUI_GRID_Y","1.5 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[2100,"",[2,"",["9 * GUI_GRID_W + GUI_GRID_X","6 * GUI_GRID_H + GUI_GRID_Y","6 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1602,"",[2,"Internal",["9 * GUI_GRID_W + GUI_GRID_X","10 * GUI_GRID_H + GUI_GRID_Y","6 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1603,"",[2,"External",["17 * GUI_GRID_W + GUI_GRID_X","10 * GUI_GRID_H + GUI_GRID_Y","6 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1604,"",[2,"Free",["25 * GUI_GRID_W + GUI_GRID_X","10 * GUI_GRID_H + GUI_GRID_Y","6 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1605,"",[2,"Teleport to",["25 * GUI_GRID_W + GUI_GRID_X","6 * GUI_GRID_H + GUI_GRID_Y","6 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1606,"",[2,"Freeze",["17 * GUI_GRID_W + GUI_GRID_X","6 * GUI_GRID_H + GUI_GRID_Y","6 * GUI_GRID_W","1 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1800,"",[2,"Select player",["8 * GUI_GRID_W + GUI_GRID_X","4.5 * GUI_GRID_H + GUI_GRID_Y","8 * GUI_GRID_W","3.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1801,"",[2,"Select view",["8 * GUI_GRID_W + GUI_GRID_X","8.5 * GUI_GRID_H + GUI_GRID_Y","24 * GUI_GRID_W","3.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]],
	[1802,"",[2,"Actions",["16 * GUI_GRID_W + GUI_GRID_X","4.5 * GUI_GRID_H + GUI_GRID_Y","16 * GUI_GRID_W","3.5 * GUI_GRID_H"],[-1,-1,-1,-1],[-1,-1,-1,-1],[-1,-1,-1,-1],"","-1"],[]]
]
*/

class NSS_AC_Spectator
{
	idd = -1;
	movingEnable = true;											
	controlsBackground[] = {IGUIBack_2200, IGUIBack_2201};
	objects[] = {};
	controls[] = {RscText_1000, RscButton_1600, RscButton_1601, RscCombo_2100, RscButton_1602, RscButton_1603, RscButton_1604, RscButton_1605, RscButton_1606, RscFrame_1800, RscFrame_1801, RscFrame_1802};


class IGUIBack_2200: NSS_AC_IGUIBack
{
	idc = 2200;
	moving = 1;
	x = 7 * GUI_GRID_W + GUI_GRID_X;
	y = 3 * GUI_GRID_H + GUI_GRID_Y;
	w = 26 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class IGUIBack_2201: NSS_AC_IGUIBack2
{
	idc = 2201;
	moving = 1;
	x = 7 * GUI_GRID_W + GUI_GRID_X;
	y = 4 * GUI_GRID_H + GUI_GRID_Y;
	w = 26 * GUI_GRID_W;
	h = 9 * GUI_GRID_H;
};
class RscText_1000: NSS_AC_RscText
{
	idc = 1000;
	text = "NSS Admin Console // Spectator"; //--- ToDo: Localize;
	x = 7 * GUI_GRID_W + GUI_GRID_X;
	y = 3 * GUI_GRID_H + GUI_GRID_Y;
	w = 21.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1600: NSS_AC_RscButton2
{
	idc = 1600;
	text = "X"; //--- ToDo: Localize;
	x = 31.5 * GUI_GRID_W + GUI_GRID_X;
	y = 3 * GUI_GRID_H + GUI_GRID_Y;
	w = 1.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1601: NSS_AC_RscButton2
{
	idc = 1601;
	text = "<<"; //--- ToDo: Localize;
	x = 30 * GUI_GRID_W + GUI_GRID_X;
	y = 3 * GUI_GRID_H + GUI_GRID_Y;
	w = 1.5 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscCombo_2100: NSS_AC_RscCombo
{
	idc = 2100;
	x = 9 * GUI_GRID_W + GUI_GRID_X;
	y = 6 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1602: NSS_AC_RscButton
{
	idc = 1602;
	text = "Internal"; //--- ToDo: Localize;
	x = 9 * GUI_GRID_W + GUI_GRID_X;
	y = 10 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1603: NSS_AC_RscButton
{
	idc = 1603;
	text = "External"; //--- ToDo: Localize;
	x = 17 * GUI_GRID_W + GUI_GRID_X;
	y = 10 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1604: NSS_AC_RscButton
{
	idc = 1604;
	text = "Free"; //--- ToDo: Localize;
	x = 25 * GUI_GRID_W + GUI_GRID_X;
	y = 10 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1605: NSS_AC_RscButton
{
	idc = 1605;
	text = "Teleport to"; //--- ToDo: Localize;
	x = 25 * GUI_GRID_W + GUI_GRID_X;
	y = 6 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscButton_1606: NSS_AC_RscButton
{
	idc = 1606;
	text = "Freeze"; //--- ToDo: Localize;
	x = 17 * GUI_GRID_W + GUI_GRID_X;
	y = 6 * GUI_GRID_H + GUI_GRID_Y;
	w = 6 * GUI_GRID_W;
	h = 1 * GUI_GRID_H;
};
class RscFrame_1800: NSS_AC_RscFrame
{
	idc = 1800;
	text = "Select player"; //--- ToDo: Localize;
	x = 8 * GUI_GRID_W + GUI_GRID_X;
	y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 8 * GUI_GRID_W;
	h = 3.5 * GUI_GRID_H;
};
class RscFrame_1801: NSS_AC_RscFrame
{
	idc = 1801;
	text = "Select view"; //--- ToDo: Localize;
	x = 8 * GUI_GRID_W + GUI_GRID_X;
	y = 8.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 24 * GUI_GRID_W;
	h = 3.5 * GUI_GRID_H;
};
class RscFrame_1802: NSS_AC_RscFrame
{
	idc = 1802;
	text = "Actions"; //--- ToDo: Localize;
	x = 16 * GUI_GRID_W + GUI_GRID_X;
	y = 4.5 * GUI_GRID_H + GUI_GRID_Y;
	w = 16 * GUI_GRID_W;
	h = 3.5 * GUI_GRID_H;
};
};