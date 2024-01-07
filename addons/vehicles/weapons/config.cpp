#include "script_component.hpp"
#include "CfgWeapons.hpp"
#include "CfgMagazines.hpp"
#include "CfgAmmo.hpp"
#include "CfgSoundShaders.hpp"
#include "CfgSoundSets.hpp"


class CfgPatches
{
    class SUBADDON
    {
        author = "Keeli Company Aux Team";
        name = COMPONENT_NAME;
        addonRootClass = QUOTE(ADDON);
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] =
        {
            QUOTE(ADDON),
            QCLASS(weapons),
            "3AS_Main",
            "3AS_Weapons",
            "3AS_VehicleWeapons",
            "3AS_Static"
        };
        units[] = {};
        weapons[] =
        {
            QCLASS(Autocannon_Badger),
            QCLASS(Autocannon_40mm),
            QCLASS(Cannon_ARC),
            QCLASS(Cannon_ARC_Heavy),
            QCLASS(Cannon_ARC_Light),
            QCLASS(Cannon_Galaxy),
            QCLASS(Cannon_YWing),
            QCLASS(Coax_Badger),
            QCLASS(Coax_Commander),
            QCLASS(Gatling_20mm)
        };
        VERSION_CONFIG;
    };
};