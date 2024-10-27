class CfgWeapons
{
	class ItemCore;
	class InventoryItem_Base_F;
	class InventoryOpticsItem_Base_F;
	class optic_SOS: ItemCore
	{
		descriptionShort="Marksman Optical Sights<br />Magnification: 2,5x-5x<br/>NightVision";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class optic_DMS: ItemCore
	{
		descriptionShort="DMS<br />magnification: 2x-4x<br/>NightVision";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class optic_LRPS: ItemCore
	{
		descriptionShort="Long-Range Precision Scope<br />Magnification: 6x-25x";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class Snip
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class optic_AMS_base: ItemCore
	{
		descriptionShort="Advanced Marksman Scope<br />Magnification:3x-10x<br />NightVision";
		DLC="Mark";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class AMS
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
	class optic_KHS_base: ItemCore
	{
		descriptionShort="Kahlia<br />Magnification: 5x-11x<br/>NightVision";
		DLC="Mark";
		class ItemInfo: InventoryOpticsItem_Base_F
		{
			class OpticsModes
			{
				class KHS
				{
					visionMode[]=
					{
						"Normal",
						"NVG"
					};
				};
			};
		};
	};
};