
comment "Exported from Arsenal by [TTT] Andx";

comment "[!] UNIT MUST BE LOCAL [!]";
if (!local player) exitWith {};

comment "Remove existing items";
removeAllWeapons player;
removeAllItems player;
removeAllAssignedItems player;
removeUniform player;
removeVest player;
removeBackpack player;
removeHeadgear player;
removeGoggles player;

comment "Add weapons";
player addWeapon "arifle_MX_F";
player addPrimaryWeaponItem "acc_pointer_IR";
player addPrimaryWeaponItem "30Rnd_65x39_caseless_mag";
player addWeapon "hgun_P07_F";
player addHandgunItem "16Rnd_9x21_Mag";

comment "Add containers";
player forceAddUniform "U_B_CombatUniform_mcam_tshirt";
player addVest "V_PlateCarrierSpec_rgr";
player addBackpack "B_AssaultPack_rgr_Medic";

comment "Add items to containers";
player addItemToUniform "FirstAidKit";
for "_i" from 1 to 2 do {player addItemToUniform "30Rnd_65x39_caseless_mag";};
for "_i" from 1 to 3 do {player addItemToVest "30Rnd_65x39_caseless_mag";};
for "_i" from 1 to 2 do {player addItemToVest "16Rnd_9x21_Mag";};
player addItemToVest "SmokeShell";
player addItemToVest "SmokeShellGreen";
player addItemToVest "SmokeShellBlue";
player addItemToVest "SmokeShellOrange";
for "_i" from 1 to 2 do {player addItemToVest "Chemlight_green";};
player addItemToBackpack "Medikit";
for "_i" from 1 to 10 do {player addItemToBackpack "FirstAidKit";};
player addHeadgear "H_HelmetB_light_desert";
player addGoggles "G_Combat";

comment "Add items";
player linkItem "ItemMap";
player linkItem "ItemCompass";
player linkItem "ItemWatch";
player linkItem "NVGoggles";
