class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_1Rnd_RPS7_HE): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] RPS-7 HE Rocket";
        displayNameShort = "High Explosive";
        descriptionShort = "High Explosive Rocket<br/>Rounds: 1<br/>Used In: RPS-7";

        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";

        ammo = QCLASS(Rocket_RPS7_HE);
        count = 1;
        initSpeed = 140;

        allowedSlots[] = {TYPE_BACKPACK};
        mass = MASS_MAGAZINE;
    };

    class CLASS(Mag_1Rnd_RPS7_AT): CLASS(Mag_1Rnd_RPS7_HE) {
        displayName = "[KC] RPS-7 AT Rocket";
        displayNameShort = "Anti-Tank";
        descriptionShort = "Anti-Tank Rocket<br/>Rounds: 1<br/>Used In: RPS-7";

        model = "\A3\weapons_f\launchers\RPG32\tbg32v_rocket_item.p3d";
        picture = "\A3\Weapons_F\launchers\RPG32\data\UI\gear_tbg32v_rocket_ca.paa";

        ammo = QCLASS(Rocket_RPS7_AT);
    };

    class Aux12thFleet_Mag_RPS7_AT: CLASS(Mag_1Rnd_RPS7_AT) {
        SCOPE_HIDDEN;
        descriptionShort = "High Explosive Rocket<br/>Rounds: 1<br/>Used In: RPS-7<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
    class Aux12thFleet_Mag_RPS7_HE: CLASS(Mag_1Rnd_RPS7_HE) {
        SCOPE_HIDDEN;
        descriptionShort = "Anti-Tank Rocket<br/>Rounds: 1<br/>Used In: RPS-7<br/>LEGACY CLASS<br/>This class has been deprecated and will be removed in the future.";
    };
};