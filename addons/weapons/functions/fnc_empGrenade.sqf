#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Handles EMP grenades
 *
 * Arguments:
 * 0: The unit that threw the grenade <OBJECT>
 * 1: Class name of the ammo type thrown <STRING>
 * 2: Class name of the magazine (grenade) thrown <STRING>
 * 3: Projectile object <OBJECT>
 *
 * Return Value:
 * Whether the emp grenade activated successfully <BOOL>
 *
 * Examples:
 * [ace_player, "BNA_KC_Grenade_EMP", "BNA_KC_Grenade_EMP_Ammo", _projectile] call BNA_KC_weapons_fnc_empGrenade;
 */

params [
    ["_unit", objNull, [objNull]],
    ["_ammo", "", [""]],
    ["_magazine", "", [""]],
    ["_projectile", objNull, [objNull]]
];
private ["_radiusDroid", "_radiusDroideka", "_radiusVehicle", "_positionASL", "_positionAGL", "_nearbyPlayers", "_nearbyUnits", "_nearbyVehicles", "_nearbyDroidekas", "_droidekaShields"];
TRACE_4("fnc_empGrenade", _unit, _ammo, _magazine, _projectile);

if (isNull _unit or isNull _projectile) exitWith {false;};
if (_ammo isEqualTo "" or _magazine isEqualTo "") exitWith {false;};

_radiusDroid = [
    configFile >> "CfgMagazines" >> _magazine,
    QGVAR(empRadiusDroid),
    EMP_RADIUS_DROID_DEFAULT
] call BIS_fnc_returnConfigEntry;
_radiusDroideka = [
    configFile >> "CfgMagazines" >> _magazine,
    QGVAR(empRadiusDroideka),
    EMP_RADIUS_DROIDEKA_DEFAULT
] call BIS_fnc_returnConfigEntry;
_radiusVehicle = [
    configFile >> "CfgMagazines" >> _magazine,
    QGVAR(empRadiusVehicle),
    EMP_RADIUS_VEHICLE_DEFAULT
] call BIS_fnc_returnConfigEntry;

_positionASL = getPosASL _projectile;
_positionAGL = ASLToAGL _positionASL;

_nearbyPlayers = [_positionAGL, 70] call EFUNC(core,getNearbyUnits);
_nearbyPlayers = _nearbyPlayers select {
    _x call ace_common_fnc_isPlayer
};
{
    [QEGVAR(core,localSound), [
            QPATHTOF(data\audio\emp\TCW_Explode.wss),
            "\MRC\JLTS\weapons\Core\sounds\emp_exp\exp_emp_1.wss",
            _positionASL,
            QGVAR(empTCWSoundEnabled),
            QGVAR(empSoundVolume),
            QGVAR(empSoundPitch)
        ],
        _x
    ] call CBA_fnc_targetEvent;
} forEach _nearbyPlayers;

_nearbyUnits = [_positionAGL, _radiusDroid] call EFUNC(core,getNearbyUnits);

_nearbyVehicles = _positionAGL nearEntities [["Air", "LandVehicle"], _radiusVehicle];

// 3AS and 501st Droidekas use different methods of shields, and require different handling
_nearbyDroidekas = _positionAGL nearEntities [["3AS_Deka_Static_Base", "3AS_Deka_Static_Sniper_Base"], _radiusDroideka];
_droidekaShields = _positionAGL nearObjects ["RD501_Droideka_Shield", _radiusDroideka];

TRACE_5("EMP Grenade", _positionAGL, _nearbyUnits, _nearbyVehicles, _nearbyDroidekas, _droidekaShields);

[_nearbyUnits, _unit] call FUNC(droidDeathEffect);
[_nearbyVehicles, GVAR(empVehicleDisableDuration)] call FUNC(disableVehicles);
[_nearbyDroidekas, _droidekaShields] call FUNC(disableDroidekaShields);

true;