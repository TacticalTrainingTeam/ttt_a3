# Settings

Lädt CBA-Einstellungen für verschiedene Mods und ermöglicht das Laden unterschiedlicher Missionsprofile basierend auf einem Missionsparameter.

## Funktion

Dieses Addon bietet ein modulares System zum Laden von CBA-Einstellungen:

1. **Default Settings**: Automatisches Laden von über 80 modularen Einstellungsdateien (`.inc`) für verschiedene Mods beim Missionsstart
2. **Missionsprofile**: Missionsangepasste Einstellungsprofile, die die Default-Settings überschreiben können

### Modulare Settings-Architektur

Alle CBA-Einstellungen sind in einzelne `.inc`-Dateien aufgeteilt, gruppiert nach Mod oder Funktionsbereich:

- **ACE Mod**: ~50 separate Dateien für verschiedene ACE-Module (Medical, Arsenal, Zeus, etc.)
- **Weitere Mods**: Einzelne Dateien für ACRE, CTab, DUI Squad Radar, Lambs Danger, etc.
- **Conditional Loading**: RHS und CUP Settings werden nur geladen, wenn die Mods aktiv sind

**Vorteile:**
- Übersichtliche Struktur und einfache Wartung
- Gezielte Anpassung einzelner Mod-Bereiche ohne große Dateien zu durchsuchen
- Wiederverwendbarkeit einzelner Settings-Konfigurationen

### Mission Parameter

Beim Start einer Mission steht der Parameter **TTT Settings Profile** im Missionsparameter-Menü zur Verfügung. Dieser Parameter hat drei Optionen:

- **Profile A** (Standard): Lädt Einstellungen aus `cba_settings_a.inc` - KAM Standard Settings
- **Profile B**: Lädt Einstellungen aus `cba_settings_b.inc` - KAM Einfach (schnellere Behandlungszeiten, längere Lifetime)
- **Profile C**: Lädt Einstellungen aus `cba_settings_c.inc` - Benutzerdefiniert

Die Missionsprofile überschreiben die Default-Settings und ermöglichen es Missionsbauern, angepasste Einstellungen für verschiedene Szenarien zu nutzen.

## Anwendungsbeispiele

### Missionsprofile

- **Trainingsmissionen**: Profil A mit Standard-Settings, Profil B mit vereinfachter Medizin
- **PvP vs. Coop**: Profil A für Coop mit realistischer Medizin, Profil B für PvP mit schnelleren Heilzeiten
- **Verschiedene Schwierigkeitsgrade**: Profile mit unterschiedlichen ACE Medical und AI-Einstellungen

### Modulare Settings

- **Mod-Updates**: Anpassung einzelner Mod-Settings ohne große CBA-Exports
- **Standardisierung**: Einheitliche TTT-Standardeinstellungen über alle Missionen
- **Testing**: Schnelles Testen einzelner Mod-Einstellungen

## Technische Details

### Ladereihenfolge

1. Mission startet → `XEH_postInit.sqf` wird ausgeführt
2. `fnc_loadDefaultSettings` lädt alle modularen `.inc`-Dateien aus `settings/`
3. `fnc_loadSettings` liest Missionsparameter und lädt das entsprechende Profil
4. Profilbasierte Settings überschreiben Default-Settings

### Dateien

**Funktionen:**
- `fnc_loadDefaultSettings.sqf` - Lädt ~80 modulare Settings-Dateien
- `fnc_loadSettings.sqf` - Lädt Missionsprofil basierend auf Parameter

**Settings:**
- `settings/*.inc` - Modulare Default-Settings für alle Mods
- `settings/cba_settings_[a|b|c].inc` - Missionsprofile

## Maintainer

- Andx
- TTT Development Team
