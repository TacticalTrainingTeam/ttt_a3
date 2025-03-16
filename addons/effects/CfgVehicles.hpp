class CfgVehicles {
    class ACE_Module;
    class GVAR(initStormModule): ACE_Module {
        scope = 2;
        displayName = "Init Storm Module";
        category = "TTT";
        function = QFUNC(stormInit);
        functionPriority = 10;
        isGlobal = 0;
        isTriggerActivated = 1;
        isDisposable = 1;
        author = "Andx";
    };
};