#include "..\script_component.hpp"
/*
 * Author: DartRuffian
 * Returns if a unit is a medic.
 *
 * Arguments:
 * 0: Unit <OBJECT>
 *
 * Return Value:
 * True if unit is a medic, otherwise false
 *
 * Example:
 * player call FUNC(isEngineer)
 *
 * Public: Yes
 */

params [
    ["_unit", objNull, [objNull]]
];
TRACE_1("fnc_isMedic",_unit);

_unit getVariable ["ace_medical_medicClass", 0] >= 1;