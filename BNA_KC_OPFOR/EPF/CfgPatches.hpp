class CfgPatches
{
    class BNA_KC_OPFOR_EPF
    {
        addonRootClass= "BNA_KC_OPFOR";
        author = "SweMonkey and DartRuffian";
        requiredVersion = 1;
        requiredAddons[] =
        {
            "BNA_KC_OPFOR",
                // Base OPFOR unit, uniform, etc.
            "sc_equipment",
                // Uniform textures
                // Vests
                // Backpacks
            "BNA_KC_Weapons_E5",
                // E-5
            "BNA_KC_Weapons_E5C",
                // E-5C
            "BNA_KC_Weapons_E60R"
                // E-60R
        };
        units[] =
        {
            // Units
            "BNA_KC_EPF_Unit_Base",
            "BNA_KC_EPF_Backpack_Predef_Rifleman",
            "BNA_KC_EPF_Backpack_Heavy",
            "BNA_KC_EPF_Backpack_Heavy_Predef_AT",
            "BNA_KC_EPF_Backpack_Heavy_Predef_AA",
            "BNA_KC_EPF_Backpack_Assault",
            "BNA_KC_EPF_Backpack_Assault_Predef_Heavy",
            "BNA_KC_EPF_Backpack_Assault_Predef_Medium",
            "BNA_KC_EPF_Backpack_RTO",
            "BNA_KC_EPF_Backpack_RTO_Predef_SL"

            // Backpacks
            "BNA_KC_EPF_Backpack",

            // Vehicles
        };
        weapons[] =
        {
            // Uniforms
            "BNA_KC_EPF_Uniform",

            // Vests
            "BNA_KC_EPF_Vest",
            "BNA_KC_EPF_Vest_Medium",
            "BNA_KC_EPF_Vest_AssaultMedium",
            "BNA_KC_EPF_Vest_AssaultHeavy"
        };

        skipWhenMissingDependencies = 1;
    };
};