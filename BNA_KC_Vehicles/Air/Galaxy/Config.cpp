#include "CfgPatches.hpp"
#include "..\..\Common\Macros.hpp"


class CfgVehicles
{
    class VTOL_Base_F;
    class VTOL_01_base_F: VTOL_Base_F
    {
        class Turrets;
    };
    class VTOL_01_armed_base_F: VTOL_01_base_F
    {
        class Turrets: Turrets
        {
            class CopilotTurret;
            class GunnerTurret_01;
            class GunnerTurret_02;
        };
    };
    class B_T_VTOL_01_armed_F: VTOL_01_armed_base_F
    {
        class ACE_SelfActions;
    };
    class BNA_KC_Galaxy_Gunship: B_T_VTOL_01_armed_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Galaxy HAG";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };

        class Turrets: Turrets
        {
            class CopilotTurret: CopilotTurret {};
            class GunnerTurret_01: GunnerTurret_01
            {
                weapons[] =
                {
                    "BNA_KC_105mm",
                    "BNA_KC_Gatling_20mm"
                };
                magazines[] =
                {
                    "BNA_KC_100rnd_105mm",
                    "BNA_KC_4000rnd_20mm"
                };
            };
            class GunnerTurret_02: GunnerTurret_02
            {
                weapons[] = {"BNA_KC_40mm_VTOL"};
                magazines[] =
                {
                    "BNA_KC_40mm_GPR_240rnd",
                    "BNA_KC_40mm_APFSDS_160rnd"
                };
            };
        };
    };
    class BNA_KC_HAG_Base: BNA_KC_Galaxy_Gunship
    {
        // Scope
        scope = 1;
        scopeCurator = 0;
    };

    class VTOL_01_vehicle_base_F;
    class B_T_VTOL_01_vehicle_F: VTOL_01_vehicle_base_F
    {
        class ACE_SelfActions;
    };
    class BNA_KC_Galaxy_Transport_Vehicle: B_T_VTOL_01_vehicle_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Galaxy HVT";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };
    };
    class BNA_KC_HVT_Base: BNA_KC_Galaxy_Transport_Vehicle
    {
        // Scope
        scope = 1;
        scopeCurator = 0;
    };

    class VTOL_01_infantry_base_F;
    class B_T_VTOL_01_infantry_F: VTOL_01_infantry_base_F
    {
        class ACE_SelfActions;
    };
    class BNA_KC_Galaxy_Transport_Infantry: B_T_VTOL_01_infantry_F
    {
        // Mod Info
        dlc = "BNA_KC";
        author = "SweMonkey and DartRuffian";

        // Scope
        scope = 2;
        scopeCurator = 2;

        // Editor Attributes
        faction = "BNA_KC_Faction";
        editorSubcategory = "BNA_KC_SubCat_VAviation";

        displayName = "[KC] Galaxy HIT";
        crew = "BNA_KC_Unit_Phase2_Pilot";
        typicalCargo[] = {"BNA_KC_Unit_Phase2_Pilot"};

        class ACE_SelfActions: ACE_SelfActions
        {
            HUD_CHANGER
        };
    };
    class BNA_KC_HIT_Base: BNA_KC_Galaxy_Transport_Infantry
    {
        // Scope
        scope = 1;
        scopeCurator = 0;
    };
};