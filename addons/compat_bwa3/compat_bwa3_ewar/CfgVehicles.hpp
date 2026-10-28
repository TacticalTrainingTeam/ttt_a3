class CfgVehicles {
    class Car_F;
    class BWA3_Dingo2_base: Car_F {
        // Keep the original CG13 switch (variable used by the mine jammer) and additionally tell the server
        class UserActions {
            class TurnOnCG13 {
                statement = QUOTE(this setVariable [ARR_3('BWA3_Dingo2_ECM_on',true,true)]; [ARR_2(QQGVAR(ecmToggled),[ARR_2(this,true)])] call CBA_fnc_serverEvent);
            };
            class TurnOffCG13: TurnOnCG13 {
                statement = QUOTE(this setVariable [ARR_3('BWA3_Dingo2_ECM_on',false,true)]; [ARR_2(QQGVAR(ecmToggled),[ARR_2(this,false)])] call CBA_fnc_serverEvent);
            };
        };
    };
};
