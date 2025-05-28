class CfgVehicles {

    #include "configs\extra_units.hpp"
    #include "configs\crates_medic.hpp"
    #include "configs\crates_engineer.hpp"
    #include "configs\crates_other.hpp"

   // Tragbare Flaggen
    class ace_flags_carrier_white;
    class GVAR(flag_logo_carrier): ace_flags_carrier_white {
        author = "Andx";
        displayName = "Flag (TTT-Logo)"; // Item/Flag name
        //editorPreview = "\addon_prefix\data\editorpreviews\my_flag_carrier.jpg"; // Preview picture shown in editor
    };
};

