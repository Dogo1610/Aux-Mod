class CfgMagazines {
    class CLASS(Mag_Base);
    class CLASS(Mag_12Rnd_DP25S): CLASS(Mag_Base) {
        SCOPE_PUBLIC;
        displayName = "[KC] DP-25s Energy Cell";
        displayNameShort = "Low Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 30<br/>Used In: DP-23";

        model = "\MRC\JLTS\weapons\DP23\DP23_mag.p3d";
        picture = "\MRC\JLTS\weapons\DP23\data\ui\DP23_mag_ui_ca.paa";

        ammo = QCLASS(Bullet_PlasmaScatter_Blue);
        count = 12;
        mass = 10;
    };

    class CLASS(Mag_12Rnd_DP25S_SLUG): CLASS(Mag_12Rnd_DP25S) {
        displayName = "[KC] DP-25s Slug Cell";
        displayNameShort = "Standard Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 15<br/>Used In: DP-23";

        ammo = QCLASS(Bullet_PlasmaSniper_Blue);
        count = 12;

    };
    class CLASS(Mag_20Rnd_DP25S_HP): CLASS(Mag_12Rnd_DP25S) {
        displayName = "[KC] DP-25s HP Energy Cell";
        displayNameShort = "High Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 20<br/>Used In: DP-25";

        ammo = QCLASS(Bullet_PlasmaScatterHP_Blue);
        count = 20;
    };
    class CLASS(Mag_8Rnd_DP25S_HE): CLASS(Mag_12Rnd_DP25S) {
        displayName = "[KC] DP-25s HE";
        displayNameShort = "High Explosive";
        descriptionShort = "Explosive Energy Cell Pack<br/>Rounds: 8<br/>Used In: DP-25s";

        ammo = QCLASS(Bullet_Plasma40mm_AT);
        count = 8;
    };
    class CLASS(Mag_4Rnd_DP25S_Flame): CLASS(Mag_12Rnd_DP25S) {
        displayName = "[KC] DP-25s Dragons Breath";
        displayNameShort = "Standard Energy";
        descriptionShort = "Scatter Energy Cell Pack<br/>Rounds: 8<br/>Used In: DP-23";

        ammo = QCLASS(Bullet_flamethrower);
        count = 4;
        mass = 20;
    };
};