// Source: PzGrenBtl402 addons/BwMod_Puma/RscTitles.hpp (https://github.com/PzGrenBtl-402/PzGrenBtl402), adapted
class RscTitles {
    class BWA3_Puma_RearViewCam {
        controls[] = {
            "BWA3_RearViewCameraProxy",
            "BWA3_RearViewCameraProxyNVG",
            "BWA3_RearViewCam",
            "BWA3_RearViewCam_Cargo",
            QGVAR(RearViewCam_Cargo_Indicator)
        };

        class BWA3_RearViewCam_Cargo;
        class GVAR(RearViewCam_Cargo_Indicator): BWA3_RearViewCam_Cargo {
            idc = 5;
            text = "";
        };
    };
};
