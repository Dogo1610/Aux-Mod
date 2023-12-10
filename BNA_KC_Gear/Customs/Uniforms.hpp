// ┌────────────────────┐
// │      Uniforms      │
// └────────────────────┘
class ls_gar_phase2_uniform;
class BNA_KC_Uniform_Base: ls_gar_phase2_uniform
{
    class ItemInfo;
};

class BNA_KC_Uniform_Axel: BNA_KC_Uniform_Base
{
    displayName = "[KC] INF Armor ('Axel')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Axel";
    };

    BNA_KC_isCustom = 1;
};

class BNA_KC_Uniform_Burnt: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Burnt')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Burnt";
    };
};

class BNA_KC_Uniform_Dexus: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Dexus')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Dexus";
    };
};

class BNA_KC_Uniform_Drake: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Drake')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Drake";
    };
};

class BNA_KC_Uniform_Fil: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Fil')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Fil";
    };
};

class BNA_KC_Uniform_FilSquad: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Fil's Squad')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_FilSquad";
    };
};

class BNA_KC_Uniform_Howzer_Blue: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Howzer') - Blue";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Howzer_Blue";
    };
};

class BNA_KC_Uniform_Howzer_Brown: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Howzer') - Brown";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Howzer_Brown";
    };
};

class BNA_KC_Uniform_Joe: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Joe')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Joe";
    };
};

class BNA_KC_Uniform_Keeli: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Keeli')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Keeli";
    };
};
class BNA_KC_Uniform_Keeli_CamoBrown: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Keeli') - Brown Camo";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Keeli_CamoBrown";
    };
};
class BNA_KC_Uniform_Keeli_CamoGrey: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Keeli') - Grey Camo";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Keeli_CamoGrey";
    };
};

class BNA_KC_Uniform_Ponds: BNA_KC_Uniform_Axel
{
    displayName = "[187th] INF Armor ('Ponds')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Ponds";
    };
};

class BNA_KC_Uniform_PondsTrooper: BNA_KC_Uniform_Axel
{
    displayName = "[187th] INF Armor";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_PondsTrooper";
    };
};

class BNA_KC_Uniform_Rat: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Rat')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Rat";
    };
};

class BNA_KC_Uniform_Sin: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Sin')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Sin";
    };
};

class BNA_KC_Uniform_Stone: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Stone')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Stone";
    };
};

class BNA_KC_Uniform_Tyrant: BNA_KC_Uniform_Axel
{
    displayName = "[KC] INF Armor ('Tyrant')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Tyrant";
    };
};


// ┌────────────────────┐
// │   Snow  Uniforms   │
// └────────────────────┘
class BNA_KC_Uniform_Base;
class BNA_KC_Uniform_Insulated: BNA_KC_Uniform_Base
{
    class ItemInfo;
};

class BNA_KC_Uniform_Insulated_Dexus: BNA_KC_Uniform_Insulated
{
    displayName = "[KC] INF Snow Armor ('Dexus')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Insulated_Dexus";
    };

    BNA_KC_isCustom = 1;
};

class BNA_KC_Uniform_Insulated_Joe: BNA_KC_Uniform_Insulated_Dexus
{
    displayName = "[KC] INF Snow Armor ('Joe')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Insulated_Joe";
    };
};

class BNA_KC_Uniform_Insulated_Keeli: BNA_KC_Uniform_Insulated_Dexus
{
    displayName = "[KC] INF Snow Armor ('Keeli')";
    class ItemInfo: ItemInfo
    {
        uniformClass = "BNA_KC_Unit_Insulated_Keeli";
    };
};