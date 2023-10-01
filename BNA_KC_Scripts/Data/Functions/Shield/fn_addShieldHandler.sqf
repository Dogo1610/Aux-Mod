/*
 * Author: DartRuffian
 * Damage handler for a shielded vehicle.
 *
 * Arguments:
 * vehicle: The vehicle to create the handler for
 *
 * Return Value:
 * None
 *
 * Examples:
 * (vehicle player) call BNAKC_fnc_addShieldHandler;
 */


params [["_vehicle", objNull, [objNull]]];
private ["_hasShield"];

_hasShield =
[
    (configFile >> "CfgVehicles" >> typeOf _vehicle),
    "BNA_KC_Shield_hasShield",
    0
] call BIS_fnc_returnConfigEntry;

if (isNull _vehicle) exitWith {};
if (_hasShield isEqualTo 0) exitWith {};

_vehicle addEventHandler
[
    "HandleDamage",
    {
        params ["_vehicle", "", "_damage", "", "", "", "", ""];
        private ["_shieldMaxHealth", "_shieldHealth"];

        _shieldMaxHealth =
        [
            (configFile >> "CfgVehicles" >> typeOf _vehicle),
            "BNA_KC_Shield_maxHealth",
            50
        ] call BIS_fnc_returnConfigEntry;
        _shieldHealth = _vehicle getVariable ["BNA_KC_Shield_health", _shieldMaxHealth];
        _shieldHealth = (_shieldHealth - _damage) max 0;
        _vehicle setVariable ["BNA_KC_Shield_health", _shieldHealth, true];

        if (_shieldHealth isEqualTo 0) then
        {
            _vehicle call BNAKC_fnc_deactivateShield;
            _vehicle removeEventHandler [_thisEvent, _thisEventHandler];
        };

        0;
    }
];