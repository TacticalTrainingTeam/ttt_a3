// Submenus of the ACE self-interaction, in menu order.
class GVAR(categories) {
    class standard {
        displayName = CSTRING(category_standard);
    };
    class fiber {
        displayName = CSTRING(category_fiber);
    };
};

// One class per craftable drone, read once per machine by fnc_compileRecipes.sqf.
// - category:      class name in GVAR(categories) above
// - result:        CfgMagazines/CfgWeapons(item) class handed to the player
// - ingredients[]: {class, count} pairs taken from the supply vehicle's cargo; only magazines and
//                  items are supported (no weapons/backpacks), see fnc_compileRecipes.sqf
// Clients only ever send the recipe class name to the server, which reads the materials and the
// result from here itself - a client can't request an arbitrary result or skip materials.
class GVAR(recipes) {
    class standard_ap {
        category = "standard";
        displayName = CSTRING(recipe_standard_ap);
        result = "UA_Item_OG7V_AP";
        ingredients[] = {{"UA_Item_EMPTY", 1}, {"ACE_CableTie", 2}, {"rhs_rpg7_OG7V_mag", 1}};
    };
    class standard_he {
        category = "standard";
        displayName = CSTRING(recipe_standard_he);
        result = "UA_Item_TBG7L_HE";
        ingredients[] = {{"UA_Item_EMPTY", 1}, {"ACE_CableTie", 2}, {"rhs_rpg7_TBG7V_mag", 1}};
    };
    class standard_at {
        category = "standard";
        displayName = CSTRING(recipe_standard_at);
        result = "UA_Item_PG7VL_AT";
        ingredients[] = {{"UA_Item_EMPTY", 1}, {"ACE_CableTie", 2}, {"rhs_rpg7_PG7VL_mag", 1}};
    };
    // UA_Item_FIBER is the FPV mod's own item for a fibre-optic drone without payload (its "FIBER"
    // payload, see UA_fnc_fpv_getPayloadItem). The original mission script output UA_Item_EMPTY
    // here, which handed back the same radio frame it had just consumed.
    class fiber_recon {
        category = "fiber";
        displayName = CSTRING(recipe_fiber_recon);
        result = "UA_Item_FIBER";
        ingredients[] = {{"UA_Item_EMPTY", 1}, {"ACE_CableTie", 2}, {"ACE_rope6", 1}};
    };
    class fiber_at {
        category = "fiber";
        displayName = CSTRING(recipe_fiber_at);
        result = "UA_Item_FIBER_AT";
        ingredients[] = {{"UA_Item_EMPTY", 1}, {"ACE_CableTie", 2}, {"ACE_rope6", 1}, {"rhs_rpg7_PG7VL_mag", 1}};
    };
};
