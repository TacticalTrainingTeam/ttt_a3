// cTab - Commander's Tablet with FBCB2 Blue Force Tracking
// Battlefield tablet to access real time intel and blue force tracker.
// By - Riouken
// http://forums.bistudio.com/member.php?64032-Riouken
// You may re-use any of this work as long as you provide credit back to me.


#define PREFIX cTab
#define MAJOR 2
#define MINOR 2
#define PATCHLVL 2
#define BUILD 5
#define VERSION MAJOR.MINOR.PATCHLVL.BUILD
#define VERSION_AR MAJOR,MINOR,PATCHLVL,BUILD
#define REQUIRED_VERSION 1.32
#include "\x\cba\addons\main\script_macros_common.hpp"
#define AUTHOR "Gundy, Riouken, Raspu"


class CfgPatches
{
	class PREFIX  // cTab
		{
			units[] = {Box_cTab_items};
			weapons[] = {ACE_DK10_b,ACE_GD300_b,ItemMicroDAGR,ACE_HelmetCam};
			requiredVersion = REQUIRED_VERSION;
			requiredAddons[] = {"CBA_MAIN"};
			versionDesc = "cTab";
			VERSION_CONFIG;
			author[] = {"Gundy","Riouken","Raspu"};
			authorUrl = "https://github.com/Riouken/cTab";
		};
};

class CfgSettings 
{
	class CBA 
	{
		class Versioning 
		{
			class PREFIX 
			{
				main_addon = PREFIX;
				class Dependencies 
				{
					CBA[] = {"cba_main", { 1,0,0 },"true"};
				};
			};
		};
	};
};

class CfgMods {
	class PREFIX {
		dir = "@cTab";
		name = "cTab - Blue Force Tracking";
		picture = "\cTab\img\cTab_BFT_ico.paa";
		hidePicture = "True";
		hideName = "True";
		actionName = "Website";
		action = "https://github.com/Riouken/cTab";
		overview = "Commander's Tablet / FBCB2 - Blue Force Tracking\nBattlefield tablet to access real time intel and blue force tracker.";
		tooltip = "Commander's Tablet / FBCB2 - Blue Force Tracking";
		author = AUTHOR;
	};
};

#include "\cTab\CfgFunctions.h"
class cTab_settings {
	// define vehicle classes that are equipped with FBCB2 devices
	cTab_vehicleClass_has_FBCB2[] = {"MRAP_01_base_F","MRAP_02_base_F","MRAP_03_base_F","Wheeled_APC_F","Tank","Truck_01_base_F","Truck_03_base_F"};

	// define vehicle classes that are equipped with TAD devices
	cTab_vehicleClass_has_TAD[] = {"Helicopter","Plane"};

	// define helmet classes that are equipped with a helmet cam
	cTab_helmetClass_has_HCam[] = {"H_HelmetB_light","H_Helmet_Kerry","H_HelmetSpecB","H_HelmetO_ocamo","BWA3_OpsCore_Fleck_Camera","BWA3_OpsCore_Schwarz_Camera","BWA3_OpsCore_Tropen_Camera"};
};

// define the default key setup; can be altered in-game using CBA's keybinding system
class cTab_keys {

	class if_main {
		key = 35; // H
		ctrl = 1;
		shift = 0;
		alt = 0;
	};

	class if_secondary {
		key = 35; // H
		ctrl = 0;
		shift = 0;
		alt = 1;
	};

	class if_tertiary {
		key = 35; // H
		ctrl = 1;
		shift = 0;
		alt = 1;
	};

	class zoom_in {
		key = 201; // PAGE_UP
		ctrl = 1;
		shift = 1;
		alt = 0;
	};

	class zoom_out {
		key = 209; // PAGE_DOWN
		ctrl = 1;
		shift = 1;
		alt = 0;
	};

	class toggleIfPosition {
		key = 199; // HOME / POS1
		ctrl = 1;
		shift = 1;
		alt = 0;
	};

};

/* KEY LIST // US keyboard layout*/
/* ================================================================================================================= */
/*
shift
ctrl
alt

ESC = 1
F1 = 59
F2 = 60
F3 = 61
F4 = 62
F5 = 63
F6 = 64
F7 = 65
F8 = 66
F9 = 67
F10 = 68
F11 = 87
F12 = 88
PRINT = 183
SCROLL = 70
PAUSE = 197
^ = 41
1 = 2
2 = 3
3 = 4
4 = 5
5 = 6
6 = 7
7 = 8
8 = 9
9 = 10
0 = 11
? = 12
? = 13
? = 26
? = 39
? = 40
# = 43
< = 86
, = 51
. = 52
- = 53
+ = NOT DEFINED
POS1 = 199
TAB = 15
ENTER = 28
DELETE = 211
BACKSPACE = 14
INSERT = 210
END = 207
PAGEUP = 201
PAGEDOWN = 209
CAPS = 58
A = 30
B = 48
C = 46
D = 32
E = 18
F = 33
G = 34
H = 35
I = 23
J = 36
K = 37
L = 38
M = 50
N = 49
O = 24
P = 25
Q = 16
U = 22
R = 19
S = 31
T = 20
V = 47
W = 17
X = 45
Y = 44
Z = 21
SHIFTL = 42
SHIFTR = 54
UP = 200
DOWN = 208
LEFT = 203
RIGHT = 205
NUM_0 = 82
NUM_1 = 79
NUM_2 = 80
NUM_3 = 81
NUM_4 = 75
NUM_5 = 76
NUM_6 = 77
NUM_7 = 71
NUM_8 = 72
NUM_9 = 73
NUM_+ = 78
NUM = 69
NUM_/ = 181
NUM_* = 55
NUM_- = 74
NUM_, = 83
NUM_ENTER = 156
STRGL = 29
STRGR = 157
WINL = 220
WINR = 219
ALT = 56
SPACE = 57
ALTGR = 184
APP = 221
*/

/* KEY LIST // English (US) 104-key    provided by tcp */
/* ================================================================================================================= */
/*
ESC = 1
F1 = 59
F2 = 60
F3 = 61
F4 = 62
F5 = 63
F6 = 64
F7 = 65
F8 = 66
F9 = 67
F10 = 68
F11 = 87
F12 = 88
PRINT = 183
SCROLL = 70
PAUSE = 197
` = 41
1 = 2
2 = 3
3 = 4
4 = 5
5 = 6
6 = 7
7 = 8
8 = 9
9 = 10
0 = 11
- = 12
= = 13
, = 51
. = 52
/ = 53
; = 39
' = 40
[ = 26
] = NOT DEFINED
\ = 43
HOME = 199
TAB = 15
ENTER = 28
DELETE = 211
BACKSPACE = 14
INSERT = 210
END = 207
PAGEUP = 201
PAGEDOWN = 209
CAPS = 58
A = 30
B = 48
C = 46
D = 32
E = 18
F = 33
G = 34
H = 35
I = 23
J = 36
K = 37
L = 38
M = 50
N = 49
O = 24
P = 25
Q = 16
R = 19
S = 31
T = 20
U = 22
V = 47
W = 17
X = 45
Y = 21
Z = 44
SHIFTL = 42
SHIFTR = 54
UP = 200
DOWN = 208
LEFT = 203
RIGHT = 205
NUM_0 = 82
NUM_1 = 79
NUM_2 = 80
NUM_3 = 81
NUM_4 = 75
NUM_5 = 76
NUM_6 = 77
NUM_7 = 71
NUM_8 = 72
NUM_9 = 73
NUM_+ = 78
NUM = 69
NUM_/ = 181
NUM_* = 55
NUM_- = 74
NUM_. = 83
NUM_ENTER = 156
CTRLL = 29
CTRLR = 157
WINL = 219
WINR = 220
ALTL = 56
ALTR = 184
SPACE = 57
APP = 221
*/

class Extended_PostInit_EventHandlers
{
	class PREFIX
	{
		clientInit = QUOTE(call COMPILE_FILE2(\cTab\player_init.sqf));

		serverInit = QUOTE(call COMPILE_FILE2(\cTab\server_init.sqf));
	};
};

#include "\cTab\shared\cTab_gui_macros.hpp"
#include "\cTab\shared\cTab_base_gui_classes.hpp"

#include <\cTab\tablet\cTab_Tablet_dialog.hpp>
#include <\cTab\android\cTab_android_dialog.hpp>
#include <\cTab\FBCB2\cTab_FBCB2_dialog.hpp>
#include <\cTab\TAD\cTab_TAD_dialog.hpp>
#include <\cTab\microDAGR\cTab_microDAGR_dialog.hpp>

class CfgWeapons
{
	class ItemCore;
 	class InventoryItem_Base_F;
	class ACE_DK10_b: ItemCore {
		descriptionshort = "DK10 Rugged Tablet PC";
		descriptionuse = "<t color='#9cf953'>Use: </t>Show Commander's Tablet";
		displayname = "Rugged Tablet";
		picture = "\cTab\img\icon_dk10.paa";
		model = "\ctab\data\itemDK10.p3d";
		scope = 2;
		simulation = "ItemGPS";
		class ItemInfo {
			mass = 5;
		};
		author = AUTHOR;
	};
	
	class ACE_GD300_b: ACE_DK10_b {
		descriptionshort = "GD300 Rugged Wearable Computer";
		descriptionuse = "<t color='#9cf953'>Use: </t>Show Android Based BFT";
		displayname = "GD300 Android";
		picture = "\cTab\img\icon_Android.paa";
		model = "\ctab\data\itemAndroid.p3d";
		class ItemInfo {
			mass = 5;
		};
		author = AUTHOR;
	};

	class ItemMicroDAGR: ACE_DK10_b {
        scope = 1;
		descriptionshort = "HNV-2930 Micro Defense Advanced GPS Receiver";
		descriptionuse = "<t color='#9cf953'>Use: </t>Show Android Based BFT";
		displayname = "MicroDAGR";
		picture = "\cTab\img\icon_MicroDAGR.paa";
		model = "\ctab\data\itemMicroDAGR.p3d";
		class ItemInfo {
			mass = 6;
		};
		author = AUTHOR;
	};
	
	class ACE_HelmetCam: ItemCore {
		descriptionshort = "HD Helmet Mounted Camera";
		descriptionuse = "<t color='#9cf953'>Use: </t>Used to record and stream video";
		displayname = "Helmet Camera";
		picture = "\cTab\img\cTab_helmetCam_ico.paa";
		scope = 2;
		simulation = "ItemMineDetector";
		detectRange = -1;
		type = 0;
		class ItemInfo: InventoryItem_Base_F {
			mass = 4;
		};
		author = AUTHOR;
	};	
};

class CfgNotifications
{
	
	class cTabUavNotAval
	{
		title = "cTab";
		iconPicture = "\cTab\img\15th_rugged_tab_ico.paa";
		iconText = "";
		color[] = {1,1,1,1};
		description = "%1";
		duration = 5;
		priority = 7;
		difficulty[] = {};
	};
	
	class cTabNewMsg
	{
		title = "cTab";
		iconPicture = "\cTab\img\icoUnopenedmail.paa";
		iconText = "";
		color[] = {1,1,1,1};
		description = "%1";
		duration = 4;
		priority = 7;
		difficulty[] = {};
	};

	class cTabMsgSent
	{
		title = "cTab";
		iconPicture = "\cTab\img\icoUnopenedmail.paa";
		iconText = "";
		color[] = {1,1,1,1};
		description = "Your message has been sent.";
		duration = 4;
		priority = 7;
		difficulty[] = {};
	};	

};

class RscTitles
{
	titles[]={};
	#include "\cTab\shared\cTab_mapSize_title.hpp"
	#include "\cTab\shared\cTab_mail_title.hpp"
	#include <\cTab\TAD\cTab_TAD_display.hpp>
	#include <\cTab\microDAGR\cTab_microDAGR_display.hpp>
	#include <\cTab\android\cTab_android_display.hpp>
};


class CfgVehicles
{

	class Box_NATO_WpsSpecial_F;
	class Box_cTab_items : Box_NATO_WpsSpecial_F {
        scope = 1;
		displayname = "[cTab] Computer Gear";
		icon = "iconCrateLarge";
		model = "\A3\weapons_F\AmmoBoxes\WpnsBox_large_F";
		transportmaxmagazines = 64;
		transportmaxweapons = 12;

		class TransportItems {
			class _xx_ACE_DK10_b {
				count = 5;
				name = "ACE_DK10_b";
			};
			class _xx_ACE_GD300_b {
				count = 15;
				name = "ACE_GD300_b";
			};
			class _xx_ItemMicroDAGR {
				count = 25;
				name = "ItemMicroDAGR";
			};
			class _xx_ACE_HelmetCam {
				count = 25;
				name = "ACE_HelmetCam";
			};
		};
	
	
		class TransportMagazines {};
		class TransportWeapons {};
	
	};
	
};

class CfgSounds
{
	sounds[] = {};
	class cTab_phoneVibrate
	{
		// filename, volume, pitch
		sound[] = {"\cTab\sounds\phoneVibrate.wss",1,1};
		// subtitle delay in seconds, subtitle text 
		titles[] = {};
	};
	class cTab_mailSent
	{
		sound[] = {"\cTab\sounds\mailSent.wss",1,1};
		titles[] = {};
	};
};
