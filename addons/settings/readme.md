# Settings Loader

Lädt CBA-Einstellungen für verschiedene Mods und ermöglicht das Laden unterschiedlicher Missionsprofile basierend auf einem Missionsparameter.

## Architektur

### Modulares Einstellungssystem

Die CBA-Einstellungen sind in einzelne `.inc`-Dateien aufgeteilt, gruppiert nach Mod oder Funktionsbereich:

- **ACE Settings**: ~50 Dateien für verschiedene ACE-Module (z.B. `ace_medical.inc`, `ace_arsenal.inc`)
- **Mod-spezifische Settings**: Einzelne Dateien für ACRE, CTab, DUI, Lambs, RHS, CUP, etc.
- **Default Settings**: Werden beim Missionsstart automatisch über `fnc_loadDefaultSettings` geladen

### Missionsprofile

- Missionsparameter "TTT Settings Profile" mit drei Optionen: Profile A (Standard), Profile B oder Profile C
- `XEH_postInit.sqf` ruft `fnc_loadSettings` auf, welche den Parameter ausliest und die entsprechende Datei lädt
- Profile A → lädt `cba_settings_a.inc`
- Profile B → lädt `cba_settings_b.inc`
- Profile C → lädt `cba_settings_c.inc`

### Konfiguration der Einstellungen

**Für einzelne Mod-Settings (Default):**

1. Navigiere zu `addons/settings/settings/` und öffne die entsprechende `.inc`-Datei (z.B. `ace_medical.inc`)
2. Passe die Einstellungen direkt in der Datei an
3. Die Änderungen werden beim nächsten Missionsstart automatisch geladen

**Für Missionsprofile:**

1. Öffne das CBA-Einstellungsmenü (ESC → OPTIONEN → SPIEL → ADDONS KONFIGURIEREN)
2. Konfiguriere die gewünschten Einstellungen
3. Exportiere die Einstellungen über den Export-Button
4. Füge die exportierten Einstellungen in `cba_settings_a.inc`, `cba_settings_b.inc` oder `cba_settings_c.inc` ein
5. Wiederhole den Vorgang für die anderen Profile, falls gewünscht

### Funktionsweise

Das Addon lädt Einstellungen in zwei Schritten:

1. **Default Settings** (`fnc_loadDefaultSettings`): Lädt alle modularen `.inc`-Dateien aus dem `settings/`-Ordner, sortiert nach Mods
2. **Missionsprofil** (`fnc_loadSettings`): Liest den Missionsparameter aus und lädt das entsprechende Profil (A, B oder C)

### Technische Details

**Funktionen:**

- `fnc_loadDefaultSettings.sqf` - Lädt alle modularen Default-Settings aus dem `settings/`-Ordner
- `fnc_loadSettings.sqf` - Lädt das profilbasierte Settings-File basierend auf Missionsparameter

**Dateistruktur:**

```php
addons/settings/
├── settings/
│   ├── a3ti.inc                      # A3 Thermal Improvement
│   ├── ace_*.inc                     # ACE Mod Settings (50+ Dateien)
│   ├── acre_core.inc                 # ACRE
│   ├── achilles.inc                  # Achilles
│   ├── bwa3.inc                      # BWMod
│   ├── cba.inc                       # CBA
│   ├── cba_settings_a.inc            # Missionsprofil A
│   ├── cba_settings_b.inc            # Missionsprofil B
│   ├── cba_settings_c.inc            # Missionsprofil C
│   ├── ctab.inc                      # cTab
│   ├── dui.inc                       # DUI Squad Radar
│   ├── lambs.inc                     # Lambs Danger
│   ├── rhs.inc                       # RHS (conditional)
│   ├── cup.inc                       # CUP (conditional)
│   └── ... weitere Mod-Settings
├── functions/
│   ├── fnc_loadDefaultSettings.sqf
│   └── fnc_loadSettings.sqf
└── XEH_postInit.sqf
```

**Ablauf:**

1. `XEH_postInit.sqf` wird beim Missionsstart ausgeführt
2. `fnc_loadDefaultSettings` lädt alle modularen `.inc`-Dateien (außer cba_settings_*.inc)
3. `fnc_loadSettings` liest den Missionsparameter aus (Standard: 0)
4. Das entsprechende Profil wird geladen und überschreibt die Default-Settings
5. Conditional Mods (RHS, CUP) werden nur geladen, wenn sie aktiv sind

**Missionsparameter:**

- Standardwert: 0 (Profil A)
- Werte: 0 = Profile A, 1 = Profile B, 2 = Profile C
- Parameter-Name: `ttt_main_medicalSettings`

Damit der Parameter genutzt werden kann muss er in de description.ext der Mission definiert werden:

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

## Dateien

**Hauptdateien:**

- `functions/fnc_loadDefaultSettings.sqf` - Lädt alle modularen Default-Settings
- `functions/fnc_loadSettings.sqf` - Lädt das Missionsprofil
- `XEH_postInit.sqf` - Initialisierung beim Missionsstart

**Settings:**

- `settings/*.inc` - Modulare Settings-Dateien für verschiedene Mods (80+ Dateien)
- `settings/cba_settings_a.inc` - Missionsprofil A (Standard)
- `settings/cba_settings_b.inc` - Missionsprofil B
- `settings/cba_settings_c.inc` - Missionsprofil C
