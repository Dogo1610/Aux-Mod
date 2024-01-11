class Extended_PreStart_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preStart));
    };
};

class Extended_PreInit_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_preInit));
    };
};

class Extended_PostInit_EventHandlers
{
    class ADDON
    {
        init = QUOTE(call COMPILE_SCRIPT(XEH_postInit));
    };
};

class Extended_Init_EventHandlers
{
    class CLASS(Deployable_MedicalDroid)
    {
        class GVAR(areaSlowHealInit)
        {
            init = QUOTE(_this call FUNC(areaHealerInit));
        };
        class GVAR(soundLoopInit)
        {
            init = QUOTE(_this call EFUNC(core,soundLoopInit));
        };
    };
};