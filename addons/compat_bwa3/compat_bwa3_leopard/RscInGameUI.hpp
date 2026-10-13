// Source: PzGrenBtl402 addons/BwMod_Leopard/RscInGameUI.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
#define DISABLE_FEATURE h = 0; w = 0

class RscControlsGroup;

class RscInGameUI {
    class RscUnitInfo;
    class BWA3_RscOptics_Leopard_commander: RscUnitInfo {
        class BWA3_ScriptedDisplayControlsGroup: RscControlsGroup {
            class controls {
                class VisionModeTIM;
                class VisionModeIR;
                class VisionMode;
                class VisionModeEMES;
                class VisionModeTIM_2;
                class Digit1;
                class Digit2;
                class Digit3;
                class Digit4;
                class ObserverTurret_Direction;
                class ReadyToFire;
            };
        };
    };

    // Remove switches and lights from optics
    class GVAR(RscOpticsCommander): BWA3_RscOptics_Leopard_commander {
        class BWA3_ScriptedDisplayControlsGroup: BWA3_ScriptedDisplayControlsGroup {
            class controls: controls {
                class VisionModeTIM: VisionModeTIM { DISABLE_FEATURE; };
                class VisionModeIR: VisionModeIR { DISABLE_FEATURE; };
                class VisionMode: VisionMode { DISABLE_FEATURE; };
                class VisionModeEMES: VisionModeEMES { DISABLE_FEATURE; };
                class VisionModeTIM_2: VisionModeTIM_2 { DISABLE_FEATURE; };
                class Digit1: Digit1 {};
                class Digit2: Digit2 {};
                class Digit3: Digit3 {};
                class Digit4: Digit4 {};
                class ObserverTurret_Direction: ObserverTurret_Direction { DISABLE_FEATURE; };
                class ReadyToFire: ReadyToFire { DISABLE_FEATURE; };
            };
        };
    };
};
