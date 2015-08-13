#define true 1
#define false 0

// -- version 0.14.0715

class CfgPatches 
{
	class ttt_snipernvg 
	{
		units[] = {};
		weapons[] = {};
		requiredAddons[] = {"A3_Weapons_F_Acc"};
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
		descriptionShort = "x2.5 - x5<br/>NightVision";	
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
		descriptionShort = "x2-x4<br/>NightVision";
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
		descriptionShort = "x6-x25<br/>NightVision";
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
