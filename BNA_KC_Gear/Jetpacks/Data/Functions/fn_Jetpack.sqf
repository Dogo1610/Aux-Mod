params ["_unit"];

#define GET_NUMBER(config, _defaultValue) (if (isNumber (config)) then {getNumber (config)} else {_defaultValue})
#define DEV_LOG(message) (if (BNA_KC_DevMode) then {systemChat str message})

// Exit if unit does not have a jetpack
if !(_unit call BNAKC_fnc_JetHasJetpack) exitWith {};

// Jetpack properties
private _jetpack = backpack _unit;
private _jetSpeed = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_speed", 1);
private _jetStrength = GET_NUMBER(configFile >> "CfgVehicles" >> _jetpack >> "BNA_KC_Jet_strength", 1);

/*
CBA_fnc_RemovePerFrameHandler returns True or False depending on whether it can remove a given handler.
If the jetpack handler does *not* exist, create it.
Else, do nothing.
*/
if !([BNA_KC_Jet_JetpackHandle] call CBA_fnc_RemovePerFrameHandler) then
{   
    // Speed and position, used for an initial boost
    private _velocity = velocity _unit;
    private _position = getPosASL _unit;

    // Give slight boost to start jetpacking, but only if starting from the ground
    if (isTouchingGround _unit) then
    {
        // Teleport is needed so player will actually move upwards
        _position set [2, (_position select 2) + 0.05];
        _velocity set [2, (_velocity select 2) + 7];

        _unit setPosASL _position;
        _unit setVelocity _velocity;
    };

    // Handle visual effects, global so all players see them
    ["BNA_KC_Jet_JetpackFired", [ace_player]] call CBA_fnc_GlobalEvent;

    BNA_KC_Jet_JetpackHandle =
    [
        BNAKC_fnc_JetpackFrameHandler
    ] call CBA_fnc_AddPerFrameHandler;
}
else
{
    // Unit is already jetpacking
};


BNA_KC_Jet_JetpackSoundHandle =
[
    BNAKC_fnc_JetpackSoundHandler,
    0.2 // Time inbetween each execution
] call CBA_fnc_AddPerFrameHandler;