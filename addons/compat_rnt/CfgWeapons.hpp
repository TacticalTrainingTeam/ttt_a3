class CfgWeapons {
    class missiles_titan;
    class Redd_Milan: missiles_titan {
        magazineReloadTime = 0.1; //Armanachladezeit möglichst gering, um Ein-, Aussteigebug zu umgehen
    };

    class Redd_MG3;
    class GVAR(mg3): Redd_MG3 {
        magazineReloadTime = 0.1;
    };

    class Redd_SmokeLauncher;
    class GVAR(SmokeLauncher): Redd_SmokeLauncher {
        magazines[] = {"Redd_SmokeLauncherMag"};
        showToPlayer = 0;
        magazineReloadTime = 0.1;
    };
};
