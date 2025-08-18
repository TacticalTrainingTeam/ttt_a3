class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            class ACE_Equipment    {
                class tsp_ace_earplug_insert {
                    condition = "false";
                };
                class tsp_ace_earplug_remove: tsp_ace_earplug_insert {
                    condition = "false";
                };
            };
        };
    };
};
