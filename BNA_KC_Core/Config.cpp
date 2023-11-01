/*
This is the root config for the mod.

Scope Values and their Meaning:
scope =
    0: Class is unavailable (and used for inheritance only)
    1: Class is unavailable in the editor (can be accessed with a macro)
    2: Class is available in the editor
scopeCurator =
    0: Class is unavailable in Zeus.
    2: Class is available in Zeus.
scopeArsenal =
    0: Class is unavailable in the Arsenal.
    2: Class is available in the Arsenal.
*/
#include "CfgPatches.hpp"


class CfgMods
{
    class Mod_Base;
    class BNA_KC: Mod_Base
    {
        logo = "\BNA_KC_Core\Data\UI\KC_Logo.paa";
        logoOver = "\BNA_KC_Core\Data\UI\KC_Logo.paa";
        picture = "\BNA_KC_Core\Data\UI\KC_Logo.paa";
        name = "Keeli Company Aux Mod";
        dlcColor[] = {0, 0, 0, 1};
    };
};