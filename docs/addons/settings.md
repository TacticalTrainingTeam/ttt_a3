# Settings

Lädt CBA-Einstellungen für verschiedene Mods und ermöglicht das Laden unterschiedlicher Missionsprofile basierend auf einem Missionsparameter.

## Mission Parameter

Beim Start einer Mission steht der Parameter **TTT Settings Profile** im Missionsparameter-Menü zur Verfügung. Dieser Parameter hat drei Optionen:

- **Profile A** (Standard): Lädt Einstellungen aus `cba_settings_a.inc` - KAM Standard Settings
- **Profile B**: Lädt Einstellungen aus `cba_settings_b.inc` - KAM Einfach (schnellere Behandlungszeiten, längere Lifetime)
- **Profile C**: Lädt Einstellungen aus `cba_settings_c.inc` - Training (KI Bewusstlosigkeit aktiviert)

Die Missionsprofile überschreiben die Default-Settings und ermöglichen es Missionsbauern, angepasste Einstellungen für verschiedene Szenarien zu nutzen.

Damit der Parameter genutzt werden kann muss er in der description.ext der Mission definiert werden:

```c++
class Params {
    class ttt_main_medicalSettings {
        title = "TTT Medic Settings";
        values[] = {0, 1, 2};
        texts[] = {"KAM Standard", "KAM Einfach", "KAM Training"};
        default = 0;
    };
};
```

## Maintainer

- Andx
