#define true 1
#define false 0

// -- version 0.14.0715

class CfgPatches 
{
	class TTT_Snipernvg 
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"ttt_main", "A3_Weapons_F_Acc"};
	};
};

class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;

class CfgWeapons
{

	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;

	class optic_SOS : ItemCore {	
		descriptionShort = "SOS <br/>NightVision";	
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{					
					visionMode[] = {"Normal","NVG"};
				};
			};
		};
	};
	class optic_DMS : ItemCore {
		descriptionShort = "DMS <br/>NightVision";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[] = {"Normal","NVG"};
				};
			};
		};
	};
	class optic_LRPS : ItemCore {
		descriptionShort = "LRPS <br/>NightVision";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[] = {"Normal","NVG"};
				};
			};
		};
	};
};
