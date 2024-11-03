class CfgVehicles {
    
    class B_APC_Tracked_01_CRV_F;
    class rsr_bergepanzer_flecktarn: B_APC_Tracked_01_CRV_F    {
        transportRepair = 0;
        transportAmmo = 0;
        transportFuel = 0;
        ace_rearm_defaultSupply = 1200;
        ace_repair_canRepair = 1; // Make repair vehicle
        ace_refuel_fuelCargo = 3000; // Maximum fuel cargo amount (in liters)
        ace_repair_spareTracks = 4;
        ace_cargo_space = 6; // To accomodate the tracks
    };

    class O_Truck_03_repair_F;
    class rsr_wisent_repair_flecktarn: O_Truck_03_repair_F {
        transportRepair = 0;
        ace_repair_canRepair = 1; // Make repair vehicle
        ace_repair_spareWheels = 4;
        ace_repair_spareTracks = 4;
        ace_cargo_space = 10; // To accomodate the wheels and tracks
    };

    class O_Truck_03_ammo_F;
    class rsr_wisent_ammo_flecktarn: O_Truck_03_ammo_F {
        transportAmmo = 0;
        ace_rearm_defaultSupply = 1200;
    };

    class O_Truck_03_fuel_F;
    class rsr_wisent_fuel_flecktarn: O_Truck_03_fuel_F {
        transportFuel = 0;
        ace_refuel_fuelCargo = 10000; // Maximum fuel cargo amount (in liters)
    };

    class O_Truck_03_medical_F;
    class rsr_wisent_medical_flecktarn: O_Truck_03_medical_F {
        attendant = 1; //is ACE Medical Vehicle
    };       
};