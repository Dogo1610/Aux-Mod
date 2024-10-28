class CLASS(Unit_Phase2_Base);
class CLASS(Unit_Axel): CLASS(Unit_Phase2_Base) {
    displayName = "Axel";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Axel);

    uniformClass = QCLASS(Uniform_Axel);
    backpack = QCLASS(Jetpack_JT12_LR);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Axel_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Axel_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Airborne_Axel), QCLASS(Vest_ForceRecon_Officer), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Airborne_Axel), QCLASS(Vest_ForceRecon_Officer), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Bailout): CLASS(Unit_Phase2_Base) {
    displayName = "Bailout";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Bailout);

    uniformClass = QCLASS(Uniform_Bailout);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Bailout_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Bailout_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Bailout), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Bailout), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_officerVisor), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Bob): CLASS(Unit_Phase2_Base) {
    displayName = "Bob";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Bob);

    uniformClass = QCLASS(Uniform_Bob);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Bob_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Bob_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Engineer_Bob), QCLASS(Vest_Engineer_CT), QCLASS(cloneNvg_engineerComms), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Engineer_Bob), QCLASS(Vest_Engineer_CT), QCLASS(cloneNvg_engineerComms), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Burnt): CLASS(Unit_Phase2_Base) {
    displayName = "Burnt";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Burnt);

    uniformClass = QCLASS(Uniform_Burnt);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Burnt_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Burnt_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_BARC_Burnt), QCLASS(Vest_Basic), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_BARC_Burnt), QCLASS(Vest_Basic), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
class CLASS(Unit_Burnt_Worn): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Burnt_Worn);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\worn\Burnt_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\worn\Burnt_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};


class CLASS(Unit_Catholic): CLASS(Unit_Phase2_Base) {
    displayName = "Catholic";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Catholic);

    uniformClass = QCLASS(Uniform_Catholic);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Catholic_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Catholic_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Tanker_Catholic), QCLASS(Vest_WO), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Tanker_Catholic), QCLASS(Vest_WO), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Cutthroat): CLASS(Unit_Phase2_Base) {
    displayName = "Cutthroat";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Cutthroat);

    uniformClass = QCLASS(Uniform_Cutthroat);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Cutthroat_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Cutthroat_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase1_Cutthroat), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_Cutthroat), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Defter): CLASS(Unit_Phase2_Base) {
    displayName = "Defter";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Defter);

    uniformClass = QCLASS(Uniform_Defter);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Defter_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Defter_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase1_Defter), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase1_Defter), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p1Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};


class CLASS(Unit_Dexus): CLASS(Unit_Phase2_Base) {
    displayName = "Dexus";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Dexus);

    uniformClass = QCLASS(Uniform_Dexus);
    backpack = QCLASS(cloneBackpack_heavy_Dexus);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Dexus_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Dexus_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Dexus), QCLASS(cloneVest_heavy_Dexus), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Dexus), QCLASS(cloneVest_heavy_Dexus), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Drake): CLASS(Unit_Phase2_Base) {
    displayName = "Drake";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Drake);

    uniformClass = QCLASS(Uniform_Drake);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Drake_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Drake_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Drake), QCLASS(Vest_ARC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Drake), QCLASS(Vest_ARC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Hagrid): CLASS(Unit_Phase2_Base) {
    displayName = "Hagrid";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Hagrid);

    uniformClass = QCLASS(Uniform_Hagrid);
    backpack = QCLASS(Backpack_ARC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Hagrid_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Hagrid_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Hagrid), QCLASS(Vest_ARC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Hagrid), QCLASS(Vest_ARC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Harry): CLASS(Unit_Phase2_Base) {
    displayName = "Harry";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Harry);

    uniformClass = QCLASS(Uniform_Harry);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Harry_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Harry_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Harry), QCLASS(Vest_ARC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Harry), QCLASS(Vest_ARC), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Jaws): CLASS(Unit_Phase2_Base) {
    displayName = "Jaws";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Jaws);

    uniformClass = QCLASS(Uniform_Jaws);
    backpack = QCLASS(cloneBackpack_radioHeavy_Jaws);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Jaws_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Jaws_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Jaws), QCLASS(Vest_Jaws), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Jaws), QCLASS(Vest_Jaws), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
class CLASS(Unit_Jaws_CamoBrown): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Jaws_CamoBrown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\brown\Jaws_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\brown\Jaws_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Joe): CLASS(Unit_Phase2_Base) {
    displayName = "Joe";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Joe);

    uniformClass = QCLASS(Uniform_Joe);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Joe_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Joe_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase12_Joe), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase12_Joe), QCLASS(Vest_Officer), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Keeli): CLASS(Unit_Phase2_Base) {
    displayName = "Keeli";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Keeli);

    uniformClass = QCLASS(Uniform_Keeli);
    backpack = QCLASS(Backpack_Radio_Mini);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Keeli_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Keeli), QCLASS(Vest_Commander_Keeli), QCLASS(cloneNvg_phase2_officerVisor_Keeli), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Keeli), QCLASS(Vest_Commander_Keeli), QCLASS(cloneNvg_phase2_officerVisor_Keeli), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};
class CLASS(Unit_Keeli_CamoBrown): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli_CamoBrown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\brown\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\brown\Keeli_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Keeli_CamoGrey): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli_CamoGrey);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\grey\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\grey\Keeli_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};
class CLASS(Unit_Keeli_Worn): CLASS(Unit_Phase2_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Keeli_Worn);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\camo\worn\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\standard\camo\worn\Keeli_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };
};


class CLASS(Unit_Rat): CLASS(Unit_Phase2_Base) {
    displayName = "Rat";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Rat);

    uniformClass = QCLASS(Uniform_Rat);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Rat_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Rat_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_BARC_Rat), QCLASS(Vest_Officer_Rat), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_BARC_Rat), QCLASS(Vest_Officer_Rat), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Rev): CLASS(Unit_Phase2_Base) {
    displayName = "Rev";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Rev);

    uniformClass = QCLASS(Uniform_Rev);
    backpack = QCLASS(cloneBackpack_heavy_Rev);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Rev_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Rev_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARF_Rev), QCLASS(Vest_ARF), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARF_Rev), QCLASS(Vest_ARF), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Sin): CLASS(Unit_Phase2_Base) {
    displayName = "Sin";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Sin);

    uniformClass = QCLASS(Uniform_Sin);
    backpack = QCLASS(Backpack_ARC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Sin_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Sin_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Sin), QCLASS(cloneVest_arc_Sin), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Sin), QCLASS(cloneVest_arc_Sin), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Sogi): CLASS(Unit_Phase2_Base) {
    displayName = "Sogi";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Sogi);

    uniformClass = QCLASS(Uniform_Sogi);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Sogi_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Sogi_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARF_Sogi), QCLASS(Vest_ARF), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARF_Sogi), QCLASS(Vest_ARF), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Splashdown): CLASS(Unit_Phase2_Base) {
    displayName = "Splashdown";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Splashdown);

    uniformClass = QCLASS(Uniform_Splashdown);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Splashdown_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Splashdown_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Engineer_Splashdown), QCLASS(Vest_Engineer), QCLASS(cloneNvg_engineerComms), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Engineer_Splashdown), QCLASS(Vest_Engineer), QCLASS(cloneNvg_engineerComms), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Talyn): CLASS(Unit_Phase2_Base) {
    displayName = "Talyn";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Talyn);

    uniformClass = QCLASS(Uniform_Talyn);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Talyn_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Talyn_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_Talyn), QCLASS(Vest_CSS), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Talyn), QCLASS(Vest_CSS), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Tugz): CLASS(Unit_Phase2_Base) {
    displayName = "Tugz";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Tugz);

    uniformClass = QCLASS(Uniform_Tugz);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Tugz_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Tugz_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARF_Tugz), QCLASS(Vest_ARF), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARF_Tugz), QCLASS(Vest_ARF), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Tyrant): CLASS(Unit_Phase2_Base) {
    displayName = "Tyrant";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Tyrant);

    uniformClass = QCLASS(Uniform_Tyrant);
    backpack = QCLASS(Backpack_ARC);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Tyrant_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Tyrant_lower_co.paa),
        "\ls_armor_bluefor\uniform\gar\phase2\data\undersuit_co.paa"
    };

    linkedItems[] = {
        QCLASS(Helmet_ARC_Tyrant), QCLASS(cloneVest_arc_Tyrant), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_ARC_Tyrant), QCLASS(cloneVest_arc_Tyrant), QCLASS(cloneNvg_phase2_rangefinder), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Woods): CLASS(Unit_Phase2_Base) {
    displayName = "Wood's";

    editorSubcategory = QEDSUBCAT(Customs);
    editorPreview = EDITOR_PREVIEW(Unit_Woods);

    uniformClass = QCLASS(Uniform_Woods);
    backpack = QCLASS(Backpack_Radio_Mini);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\standard\Woods_upper_co.paa),
        QPATHTOF(data\uniforms\standard\Woods_lower_co.paa),
        QPATHTOF(data\uniforms\standard\undersuit\Woods_undersuit_co.paa),
    };

    linkedItems[] = {
        QCLASS(Helmet_Phase2_Woods), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
    respawnLinkedItems[] = {
        QCLASS(Helmet_Phase2_Woods), QCLASS(Vest_Basic), QCLASS(cloneNvg_chip), "lsd_gar_p2Interior_hud", CLONE_LINKED_ITEMS_RADIO
    };
};

class CLASS(Unit_Phase2_Insulated_Base);
class CLASS(Unit_Phase2_Insulated_Dexus): CLASS(Unit_Phase2_Insulated_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Dexus);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\insulated\Dexus_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Dexus_lower_co.paa),
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_Insulated_Jaws): CLASS(Unit_Phase2_Insulated_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Jaws);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\insulated\Jaws_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Jaws_lower_co.paa),
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

};
class CLASS(Unit_Phase2_Insulated_Joe): CLASS(Unit_Phase2_Insulated_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Joe);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\insulated\Joe_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Joe_lower_co.paa),
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };
};

class CLASS(Unit_Phase2_Insulated_Keeli): CLASS(Unit_Phase2_Insulated_Base) {
    SCOPE_HIDDEN;
    uniformClass = QCLASS(Uniform_Phase2_Insulated_Keeli);
    hiddenSelectionsTextures[] = {
        QPATHTOF(data\uniforms\insulated\Keeli_upper_co.paa),
        QPATHTOF(data\uniforms\insulated\Keeli_lower_co.paa),
        "\lsd_armor_bluefor\uniform\gar\phase2Insulated\data\undersuit_co.paa"
    };

};