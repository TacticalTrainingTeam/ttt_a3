# Settings

Lädt CBA-Einstellungen für verschiedene Mods und ermöglicht das Laden unterschiedlicher Missionsprofile basierend auf einem Missionsparameter.

## Funktion

Dieses Addon bietet ein modulares System zum Laden von CBA-Einstellungen:

1. **Default Settings**: Automatisches Laden von über 80 modularen Einstellungsdateien für verschiedene Mods beim Missionsstart
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

## Maintainer

- Andx
