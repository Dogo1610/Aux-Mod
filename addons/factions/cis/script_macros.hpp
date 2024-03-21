#define DROID_LINKED_ITEMS "SWLB_Comlink_Droid"

#define B1_UNIFORM(var1) class CLASS(DOUBLES(CIS_Uniform_Droid_B1,var1)): CLASS(CIS_Uniform_Droid_Base) { \
    SCOPE_PUBLIC; \
    displayName = QUOTE([CIS] B1 var1 Droid); \
    class ItemInfo: ItemInfo { \
        uniformClass = QCLASS(DOUBLES(CIS_Unit_Droid_B1,var1)); \
    }; \
    class XtdGearInfo { \
        model = QCLASS(CIS_Uniforms_B1); \
        camo = QUOTE(var1); \
        variant = "Standard"; \
    }; \
}

#define B1_VARIANT_UNIFORM(var1,var2) class CLASS(TRIPLES(CIS_Uniform_Droid_B1,var1,var2)): CLASS(CIS_Uniform_Droid_Base) { \
    SCOPE_PUBLIC; \
    displayName = QUOTE([CIS] B1 var1 Droid (var2)); \
    class ItemInfo: ItemInfo { \
        uniformClass = QCLASS(TRIPLES(CIS_Unit_Droid_B1,var1,var2)); \
    }; \
    class XtdGearInfo { \
        model = QCLASS(CIS_Uniforms_B1); \
        camo = QUOTE(var1); \
        variant = QUOTE(var2); \
    }; \
}

#define BX_UNIFORM(var1) class CLASS(DOUBLES(CIS_Uniform_Droid_BX,var1)): CLASS(CIS_Uniform_Droid_BX) { \
    SCOPE_PUBLIC; \
    displayName = QUOTE([CIS] BX Commando Droid var1##); \
    class ItemInfo: ItemInfo { \
        uniformClass = QCLASS(DOUBLES(CIS_Unit_Droid_BX,var1)); \
    }; \
    class XtdGearInfo: XtdGearInfo { \
        role = QUOTE(var1); \
    }; \
}