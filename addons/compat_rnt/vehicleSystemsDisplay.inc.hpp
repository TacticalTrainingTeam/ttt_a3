// Source: PzGrenBtl402 addons/Redd_Wiesel_MK20/CfgVehicles.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), Components section, shared by all supported vehicles
// Replaces the vehicle systems displays with empty ones to declutter the HUD
class VehicleSystemsDisplayManagerComponentLeft {
    componentType = "VehicleSystemsDisplayManager";
    defaultDisplay = "EmptyDisplay";
    left = 1;
    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_X"", (safezoneX + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40))])";
    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFOLEFT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

    class Components {
        class EmptyDisplay {
            componentType = "EmptyDisplayComponent";
        };
    };
};

class VehicleSystemsDisplayManagerComponentRight {
    componentType = "VehicleSystemsDisplayManager";
    defaultDisplay = "EmptyDisplay";
    right = 1;
    x = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_X"", ((safezoneX + safezoneW) - ((10 * (((safezoneW / safezoneH) min 1.2) / 40)) + 0.5 * (((safezoneW / safezoneH) min 1.2) / 40)))])";
    y = "(profilenamespace getvariable [""IGUI_GRID_CUSTOMINFORIGHT_Y"", (safezoneY + safezoneH - 21 * ((((safezoneW / safezoneH) min 1.2) / 1.2) / 25))])";

    class Components {
        class EmptyDisplay {
            componentType = "EmptyDisplayComponent";
        };
    };
};
