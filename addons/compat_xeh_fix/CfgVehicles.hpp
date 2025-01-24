class CfgVehicles {
    class ReammoBox_F;
    class PBW_Uniform1_Chest: ReammoBox_F { XEH_ENABLED; }; // "[PBW] Uniform Chest" @Bundeswehr_Kleiderkammer_PBW
    class PBW_Headgear_Chest: PBW_Uniform1_Chest { XEH_ENABLED; }; // "[PBW] Headgear Chest" @Bundeswehr_Kleiderkammer_PBW

    class C_man_pilot_F;
    class FIR_Civ_Pilot: C_man_pilot_F { XEH_ENABLED; }; // "Civilian Jet Pilot" @FIR_AWS_AirWeaponSystem

    class B_Pilot_F;
    class FIR_USAF_Pilot: B_Pilot_F { XEH_ENABLED; }; // "USAF Fighter Pilot" @FIR_AWS_AirWeaponSystem

    class StaticMortar;
    class Redd_Tank_M120_Tampella_Base: StaticMortar { XEH_ENABLED; }; // "Mortar" @M120_Tampella_ACE_CSW

    class GMG_01_base_F;
    class rnt_gmw_static: GMG_01_base_F { XEH_ENABLED; }; // "GMW (Tripod)" @Redd_n_Tank_Vehicles

    class HMG_01_high_base_F;
    class rnt_mg3_static: HMG_01_high_base_F { XEH_ENABLED; }; // "MG3 (Tripod)" @Redd_n_Tank_Vehicles

    class Plane_Fighter_03_base_F;
    class FIR_ECM_Dummy_Base: Plane_Fighter_03_base_F { XEH_ENABLED; }; // "ECM Dummy" @FIR_AWS_AirWeaponSystem
    class FIR_ASM_Base: Plane_Fighter_03_base_F { XEH_ENABLED; }; // "ASM" @FIR_AWS_AirWeaponSystem

    class Motorcycle;
    class aces_ejection_seat: Motorcycle { XEH_ENABLED; }; // "ACES Ejection Seat" @FIR_AWS_AirWeaponSystem
    class SJU7_Ejection_Seat: Motorcycle { XEH_ENABLED; }; // "ACES Ejection Seat" @FIR_AWS_AirWeaponSystem

    class Radar_System_01_base_F;
    class B_Radar_System_01_F: Radar_System_01_base_F { XEH_ENABLED; }; // "AN/MPQ-105 Radar" jets

    class Radar_System_02_base_F;
    class O_Radar_System_02_F: Radar_System_02_base_F { XEH_ENABLED; }; // "R-750 Cronus Radar" jets
    class FIR_Aegis_Radar_Base: Radar_System_01_base_F { XEH_ENABLED; }; // "Aegis Radar" @FIR_AWS_AirWeaponSystem

    class Mortar_01_base_F;
    class BWA3_MRS120_base: Mortar_01_base_F { XEH_ENABLED; }; // "Mk6 Mortar" @BWMod

    class ACE_Explosives_Place_SLAM;
    class tsp_frameCharge_place: ACE_Explosives_Place_SLAM { XEH_ENABLED; }; // "Frame Charge" @Breach
    class tsp_popperCharge_place: ACE_Explosives_Place_SLAM { XEH_ENABLED; }; // "Lock Popper" @Breach
    class tsp_popperCharge_auto_place: tsp_popperCharge_place { XEH_ENABLED; }; // "Lock Popper (Auto-Fuse)" @Breach
    class tsp_stickCharge_place: ACE_Explosives_Place_SLAM { XEH_ENABLED; }; // "Stick Charge" @Breach
    class tsp_stickCharge_auto_place: tsp_stickCharge_place { XEH_ENABLED; }; // "Stick Charge (Auto-Fuse)" @Breach
};

