class CBA_Extended_EventHandlers_base;

class CfgVehicles
{
    class LandVehicle;

    class Tank: LandVehicle
    {
        class NewTurret;
    };

    class Tank_F: Tank
    {
        class Components;
        class EventHandlers;
        class ViewOptics;
        class Turrets
        {
            class MainTurret: NewTurret
            {
                class ViewOptics;
                class Turrets
                {
                    class CommanderOptics;
                };
            };
        };
    };

    class Redd_Marder_1A5_base: Tank_F
    {
        //maximumLoad = 10000;
        driverWeaponsInfoType = QEGVAR(402_rnt_Main,RSC_Driver);
        disableSoundAttenuation = 0;
        attenuationEffectType = "TankAttenuation";
        driverCompartments = "Compartment1";
        cargoCompartments[] = {"Compartment2"};
        //enableGPS = 0;

        ace_vehicles_engineStartDelay = 5;

        smokeLauncherGrenadeCount = 3;
        smokeLauncherAngle = 120;

        class TransportBackpacks
        {
            class _xx_milan_Bag
            {
                backpack = "Redd_Milan_Static_Barrel";
                count = 5;
            };
        };

        class AcreIntercoms
        {
            class Intercom_1
            {
                displayName = ECSTRING(402_common,BV);
                shortName = ECSTRING(402_common,BVShort);
                allowedPositions[] = {"crew"};
                disabledPositions[] = {};
                limitedPositions[] = {{"cargo", "all"}, {"ffv", "all"}};
                numLimitedPositions = 3;
                masterPositions[] = {};
                connectedByDefault = 1;
            };
        };

        acre_hasInfantryPhone = 1;
        acre_infantryPhoneDisableRinging = 1;
        acre_infantryPhoneCustomRinging[] = {};
        acre_infantryPhoneIntercom[] = {"all"};
        acre_infantryPhoneControlActions[] = {"all"};
        acre_eventInfantryPhone = QEFUNC(402_common,noApiFunction);
        acre_infantryPhonePosition[] = {-1.23, -3.37, -0.78};

        class AcreRacks
        {
            class Rack_1
            {
                displayName = ECSTRING(402_common,RackA);
                shortName = ECSTRING(402_common,RackAShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"commander","gunner","driver"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };

            class Rack_2
            {
                displayName = ECSTRING(402_common,RackB);
                shortName = ECSTRING(402_common,RackBShort);
                componentName = "ACRE_SEM90";
                allowedPositions[] = {"commander","gunner","driver"};
                disabledPositions[] = {};
                defaultComponents[] = {};
                mountedRadio = "ACRE_SEM70";
                isRadioRemovable = 0;
                intercom[] = {"all"};
            };
        };

        class Turrets: Turrets
        {
            class MainTurret: MainTurret
            {
                discreteDistanceInitIndex = 6; // Set initial gun zeoring to 800 m
                lockWhenDriverOut = 0; // Don't lock turret when driver is turned out
                stabilizedInAxes = 0;
                turretInfoType = QEGVAR(402_rnt_Main,RSC_Turret);
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment3";

                weapons[] = {
                    "Redd_Gesichert",
                    "Redd_MK20",
                    //QEGVAR(402_rnt_Main,mg3), // Modified reload time for Rearm
                    QGVAR(SmokeLauncher) // Add SmokeLauncher to gunner
                };
                magazines[] = {
                    "Redd_MK20_HE_Mag",
                    "Redd_MK20_AP_Mag",
                    "Redd_Mg3_Mag",
                    "Redd_SmokeLauncherMag" // PzGrenBtl402_SmokeLauncher still uses Redds Mags
                };

                // Remove NVG
                class ViewOptics: ViewOptics
                {
                    //visionMode[] = {"Normal", "TI"};
                };

                // Remove NVG
                class OpticsIn
                {
                    class Day1
                    {
                        //visionMode[] = {"Normal"};
                    };
                    class Day2
                    {
                        //visionMode[] = {"Normal"};
                    };
                };

                class Turrets: Turrets
                {
                    class CommanderOptics: CommanderOptics
                    {
                        stabilizedInAxes = 0;
                        turretInfoType = QEGVAR(402_rnt_Main,RSC_Turret);
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment3";

                        magazines[] = {};

                    };

                    class CargoTurret_Links: NewTurret
                    {
                        stabilizedInAxes = 0;
                        disableSoundAttenuation = 0;
                        soundAttenuationTurret = "TankAttenuation";
                        gunnerCompartments= "Compartment2";
                    };
                };
            };

            class Redd_Milan: NewTurret
            {
                magazines[] = {}; //Waffe ist direkt nach dem Aufbau leer, Patrone muss manuell geladen werden
                stabilizedInAxes = 0;
                turretInfoType = QEGVAR(402_rnt_Main,RSC_Milan);
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment4";

                class OpticsIn
                {
                    class Day1
                    {
                        visionMode[] = {"Normal"};
                    };

                    class Day2
                    {
                        visionMode[] = {"Normal"};
                    };
                };

            };

            class Luchs_Bino_Turret_Com: NewTurret
            {
                stabilizedInAxes = 0;
                disableSoundAttenuation = 0;
                soundAttenuationTurret = "TankAttenuation";
                gunnerCompartments= "Compartment4";

            };
        };

        class AnimationSources
        {
            class heck_luke_rotation
            {
                source = "user";
                initPhase = 0;
                animPeriod = 3;
                sound = "Redd_Heckluke_sound";
                soundPosition = "HecklukePoint";
            };

            class ReloadMagazine
            {
                source = "user"; //Hide-Animation auf User-Kontrolle umschreiben, um sie über Eventhandler kontrollieren zu können
                initPhase = 1; //Damit die Patrone beim ersten Aufbau versteckt ist
                AnimPeriod = 0;
            };

            class Spiegel_Source
            {
                source = "user";
                initPhase = 1; // eingeklappt
                animPeriod = 2;
            };

            class Redd_Sandsacke_Links
            {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };

            class Redd_Sandsacke_Rechts
            {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };

            class Redd_sandsackrolle_links
            {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };

            class Redd_sandsackrolle_rechts
            {
                source = "user";
                initPhase = 0;
                animPeriod = 0;
            };
        };

        class EventHandlers: EventHandlers
        {
            fired = QUOTE(_this call FUNC(handleFired); _this call redd_fnc_Marder_Fired); //Patrone an der Waffe verstecken und Magazin entfernen, gleichzeitig RnT Funktion weiterhin aufrufen
            class CBA_Extended_EventHandlers: CBA_Extended_EventHandlers_base {};
        };

        class UserActions
        {
            class heckluke_auf
            {
                displayName = CSTRING(openRamp);
                displayNameDefault = CSTRING(openRamp);
                position = "HecklukePoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(ACE_player in [driver this, gunner this, this turretUnit [0, 3]]) && (this animationSourcePhase 'heck_luke_rotation' == 0) && (alive this)";
                statement = QUOTE(this call FUNC(openRamp));
            };

            class heckluke_zu
            {
                displayName = CSTRING(closeRamp);
                displayNameDefault = CSTRING(closeRamp);
                position = "HecklukePoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                condition = "(ACE_player in [driver this, gunner this, this turretUnit [0, 3]]) && (this animationSourcePhase 'heck_luke_rotation' > 0) && (alive this)";
                statement = QUOTE(this call FUNC(closeRamp));
            };

            class Bino_in
            {
                displayName = "$STR_Hoeher_steigen";
                displayNameDefault = "$STR_Hoeher_steigen";
                position = "actionPoint";
                radius = 25;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "turnOut";
                condition = "(this turretUnit [0, 0] isEqualTo ACE_player) && (this animationSourcePhase 'hatchCommander' > 0) && (alive this)";
                statement = "ACE_player action ['moveToTurret', this, [2]]; [this, [[0, 0], true]] remoteExecCall ['lockTurret']; this setVariable ['Redd_Marder_Bino_In', true, true];";
            };

            class Bino_out
            {
                displayName = "$STR_Tiefer_steigen";
                displayNameDefault = "$STR_Tiefer_steigen";
                position = "actionPoint";
                radius = 25;
                onlyforplayer = 1;
                showWindow = 0;
                shortcut = "turnIn";
                condition = "(this turretUnit [2] isEqualTo ACE_player) && (alive this)";
                statement = "ACE_player action ['moveToTurret', this, [0,0]]; [this, [[0, 0], false]] remoteExecCall ['lockTurret']; this setVariable ['Redd_Marder_Bino_In', false, true];";
            };

            class GetOutHatchCommander
            {
                displayName = CSTRING(getOutHatch);
                displayNameDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getout_ca.paa' size='1.8' shadow=2 />";
                position = "actionsPoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                priority = 6.2;
                shortcut = "GetOut";
                condition = "(alive this) && {this turretUnit [0, 0] isEqualTo ACE_player} && {isTurnedOut ACE_player}";
                statement = QUOTE([ARR_3(this,ACE_player,'commander')] call FUNC(getOutHatch));
            };

            class GetOutHatchDriver: GetOutHatchCommander
            {
                condition = "(alive this) && (this turretUnit [-1] isEqualTo ACE_player) && (isTurnedOut ACE_player)";
                statement = QUOTE([ARR_3(this,ACE_player,'driver')] call FUNC(getOutHatch));
            };

            class GetOutHatchLeft: GetOutHatchCommander
            {
                condition = "(alive this) && (this turretUnit [0, 1] isEqualTo ACE_player) && (isTurnedOut ACE_player)";
                statement = QUOTE([ARR_3(this,ACE_player,'left')] call FUNC(getOutHatch));
            };

            class GetOutHatchRight: GetOutHatchCommander
            {
                condition = "(alive this) && (this turretUnit [0, 2] isEqualTo ACE_player) && (isTurnedOut ACE_player)";
                statement = QUOTE([ARR_3(this,ACE_player,'right')] call FUNC(getOutHatch));
            };

            class GetOutHatchMiddle: GetOutHatchCommander
            {
                condition = "(alive this) && (this turretUnit [0, 3] isEqualTo ACE_player) && (isTurnedOut ACE_player)";
                statement = QUOTE([ARR_3(this,ACE_player,'middle')] call FUNC(getOutHatch));
            };

            class MovePassengerOneToHatchLeft
            {
                displayName = CSTRING(moveToHatch);
                displayNameDefault = "<img image='\A3\ui_f\data\igui\cfg\actions\getingunner_ca.paa' size='1.8' shadow=2 />";
                position = "actionsPoint";
                radius = 10;
                onlyforplayer = 1;
                showWindow = 0;
                priority = 1.35;
                shortcut = "SwapGunner";
                condition = "(alive this) && (this getCargoIndex ACE_player isEqualTo 1) && (isNull (this turretunit [0, 1]))";
                statement = "ACE_player action ['moveToTurret', this, [0, 1]]";
            };

            class MovePassengerTwoToHatchLeft: MovePassengerOneToHatchLeft
            {
                condition = "(alive this) && (this getCargoIndex player isEqualTo 2) && (isNull (this turretunit [0, 1]))";
                statement = "ACE_player action ['moveToTurret', this, [0, 1]]";
            };

            class MovePassengerThreeToHatchRight: MovePassengerOneToHatchLeft
            {
                condition = "(alive this) && (this getCargoIndex ACE_player isEqualTo 3) && (isNull (this turretunit [0, 2]))";
                statement = "ACE_player action ['moveToTurret', this, [0, 2]]";
            };

            //delete heckluke_auf_2;
            //delete heckluke_zu_2;

            delete milan_auf;
            delete milan_ab;

            delete orangelicht_auf;
            delete orangelicht_ab;
            delete Orangelicht_an;
            delete Orangelicht_aus;

            // delete Redd_removeflag;
            // delete Redd_redFlag;
            // delete Redd_greenFlag;
            // delete Redd_blueFlag;

            delete Tarnnetz_Fzg_aufbauen;
            delete Tarnnetz_Fzg_abbauen;
            delete Tarnnetz_Boden_aufbauen;
            delete Tarnnetz_Boden_abbauen;

            // delete Spiegel_ausklappen;
            // delete Spiegel_einklappen;

            // delete Sandsacke_auf_Links;
            // delete Sandsacke_auf_Rechts;
            // delete Sandsacke_ab_Links;
            // delete Sandsacke_ab_Rechts;
        };

        class Attributes
        {
            class GVAR(RampAttribute)
            {
                displayName = CSTRING(openRamp);
                tooltip = CSTRING(openRamp3DENTooltip);
                property = QGVAR(RampAttribute);
                control = "Checkbox";
                expression = "_this setVariable ['%s', _value];";
                defaultValue = 0;
                typeName = "BOOL";
            };
        };
    };
};