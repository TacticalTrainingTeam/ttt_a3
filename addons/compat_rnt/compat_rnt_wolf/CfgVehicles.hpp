class CfgVehicles {
    class Car_F;
    class Redd_Tank_LKW_leicht_gl_Wolf_Base: Car_F {
        // Map on the hood (requires Metis Enhanced)
        EGVAR(compat_rnt,mapActionPosition)[] = {-0.2051, 1.4929, -0.3325};
        EGVAR(compat_rnt,mapActionOrientation)[] = {{-1, 0, 0}, {0, 0.1, 1}};

        //maximumLoad = 10000;

        delete AcreIntercoms;
        delete acre_hasInfantryPhone;

        class AcreRacks {
            class Rack_1 {
                displayName = ECSTRING(common,RackA);
                shortName = ECSTRING(common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };

            class Rack_2 {
                displayName = ECSTRING(common,RackB);
                shortName = ECSTRING(common,RackBShort);
                componentName = "ACRE_VRC103";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_PRC117F";
                isRadioRemovable = 0;
                intercom[] = {"none"};
            };

            class Rack_3 {
                displayName = ECSTRING(common,RackC);
                shortName = ECSTRING(common,RackCShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"inside"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "";
                isRadioRemovable = 1;
                intercom[] = {"none"};
            };
        };
    };
};
