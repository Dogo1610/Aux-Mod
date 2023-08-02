// WIKI: https://github.com/CBATeam/CBA_A3/wiki/CBA-Settings-System#creating-a-setting

// ACE Fortify Settings
[
    "BNA_KC_FortifyPreset",
    "LIST",
    ["Preset", "Select what preset to use with ACE's Fortify System, or to disable it."],
    ["Keeli Company Aux Mod", "ACE Fortify Options"],
    [["Disabled", "BNA_KC_FortifyPreset_Default"], ["STR_A3_OPTIONS_DISABLED", "STR_A3_OPTIONS_DEFAULT"], 1],
    1, // isGlobal
    {
        [] call BNAKC_fnc_RegisterPreset;
    }
] call CBA_fnc_addSetting;

[
    "BNA_KC_FortifyBudget",
    "EDITBOX",
    ["Budget", "Budget for ACE Fortify. Use -1 for an unlimited budget."],
    ["Keeli Company Aux Mod", "ACE Fortify Options"],
    "100", // Will need to be converted to integer
    1 // isGlobal
] call CBA_fnc_addSetting;


// Map
[
    "BNA_KC_Map_MarkChannel",
    "LIST",
    ["Channel", "The channel to create markers in."],
    ["Keeli Company Aux Mod", "Map"],
    [[-2, 0, 1, 2, 3, 4, 5], ["Auto", "Global", "Side", "Command", "Group", "Vehicle", "Direct"], 0]
] call CBA_fnc_addSetting;


// Developer
[
    "BNA_KC_DevMode",
    "CHECKBOX",
    ["Enable Developer Mode", "Enables developer mode, shows debug messages in chat and creates marker objects."],
    ["Keeli Company Aux Mod", "Developer"],
    false,
    1 // isGlobal
] call CBA_fnc_addSetting;


// Misc. Scripts
[
    "BNA_KC_Misc_FixInfiniteLoading",
    "CHECKBOX",
    ["Infinite Loading Screen Fix", "Runs a script on each connecting player to end the loading screen after a certain amount of time."],
    ["Keeli Company Aux Mod", "Miscellaneous"],
    true,
    1 // isGlobal
] call CBA_fnc_addSetting;