/*
#############################################################
### Trupp Gelb
#############################################################
*/
#define GROUP_COLOR Yellow

//Gelb 1 (OPL)
class TTT_Gelb1_Bw_Flecktarn : TTT_Gelb1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gelb_Bw_Flecktarn";
    backpack = "TTT_Backpack_Opl_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gelb_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_yellow_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Gelb 2 (Funker)
class TTT_Gelb2_Bw_Flecktarn : TTT_Gelb2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gelb_Bw_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gelb_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_yellow_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

//Gelb 3 (UAV)
class TTT_Gelb3_Bw_Flecktarn : TTT_Gelb3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gelb_Bw_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gelb_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_yellow_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), "B_UavTerminal", default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), "B_UavTerminal", default_linkedItems };
};

//Gelb 4 (Moerser)
class TTT_Gelb4_Bw_Flecktarn : TTT_Gelb4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gelb_Bw_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gelb_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_yellow_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Grau
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Grey

//Grau 1 (Truppfuehrer)
class TTT_Grau1_Bw_Flecktarn : TTT_Grau1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};	
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Grau 2 (Funker/FAC)
class TTT_Grau2_Bw_Flecktarn : TTT_Grau2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

//Grau 3 (Gefechtssanitaeter)
class TTT_Grau3_Bw_Flecktarn : TTT_Grau3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Gefechtssanitaeter_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
};

//Grau 4 (Pionier)
class TTT_Grau4_Bw_Flecktarn : TTT_Grau4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pionier_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
};

//Grau 5 (Schuetze)
class TTT_Grau5_Bw_Flecktarn : TTT_Grau5_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
};

//Grau 6 (Schuetze)
class TTT_Grau6_Bw_Flecktarn : TTT_Grau6_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Grau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Gold (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Gold

//Gold 1 (Truppfuehrer)
class TTT_Gold1_Bw_Flecktarn : TTT_Gold1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gold_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_Bw_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_gold_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
};


//Gold 2 (Funker)
class TTT_Gold2_Bw_Flecktarn : TTT_Gold2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gold_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_Bw_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_gold_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

//Gold 3 (Spotter)
class TTT_Gold3_Bw_Flecktarn : TTT_Gold3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gold_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_gold_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
};

//Gold 4 (Sniper)
class TTT_Gold4_Bw_Flecktarn : TTT_Gold4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gold_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_gold_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
};

//Gold 5 (Schuetze)
class TTT_Gold5_Bw_Flecktarn : TTT_Gold5_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gold_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };	
};

//Gold 6 (Schuetze)
class TTT_Gold6_Bw_Flecktarn : TTT_Gold6_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gold_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gold_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_grey_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Gruen (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Green

//Gruen 1 (Zugfuehrer)
class TTT_Gruen1_Bw_Flecktarn : TTT_Gruen1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gruen_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gruen_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_Bw_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_green_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Gruen 2 (Funker/FAC)
class TTT_Gruen2_Bw_Flecktarn : TTT_Gruen2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gruen_Bw_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gruen_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_green_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

//Gruen 3 (Gefechtssanitaeter)
class TTT_Gruen3_Bw_Flecktarn : TTT_Gruen3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gruen_Bw_Flecktarn";
    backpack = "TTT_Backpack_Gefechtssanitaeter_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gruen_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_green_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
};

//Gruen 4 (Gefechtssanitaeter)
class TTT_Gruen4_Bw_Flecktarn : TTT_Gruen4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gruen_Bw_Flecktarn";
    backpack = "TTT_Backpack_Gefechtssanitaeter_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Gruen_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_green_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Braun (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Brown

//Braun 1 (Zugfuehrer)
class TTT_Braun1_Bw_Flecktarn : TTT_Braun1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Braun_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Braun_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_Bw_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_brown_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Braun 2 (Funker/FAC)
class TTT_Braun2_Bw_Flecktarn : TTT_Braun2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Braun_Bw_Flecktarn";
    backpack = "TTT_Backpack_Funkerfac_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Braun_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_brown_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

//Braun 3 (Gefechtssanitaeter)
class TTT_Braun3_Bw_Flecktarn : TTT_Braun3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Braun_Bw_Flecktarn";
    backpack = "TTT_Backpack_Gefechtssanitaeter_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Braun_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_brown_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Schwarz (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Black


//Schwarz 1 (Truppfuehrer)
class TTT_Schwarz1_Bw_Flecktarn : TTT_Schwarz1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Bw_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Schwarz 2 (Grenadier)
class TTT_Schwarz2_Bw_Flecktarn : TTT_Schwarz2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Bw_Flecktarn";
    backpack = "TTT_Backpack_Grenadier_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

//Schwarz 3 (LMG-Schuetze)
class TTT_Schwarz3_Bw_Flecktarn : TTT_Schwarz3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
};

//Schwarz 4 (AT-Schuetze)
class TTT_Schwarz4_Bw_Flecktarn : TTT_Schwarz4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
};

//Schwarz 5 (LMG-Schuetze)
class TTT_Schwarz5_Bw_Flecktarn : TTT_Schwarz5_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
};

//Schwarz 6 (AT-Schuetze)
class TTT_Schwarz6_Bw_Flecktarn : TTT_Schwarz6_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Bw_Flecktarn";
    backpack = "TTT_Backpack_Atschuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Schwarz_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_black_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Rot (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Red

//Rot 1 (Truppfuehrer)
class TTT_Rot1_Bw_Flecktarn : TTT_Rot1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Bw_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Rot 2 (Grenadier)
class TTT_Rot2_Bw_Flecktarn : TTT_Rot2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Bw_Flecktarn";
    backpack = "TTT_Backpack_Grenadier_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

//Rot 3 (LMG-Schuetze)
class TTT_Rot3_Bw_Flecktarn : TTT_Rot3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
};


//Rot 4 (AT-Schuetze)
class TTT_Rot4_Bw_Flecktarn : TTT_Rot4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Bw_Flecktarn";
    backpack = "TTT_Backpack_AtSchuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
};

//Rot 5 (LMG-Schuetze)
class TTT_Rot5_Bw_Flecktarn : TTT_Rot5_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
};

//Rot 6 (AT-Schuetze)
class TTT_Rot6_Bw_Flecktarn : TTT_Rot6_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Bw_Flecktarn";
    backpack = "TTT_Backpack_Atschuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Rot_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_red_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Blau (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Blue

//Blau 1 (Truppfuehrer)
class TTT_Blau1_Bw_Flecktarn : TTT_Blau1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Blau 2 (Grenadier)
class TTT_Blau2_Bw_Flecktarn : TTT_Blau2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Grenadier_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
};


//Blau 5 (MG-Assistent)
class TTT_Blau3_Bw_Flecktarn : TTT_Blau3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Mgassistent_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
};

//Blau 4 (MG-Schuetze)
class TTT_Blau4_Bw_Flecktarn : TTT_Blau4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Mgschuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
};

//Blau 5 (Pionier)
class TTT_Blau5_Bw_Flecktarn : TTT_Blau5_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pionier_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
};

//Blau 6 (Pionier)
class TTT_Blau6_Bw_Flecktarn : TTT_Blau6_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pionier_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Blau_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_blue_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Violett (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Purple

//Violett 1 (Truppfuehrer)
class TTT_Violett1_Bw_Flecktarn : TTT_Violett1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Bw_Flecktarn";
    backpack = "TTT_Backpack_Truppfuehrer_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Heavy,Desert), get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Violett 2 (Grenadier)
class TTT_Violett2_Bw_Flecktarn : TTT_Violett2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Bw_Flecktarn";
    backpack = "TTT_Backpack_Grenadier_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

//Violett 3 (MG-Assistent)
class TTT_Violett3_Bw_Flecktarn : TTT_Violett3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Bw_Flecktarn";
    backpack = "TTT_Backpack_Mgassistent_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(3,Bw,Flecktarn), default_linkedItems };
};

//Violett 4 (MG-Schuetze)
class TTT_Violett4_Bw_Flecktarn : TTT_Violett4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Bw_Flecktarn";
    backpack = "TTT_Backpack_Mgschuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(4,Bw,Flecktarn), default_linkedItems };
};

//Violett 5 (Pionier)
class TTT_Violett5_Bw_Flecktarn : TTT_Violett5_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pionier_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(5,Bw,Flecktarn), default_linkedItems };
};

//Violett 6 (Pionier)
class TTT_Violett6_Bw_Flecktarn : TTT_Violett6_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pionier_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Violett_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_purple_bw_Flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { get_vest(Us,GROUP_COLOR,Lite,Desert), get_helmet(6,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Bronze (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Bronze

//Bronze 1 (Truppfuehrer)
class TTT_Bronze1_Bw_Flecktarn : TTT_Bronze1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet1_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet1_Vehiclecrew", default_linkedItems };
};

//Bronze 2 (Schuetze)
class TTT_Bronze2_Bw_Flecktarn : TTT_Bronze2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet2_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet2_Vehiclecrew", default_linkedItems };
};

//Bronze 3 (Fahrer)
class TTT_Bronze3_Bw_Flecktarn : TTT_Bronze3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet3_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet3_Vehiclecrew", default_linkedItems };
};

//Bronze 4 (Kommandant)
class TTT_Bronze4_Bw_Flecktarn : TTT_Bronze4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet4_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet4_Vehiclecrew", default_linkedItems };
};

//Bronze 5 (Schuetze)
class TTT_Bronze5_Bw_Flecktarn : TTT_Bronze5_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet5_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet5_Vehiclecrew", default_linkedItems };
};

//Bronze 6 (Fahrer)
class TTT_Bronze6_Bw_Flecktarn : TTT_Bronze6_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Bw_Flecktarn";
    backpack = "TTT_Backpack_Schuetze_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Bronze_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_bronx_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet6_Vehiclecrew", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet6_Vehiclecrew", default_linkedItems };
};

/*
#############################################################
### Trupp Weiﬂ (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR White

//Weiﬂ 1 (Oberfeldarzt)
class TTT_Weiss1_Bw_Flecktarn : TTT_Weiss1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Weiss_Bw_Flecktarn";
    backpack = "TTT_Backpack_Feldarzt_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Weiss_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_white_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};  
	linkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Weiﬂ 2 (Fahrzeugfuehrer)
class TTT_Weiss2_Bw_Flecktarn : TTT_Weiss2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Weiss_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Weiss_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_white_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

//Weiﬂ 2 (Feldarzt)
class TTT_Weiss3_Bw_Flecktarn : TTT_Weiss3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Weiss_Bw_Flecktarn";
    backpack = "TTT_Backpack_Feldarzt_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Weiss_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_white_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(3,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(3,Bw,Flecktarn), default_linkedItems };
};

//Weiﬂ 4 (Fahrzeugfuehrer)
class TTT_Weiss4_Bw_Flecktarn : TTT_Weiss4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Weiss_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Weiss_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_white_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(4,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(4,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Platin (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Platin

//Platin 1 (Pilot)
class TTT_Platin1_Bw_Flecktarn : TTT_Platin1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Platin_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_platin_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };
};	

//Platin 2 (Pilot)
class TTT_Platin2_Bw_Flecktarn : TTT_Platin2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Platin_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_platin_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", "TTT_Helmet_Eagle", default_linkedItems };	
};	

/*
#############################################################
### Trupp Silber (Flecktarn)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Silver

//Silber 1 (Truppfuehrer)
class TTT_Silber1_Bw_Flecktarn : TTT_Silber1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Silber 2 (Fahrzeugfuehrer)
class TTT_Silber2_Bw_Flecktarn : TTT_Silber2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

//Silber 3 (Fahrzeugfuehrer)
class TTT_Silber3_Bw_Flecktarn : TTT_Silber3_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
	linkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(3,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(3,Bw,Flecktarn), default_linkedItems };
};

//Silber 4 (Fahrzeugfuehrer)
class TTT_Silber4_Bw_Flecktarn : TTT_Silber4_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(4,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(4,Bw,Flecktarn), default_linkedItems };
};

//Silber 5 (Fahrzeugfuehrer)
class TTT_Silber5_Bw_Flecktarn : TTT_Silber5_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(5,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(5,Bw,Flecktarn), default_linkedItems };
};

//Silber 6 (Fahrzeugfuehrer)
class TTT_Silber6_Bw_Flecktarn : TTT_Silber6_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(6,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "TTT_Vest_Crew_Us_Desert", get_helmet(6,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Adler (Flecktarn) OLD
#############################################################
*/

//Adler 1 (Pilot)
class TTT_Adler1_Bw_Flecktarn : TTT_Adler1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Adler_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", get_helmet(1,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", get_helmet(1,Bw,Flecktarn), default_linkedItems };
};

//Adler 2 (Copilot)
class TTT_Adler2_Bw_Flecktarn : TTT_Adler2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Adler_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", get_helmet(2,Bw,Flecktarn), default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", get_helmet(2,Bw,Flecktarn), default_linkedItems };
};

/*
#############################################################
### Trupp Bussard (Flecktarn) OLD
#############################################################
*/

//Bussard 1 (Pilot)
class TTT_Bussard1_Bw_Flecktarn : TTT_Bussard1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bussard_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
};

//Bussard 2 (Copilot)
class TTT_Bussard2_Bw_Flecktarn : TTT_Bussard2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bussard_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Buzzard", default_linkedItems };
};

//Habicht 1 (Pilot)
class TTT_Habicht1_Bw_Flecktarn : TTT_Habicht1_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Habicht_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
};

//Habicht 2 (Copilot)
class TTT_Habicht2_Bw_Flecktarn : TTT_Habicht2_Bw_Tropentarn {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Habicht_Bw_Flecktarn";
    backpack = "TTT_Backpack_Pilot_Bw_Flecktarn";
    uniformClass = "TTT_Uniform_Silber_Bw_Flecktarn";
	editorSubcategory = "EdSubcat_Unit_Camo_Flecktarn";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_bw\flecktarn\uniforms\TTT_uniform_silver_bw_flecktarn.paa" };
	hiddenSelectionsMaterials[] = {"\ttt_a3\ttt_units_base\misc\TTT_uniform.rvmat"};
    linkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
    respawnLinkedItems[] = { "BWA3_Vest_Fleck", "TTT_Helmet_Hawk", default_linkedItems };
};

#undef GROUP_COLOR