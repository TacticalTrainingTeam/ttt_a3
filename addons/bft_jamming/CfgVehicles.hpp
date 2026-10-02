class CfgVehicles {

    class Logic;
    class Module_F: Logic {
        class AttributesBase {
            class Edit;
            class Combo;
            class Checkbox;
            class ModuleDescription;
        };

        class ModuleDescription {
        };
    };

    class GVAR(moduleAddBftJammer): Module_F {
        scope = 2;
        displayName = CSTRING(moduleAddBftJammer_displayName);
        icon = "\A3\ui_f\data\map\markers\nato\b_sensor.paa";
        vehicleClass = "Modules";
        category = "Sensors";
        function = QFUNC(addBftJammer);
        functionPriority = 1;
        isGlobal = 0;
        isTriggerActivated = 1;
        isDisposable = 1;
        is3DEN = 0;

        class Attributes: AttributesBase {
            // class Units: Units{}; // deliberately omitted, same as CrowsEW's own jammer module -
            // if nothing is synced, the handler spawns a Crows_dataterminal prop for us.

            class JamType: Combo {
                control = "combo";
                property = QGVAR(addBftJammer_jamType);
                displayName = CSTRING(moduleAddBftJammer_jamType_displayName);
                tooltip = CSTRING(moduleAddBftJammer_jamType_tooltip);
                expression = "_this setVariable ['%s', _value];";
                defaultValue = BFT_JAM_TYPE_BLACKOUT;
                typeName = "NUMBER";
                class Values {
                    class Blackout {
                        name = CSTRING(moduleAddBftJammer_jamType_blackout);
                        value = BFT_JAM_TYPE_BLACKOUT;
                    };
                    class Drift {
                        name = CSTRING(moduleAddBftJammer_jamType_drift);
                        value = BFT_JAM_TYPE_DRIFT;
                    };
                    class Mixed {
                        name = CSTRING(moduleAddBftJammer_jamType_mixed);
                        value = BFT_JAM_TYPE_MIXED;
                    };
                };
            };

            class IsActiveAtMissionStart: Checkbox {
                property = QGVAR(addBftJammer_isActiveAtMissionStart);
                displayName = CSTRING(moduleAddBftJammer_missionStart_displayName);
                tooltip = CSTRING(moduleAddBftJammer_missionStart_tooltip);
                typeName = "BOOL";
                defaultValue = "true";
            };

            class EffectiveRadius: Edit {
                property = QGVAR(addBftJammer_effectiveRadius);
                displayName = CSTRING(moduleAddBftJammer_effectiveRadius_displayName);
                tooltip = CSTRING(moduleAddBftJammer_effectiveRadius_tooltip);
                typeName = "NUMBER";
                defaultValue = "200";
            };

            class FalloffRadius: Edit {
                property = QGVAR(addBftJammer_falloffRadius);
                displayName = CSTRING(moduleAddBftJammer_falloffRadius_displayName);
                tooltip = CSTRING(moduleAddBftJammer_falloffRadius_tooltip);
                typeName = "NUMBER";
                defaultValue = "400";
            };

            class Frequency: Edit {
                property = QGVAR(addBftJammer_frequency);
                displayName = CSTRING(moduleAddBftJammer_frequency_displayName);
                tooltip = CSTRING(moduleAddBftJammer_frequency_tooltip);
                typeName = "NUMBER";
                defaultValue = "805";
            };

            class ModuleDescription: ModuleDescription {};
        };

        class ModuleDescription: ModuleDescription {
            description = CSTRING(moduleAddBftJammer_description);
        };
    };
};
