NSS_AC_Group = createCenter sideLogic;
NSS_AC_Group = createGroup sideLogic;

NSS_AC_Curator = NSS_AC_Group createUnit ["ModuleCurator_F",[0,0,0],[],0,"NONE"];

NSS_AC_Curator setVariable ["Owner", ""];
NSS_AC_Curator setVariable ["Name", ""];
NSS_AC_Curator setVariable ["Addons", 2];
NSS_AC_Curator setVariable ["Forced", 0];

NSS_AC_Curator synchronizeObjectsAdd [player];
player assignCurator NSS_AC_Curator;

call NSS_AC_fnc_curatorInitDone;