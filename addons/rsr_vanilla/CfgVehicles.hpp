class CfgVehicles
{
	class I_MRAP_03_F;
	class I_MRAP_03_hmg_F;
	class I_MRAP_03_gmg_F;

	class rsr_fennek_transport_flecktarn: I_MRAP_03_F {
		author="RsR";
		displayName="Fennek";
		typicalCargo[]=	{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		hiddenSelectionsTextures[]=	{
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
		};
		class TextureSources {
			class fennek_flecktarn	{
				displayName="Fennek (Flecktarn)";
				author="Redd";
				textures[]=	{
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class fennek_tropentarn
			{
				displayName="Fennek (Tropentarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons {
		};
		class TransportMagazines {
		};
	};

	class rsr_fennek_transport_tropentarn: rsr_fennek_transport_flecktarn {
		author="RsR";
		displayName="Fennek (Tropentarn)";
		_generalMacro="I_MRAP_03_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
		};
	};
	class rsr_fennek_hmg_flecktarn: I_MRAP_03_hmg_F
	{
		author="RsR";
		displayName="Fennek HMG (Flecktarn)";
		_generalMacro="I_MRAP_03_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
		};
		class TextureSources
		{
			class fennek_flecktarn
			{
				displayName="Fennek (Flecktarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class fennek_tropentarn
			{
				displayName="Fennek (Tropentarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_fennek_hmg_tropentarn: rsr_fennek_hmg_flecktarn
	{
		author="RsR";
		displayName="Fennek HMG (Tropentarn)";
		_generalMacro="I_MRAP_03_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
		};
	};
	class rsr_fennek_gmg_flecktarn: I_MRAP_03_gmg_F
	{
		author="RsR";
		displayName="Fennek GMW (Flecktarn)";
		_generalMacro="I_MRAP_03_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
		};
		class TextureSources
		{
			class fennek_flecktarn
			{
				displayName="Fennek (Flecktarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_ext_co",
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_flecktarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class fennek_tropentarn
			{
				displayName="Fennek (Tropentarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
					"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_fennek_gmg_tropentarn: rsr_fennek_gmg_flecktarn
	{
		author="RsR";
		displayName="Fennek GMW (Tropentarn)";
		_generalMacro="I_MRAP_03_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_ext_co",
			"z\ttt\addons\rsr_vanilla\data\fennek\fennek_tropentarn_turret_co"
		};
	};
	class B_APC_Tracked_01_CRV_F;
	class rsr_bergepanzer_flecktarn: B_APC_Tracked_01_CRV_F
	{
		author="RsR";
		displayName="Bergepanzer (Flecktarn)";
		_generalMacro="B_APC_Tracked_01_CRV_F";
		typicalCargo[]=
		{
			"B_Soldier_F"
		};
		side=1;
		crew="B_Soldier_F";
		transportRepair=200000000;
		transportFuel=3000;
		transportAmmo=3000;
		supplyRadius=7.5;
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrTank";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_body_crv_co",
			"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_body_mbt_co",
			"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_turret_co",
			"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_crv_co"
		};
		class TextureSources
		{
			class bergepanzer_flecktarn
			{
				displayName="Bergepanzer (Flecktarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_body_crv_co",
					"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_body_mbt_co",
					"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_turret_co",
					"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_flecktarn_crv_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class bergepanzer_tropentarn
			{
				displayName="Bergepanzer (Tropentarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_body_crv_co",
					"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_body_mbt_co",
					"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_turret_co",
					"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_crv_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		class UserActions
		{
			class Towing
			{
				displayName="Nehme Abschleppseil";
				onlyforplayer=1;
				position="mirrors_control";
				radius=2;
				showWindow=0;
				condition="";
				statement="_this call fn_advancedTowingInit;";
			};
		};
	};
	class rsr_bergepanzer_tropentarn: rsr_bergepanzer_flecktarn
	{
		author="RsR";
		displayName="Bergepanzer (Tropentarn)";
		_generalMacro="B_APC_Tracked_01_CRV_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_body_crv_co",
			"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_body_mbt_co",
			"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_turret_co",
			"z\ttt\addons\rsr_vanilla\data\bergepanzer\bergepanzer_tropentarn_crv_co"
		};
	};
	class O_Truck_03_transport_F;
	class O_Truck_03_covered_F;
	class O_Truck_03_repair_F;
	class O_Truck_03_ammo_F;
	class O_Truck_03_fuel_F;
	class O_Truck_03_medical_F;
	class rsr_wisent_transport_flecktarn: O_Truck_03_transport_F
	{
		author="RsR";
		displayName="Wisent offen (Flecktarn)";
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		scope=2;
		scopeCurator=2;
		scopeArsenal=2;
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent (Flecktarn)";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent (Tropentarn)";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co"
				};
			};
		};
	};
	class rsr_wisent_transport_tropentarn: rsr_wisent_transport_flecktarn
	{
		author="RsR";
		displayName="Wisent offen (Tropentarn)";
		_generalMacro="O_Truck_03_transport_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co"
		};
	};
	class rsr_wisent_covered_flecktarn: O_Truck_03_covered_F
	{
		author="RsR";
		displayName="Wisent Plane (Flecktarn)";
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cover_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent (Flecktarn)";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cover_co"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent (Tropentarn)";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cover_co"
				};
			};
		};
	};
	class rsr_wisent_covered_tropentarn: rsr_wisent_covered_flecktarn
	{
		author="RsR";
		displayName="Wisent Plane (Tropentarn)";
		_generalMacro="O_Truck_03_transport_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cover_co"
		};
	};
	class rsr_wisent_repair_flecktarn: O_Truck_03_repair_F
	{
		author="RsR";
		displayName="Wisent Reparatur (Flecktarn)";
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		transportRepair=200000000;
		supplyRadius=10;
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ammo_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent (Flecktarn)";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ammo_co"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent (Tropentarn)";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ammo_co"
				};
			};
		};
		class UserActions
		{
			class Towing
			{
				displayName="Nehme Abschleppseil";
				onlyforplayer=1;
				position="mirrors_control";
				radius=2;
				showWindow=0;
				condition="";
				statement="[(_this select 1)] call fn_advancedTowingInit;";
			};
		};
	};
	class rsr_wisent_repair_tropentarn: rsr_wisent_repair_flecktarn
	{
		author="RsR";
		displayName="Wisent Reparatur (Tropentarn)";
		_generalMacro="O_Truck_03_transport_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ammo_co"
		};
	};
	class rsr_wisent_ammo_flecktarn: O_Truck_03_ammo_F
	{
		author="RsR";
		displayName="Wisent Munition (Flecktarn)";
		side=1;
		crew="B_Soldier_F";
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		transportAmmo=30000;
		supplyRadius=10;
		fuelExplosionPower=10;
		class TransportItems
		{
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_containers_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent (Flecktarn)";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_containers_co"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent (Tropentarn)";
				author="Redd";
				factions[]=
				{
					"BLU_F"
				};
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_containers_co"
				};
			};
		};
	};
	class rsr_wisent_ammo_tropentarn: rsr_wisent_ammo_flecktarn
	{
		author="RsR";
		displayName="Wisent Munition (Tropentarn)";
		_generalMacro="O_Truck_03_transport_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_containers_co"
		};
	};
	class rsr_wisent_fuel_flecktarn: O_Truck_03_fuel_F
	{
		author="RsR";
		displayName="Wisent Treibstoff (Flecktarn)";
		_generalMacro="O_Truck_03_fuel_F";
		side=1;
		crew="B_Soldier_F";
		transportFuel=8000;
		supplyRadius=10;
		fuelExplosionPower=15;
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_fuel_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent (Flecktarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_fuel_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent (Tropentarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_fuel_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_wisent_fuel_tropentarn: rsr_wisent_fuel_flecktarn
	{
		author="RsR";
		displayName="Wisent Treibstoff (Tropentarn)";
		_generalMacro="O_Truck_03_transport_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_fuel_co"
		};
	};
	class rsr_wisent_medical_flecktarn: O_Truck_03_medical_F
	{
		author="RsR";
		displayName="Wisent Sanität (Flecktarn)";
		_generalMacro="O_Truck_03_medical_F";
		side=1;
		crew="B_Soldier_F";
		supplyRadius=10;
		editorPreview="";
		editorCategory="rsrVehicles";
		editorSubcategory="rsrCar";
		attendant = 1; //is ACE Medical Vehicle
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cover_co"
		};
		class TextureSources
		{
			class wisent_flecktarn
			{
				displayName="Wisent (Flecktarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cargo_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_flecktarn_cover_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
			class wisent_tropentarn
			{
				displayName="Wisent (Tropentarn)";
				author="Redd";
				textures[]=
				{
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
					"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cover_co"
				};
				factions[]=
				{
					"BLU_F"
				};
			};
		};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name="FirstAidKit";
				count=1;
			};
		};
		class TransportWeapons
		{
		};
		class TransportMagazines
		{
		};
	};
	class rsr_wisent_medical_tropentarn: rsr_wisent_medical_flecktarn
	{
		author="RsR";
		displayName="Wisent Sanität (Tropentarn)";
		_generalMacro="O_Truck_03_medical_F";
		editorPreview="";
		hiddenSelectionsTextures[]=
		{
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext01_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_ext02_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cargo_co",
			"z\ttt\addons\rsr_vanilla\data\wisent\wisent_tropentarn_cover_co"
		};
	};
};