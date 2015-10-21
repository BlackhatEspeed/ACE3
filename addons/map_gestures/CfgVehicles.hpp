class CfgVehicles {
    class ACE_Module;
    class GVAR(moduleSettings): ACE_Module {
        scope = 2;
        category = "ACE";
        displayName = CSTRING(moduleSettings_displayName);
        function = QFUNC(moduleSettings);
        isGlobal = 0;
        author = ECSTRING(common,ACETeam);
        icon = PATHTOF(ui\icon_module_map_gestures_ca.paa);
        class Arguments {
            class enabled {
                displayName = CSTRING(enabled_DisplayName);
                typeName = "BOOL";
                defaultValue = 1;
            };
            class maxRange {
                displayName = CSTRING(maxRange_displayName);
                description = CSTRING(maxRange_description);
                typeName = "NUMBER";
                defaultValue = 4;
            };
            class interval {
                displayName = CSTRING(interval_displayName);
                description = CSTRING(interval_description);
                typeName = "NUMBER";
                defaultValue = 0.03;
            };
            class defaultLeadColor {
                displayName = CSTRING(defaultLeadColor_displayName);
                description = CSTRING(defaultLeadColor_description);
                typeName = "STRING";
                defaultValue = "0,0,0,0";
            };
            class defaultColor {
                displayName = CSTRING(defaultColor_displayName);
                description = CSTRING(defaultColor_description);
                typeName = "STRING";
                defaultValue = "0,0,0,0";
            };
        };
    };
    class GVAR(moduleGroupSettings): ACE_Module {
        scope = 2;
        category = "ACE";
        displayName = CSTRING(moduleGroupSettings_displayName);
        function = QFUNC(moduleGroupSettings);
        isGlobal = 0;
        author = ECSTRING(common,ACETeam);
        icon = PATHTOF(ui\icon_module_map_gestures_ca.paa);
        class Arguments {
            class leadColor {
                displayName = CSTRING(leadColor_displayName);
                description = CSTRING(leadColor_description);
                typeName = "STRING";
                defaultValue = "0,0,0,0";
            };
            class color {
                displayName = CSTRING(color_displayName);
                description = CSTRING(color_description);
                typeName = "STRING";
                defaultValue = "0,0,0,0";
            };
        };
    };
};
