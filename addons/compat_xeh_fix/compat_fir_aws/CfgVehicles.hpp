class CfgVehicles {
    class C_man_pilot_F;
    class FIR_Civ_Pilot: C_man_pilot_F { XEH_ENABLED; }; // "Civilian Jet Pilot" @FIR_AWS_AirWeaponSystem

    class B_Pilot_F;
    class FIR_USAF_Pilot: B_Pilot_F { XEH_ENABLED; }; // "USAF Fighter Pilot" @FIR_AWS_AirWeaponSystem

    class Plane_Fighter_03_base_F;
    class FIR_ECM_Dummy_Base: Plane_Fighter_03_base_F { XEH_ENABLED; }; // "ECM Dummy" @FIR_AWS_AirWeaponSystem
    class FIR_ASM_Base: Plane_Fighter_03_base_F { XEH_ENABLED; }; // "ASM" @FIR_AWS_AirWeaponSystem

    class Motorcycle;
    class aces_ejection_seat: Motorcycle { XEH_ENABLED; }; // "ACES Ejection Seat" @FIR_AWS_AirWeaponSystem
    class SJU7_Ejection_Seat: Motorcycle { XEH_ENABLED; }; // "ACES Ejection Seat" @FIR_AWS_AirWeaponSystem
    class Radar_System_01_base_F;
    class FIR_Aegis_Radar_Base: Radar_System_01_base_F { XEH_ENABLED; }; // "Aegis Radar" @FIR_AWS_AirWeaponSystem
};

