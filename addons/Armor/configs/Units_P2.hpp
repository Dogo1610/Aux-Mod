class BNA_KC_Unit_Phase2_CR: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 00 - Clone Recruit";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\CR.jpg";

    uniformClass = "BNA_KC_Uniform_CR";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CR_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CR_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CR", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CR", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_CT: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 01 - Clone Trooper";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\CT.jpg";

    uniformClass = "BNA_KC_Uniform_CT";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CT_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CT_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_CT_Legacy: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 01 - Clone Trooper";

    scope = 1;        // Hides the unit in the Editor
    scopeCurator = 0; // Hides the unit in Zeus

    uniformClass = "BNA_KC_Uniform_CT_Legacy";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CT_Legacy_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CT_Legacy_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    // No need to specify linked items,
    // this unit only exist to texture the legacy uniform
};

class BNA_KC_Unit_Phase2_SCT: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 02 - Senior Clone Trooper";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\SCT.jpg";

    uniformClass = "BNA_KC_Uniform_SCT";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_SCT_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_SCT_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_SCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_SCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_VCT: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 03 - Veteran Clone Trooper";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\VCT.jpg";

    uniformClass = "BNA_KC_Uniform_VCT";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_VCT_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_VCT_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_VCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_VCT", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

// Start of JNCO Ranks

class BNA_KC_Unit_Phase2_CLC: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 04 - Clone Lance Corporal";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\CLC.jpg";

    uniformClass = "BNA_KC_Uniform_CLC";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CLC_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CLC_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CLC", "BNA_KC_Vest_CLC", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CLC", "BNA_KC_Vest_CLC", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_CPL: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 05 - Clone Corporal";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\CPL.jpg";

    uniformClass = "BNA_KC_Uniform_CPL";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CPL_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CPL_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CPL", "BNA_KC_Vest_CPL", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CPL", "BNA_KC_Vest_CPL", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

// Start of NCO Ranks

class BNA_KC_Unit_Phase2_CS: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 06 - Clone Sergeant";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\CS.jpg";

    uniformClass = "BNA_KC_Uniform_CS";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CS_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CS_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CS", "BNA_KC_Vest_CS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CS", "BNA_KC_Vest_CS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_CSS: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 07 - Clone Staff Sergeant";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\CSS.jpg";

    uniformClass = "BNA_KC_Uniform_CSS";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CSS_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CSS_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSS", "BNA_KC_Vest_CSS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSS", "BNA_KC_Vest_CSS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_CSFC: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 08 - Clone Sergeant First Class";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\CSFC.jpg";

    uniformClass = "BNA_KC_Uniform_CSFC";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CSFC_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CSFC_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSFC", "BNA_KC_Vest_CSFC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSFC", "BNA_KC_Vest_CSFC", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_CMS: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 09 - Clone Master Sergeant";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\CMS.jpg";

    uniformClass = "BNA_KC_Uniform_CSFC";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CMS_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CMS_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CMS", "BNA_KC_Vest_CMS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CMS", "BNA_KC_Vest_CMS", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_CSM: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 10 - Clone Sergeant Major";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\CSM.jpg";

    uniformClass = "BNA_KC_Uniform_CSM";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CSM_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CSM_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSM", "BNA_KC_Vest_CSM", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_CSM", "BNA_KC_Vest_CSM", "BNA_KC_NVG_Rangefinder", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

// Start of Officer Ranks
class BNA_KC_Unit_Phase2_WO: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF 11 - Clone Warrant Officer";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\WO.jpg";

    uniformClass = "BNA_KC_Uniform_WO";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };

    backpack = "BNA_KC_Backpack_Radio_Mini";
};

class BNA_KC_Unit_Phase2_WO2: BNA_KC_Unit_Phase2_WO
{
    displayName = "INF 12 - Clone Warrant Officer 2";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\WO2.jpg";

    uniformClass = "BNA_KC_Uniform_WO2";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO2_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO2_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO2", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO2", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_WO3: BNA_KC_Unit_Phase2_WO
{
    displayName = "INF 13 - Clone Warrant Officer 3";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\WO3.jpg";

    uniformClass = "BNA_KC_Uniform_WO";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO3_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_WO3_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO3", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_WO3", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_LT: BNA_KC_Unit_Phase2_WO
{
    displayName = "INF 14 - Clone Lieutenant";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\LT.jpg";

    uniformClass = "BNA_KC_Uniform_LT";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_LT_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_LT_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_LT", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_LT", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

class BNA_KC_Unit_Phase2_1LT: BNA_KC_Unit_Phase2_WO
{
    displayName = "INF 15 - Clone 1st Lieutenant";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Phase2\1LT.jpg";

    uniformClass = "BNA_KC_Uniform_LT";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_1LT_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_1LT_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_1LT", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Phase2_1LT", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};

// class BNA_KC_Unit_Phase2_CAP: BNA_KC_Unit_Phase2_WO
// {
//     displayName = "INF 16 - Clone Captain";

//     uniformClass = "BNA_KC_Uniform_CAP";
//     hiddenSelectionsTextures[] =
//     {
//         "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CAP_Upper.paa",
//         "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CAP_Lower.paa",
//         "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CAP", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
//     };
//     respawnLinkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CAP", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
//     };
// };

// class BNA_KC_Unit_Phase2_MAJ: BNA_KC_Unit_Phase2_WO
// {
//     displayName = "INF 17 - Clone Major";

//     uniformClass = "BNA_KC_Uniform_MAJ";
//     hiddenSelectionsTextures[] =
//     {
//         "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_MAJ_Upper.paa",
//         "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_MAJ_Lower.paa",
//         "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_MAJ", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
//     };
//     respawnLinkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_MAJ", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
//     };
// };

// class BNA_KC_Unit_Phase2_CMD: BNA_KC_Unit_Phase2_WO
// {
//     displayName = "INF 18 - Clone Commander";

//     uniformClass = "BNA_KC_Uniform_CMD";
//     hiddenSelectionsTextures[] =
//     {
//         "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CMD_Upper.paa",
//         "\BNA_KC_Gear\Infantry\Data\Uniforms\Uniform_CMD_Lower.paa",
//         "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
//     };

//     linkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CMD", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
//     };
//     respawnLinkedItems[] =
//     {
//         "BNA_KC_Helmet_Phase2_CMD", "BNA_KC_Vest_Officer", "BNA_KC_NVG_Officer", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
//     };
// };

// Camo Units
class BNA_KC_Unit_Phase2_Recruit_CamoBrown: BNA_KC_Unit_Phase2_Base
{
    scope = 1;
    scopeCurator = 0;
    uniformClass = "BNA_KC_Uniform_Recruit_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\Uniform_Recruit_CamoBrown_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\Uniform_Recruit_CamoBrown_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class BNA_KC_Unit_Phase2_Recruit_CamoGrey: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_Recruit_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\Uniform_Recruit_CamoGrey_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\Uniform_Recruit_CamoGrey_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class BNA_KC_Unit_Phase2_Enlisted_CamoBrown: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_Enlisted_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\Uniform_Enlisted_CamoBrown_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\Uniform_Enlisted_CamoBrown_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class BNA_KC_Unit_Phase2_Enlisted_CamoGrey: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_Enlisted_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\Uniform_Enlisted_CamoGrey_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\Uniform_Enlisted_CamoGrey_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class BNA_KC_Unit_Phase2_NCO_CamoBrown: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_NCO_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\Uniform_NCO_CamoBrown_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\Uniform_NCO_CamoBrown_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class BNA_KC_Unit_Phase2_NCO_CamoGrey: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_NCO_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\Uniform_NCO_CamoGrey_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\Uniform_NCO_CamoGrey_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class BNA_KC_Unit_Phase2_Officer_CamoBrown: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_Officer_CamoBrown";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\Uniform_Officer_CamoBrown_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Brown\Uniform_Officer_CamoBrown_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class BNA_KC_Unit_Phase2_Officer_CamoGrey: BNA_KC_Unit_Phase2_Recruit_CamoBrown
{
    uniformClass = "BNA_KC_Uniform_Officer_CamoGrey";
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\Uniform_Officer_CamoGrey_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Camo\Grey\Uniform_Officer_CamoGrey_Lower.paa",
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class BNA_KC_Unit_Phase2_Insulated_Trooper: BNA_KC_Unit_Phase2_Base
{
    displayName = "INF Snow - Trooper";
    editorPreview = "\BNA_KC_Gear\Infantry\Data\Previews\Trooper_Insulated.jpg";

    // Uniform Model & Textures
    uniformClass = "BNA_KC_Uniform_Insulated";
    model = "\lsd_armor_bluefor\uniform\gar\phase2Insulated\lsd_gar_phase2Insulated_uniform.p3d";
    hiddenSelections[] = {"_upper", "_lower", "_undersuit"};
    hiddenSelectionsTextures[] =
    {
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Insulated\Uniform_Insulated_Upper.paa",
        "\BNA_KC_Gear\Infantry\Data\Uniforms\Insulated\Uniform_Insulated_Lower.paa",
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

    // Inventory
    linkedItems[] =
    {
        "BNA_KC_Helmet_Insulated", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
    respawnLinkedItems[] =
    {
        "BNA_KC_Helmet_Insulated", "BNA_KC_Vest_Basic", "BNA_KC_NVG_Chip", "lsd_gar_p2Interior_hud", "SWLB_comlink", LINKED_ITEMS
    };
};