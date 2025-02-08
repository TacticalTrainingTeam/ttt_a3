#define DISABLE_FEATURE h = 0; w = 0

class RscControlsGroup;
class RscControlsGroupNoScrollbars: RscControlsGroup {};

class RscInGameUI {
    class RscUnitInfo;
    class Redd_RCS_Turret: RscUnitInfo {
        class CA_IGUI_elements_group: RscControlsGroup {
            class controls {
                class CA_TurretIndicator;
                class CA_HorizontalCompass;
                class AzimuthMark;
                class CA_Heading;
                class CA_LasedRange;
            };
        };
    };
    
    class Redd_RSC_Milan: RscUnitInfo {
        class CA_IGUI_elements_group: RscControlsGroup {
            class controls {
                class CA_Heading;
                class CA_Distance;
            };
        };
    };

    class GVAR(RSC_Milan): Redd_RSC_Milan {
        class CA_IGUI_elements_group: CA_IGUI_elements_group {
            class controls: controls {
                class CA_Heading: CA_Heading {
                    DISABLE_FEATURE;
                };
                class CA_Distance: CA_Distance {
                    // Remove range finder in MILAN optics
                    DISABLE_FEATURE;
                };
            };
        };
    };


    class Redd_RSC_MG3: RscUnitInfo {
        class CA_IGUI_elements_group: RscControlsGroupNoScrollbars {
            class controls {
                class CA_Heading;
            };
        };
    };

    class GVAR(RSC_MG3): Redd_RSC_MG3 {
        class CA_IGUI_elements_group: CA_IGUI_elements_group {
            class controls: controls {
                class CA_Heading: CA_Heading {
                    DISABLE_FEATURE;
                };
            };
        };
    };
};