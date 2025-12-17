# Settings Loader

Lädt unterschiedliche CBA-Einstellungsprofile basierend auf einem Missionsparameter.

## Funktion

Dieses Addon ermöglicht es, verschiedene CBA-Einstellungen (CBA Settings) für eine Mission zu laden, je nachdem welcher Wert für den Missionsparameter ausgewählt wurde. Dies ist besonders nützlich für Missionen, die unterschiedliche Einstellungen für verschiedene Spielmodi oder Schwierigkeitsgrade benötigen.

### Mission Parameter

Beim Start einer Mission steht der Parameter **TTT Settings Profile** im Missionsparameter-Menü zur Verfügung. Dieser Parameter hat zwei Optionen:

- **Profile A** (Standard): Lädt Einstellungen aus `cba_settings_a.sqf`
- **Profile B**: Lädt Einstellungen aus `cba_settings_b.sqf`

### Konfiguration der Einstellungen

1. Öffne das CBA-Einstellungsmenü (ESC → OPTIONEN → SPIEL → ADDONS KONFIGURIEREN)
2. Konfiguriere die gewünschten Einstellungen
3. Exportiere die Einstellungen über den Export-Button
4. Füge die exportierten Einstellungen in `cba_settings_a.sqf` oder `cba_settings_b.sqf` ein
5. Wiederhole den Vorgang für das andere Profil, falls gewünscht

### Funktionsweise

Das Addon liest beim Missionsstart den Missionsparameter und lädt die entsprechende Einstellungsdatei:

1. Der Missionsparameter wird via `BIS_fnc_getParamValue` ausgelesen
2. Basierend auf dem Wert (0 oder 1) wird die entsprechende Datei ausgewählt
3. Die Datei wird während `postInit` geladen, nachdem CBA vollständig initialisiert wurde
4. Die Einstellungen überschreiben die Standard-CBA-Einstellungen

### Technische Details

**Dateien:**

- `cba_settings_a.sqf` - Einstellungen für Profil A
- `cba_settings_b.sqf` - Einstellungen für Profil B
- `functions/fnc_loadSettings.sqf` - Hauptfunktion zum Laden der Einstellungen

**Ablauf:**

- Die Einstellungen werden während `XEH_postInit` geladen
- Falls eine Einstellungsdatei fehlt, wird eine Warnung geloggt, die Mission läuft aber weiter
- Der Missionsparameter hat standardmäßig den Wert 0 (Profil A)

**Missionsparameter-Definition:**

Der Parameter wird in `CfgParams.hpp` definiert:

```cpp
class CfgParams {
    class GVARMAIN(settingsProfile) {
        title = "TTT Settings Profile";
        values[] = {0, 1};
        texts[] = {"Profile A", "Profile B"};
        default = 0;
    };
};
```

### Beispiel für Einstellungsdateien

Die CBA-Einstellungen werden im typischen CBA-Format gespeichert:

```sqf
// cba_settings_a.sqf
force force acex_headless_enabled = true;
force force acex_headless_delay = 15;
force force acex_viewrestriction_mode = 0;
// ... weitere Einstellungen
```

## Anwendungsbeispiele

- **Trainingsmissionen**: Profil A mit aktivierter Hilfe, Profil B im Realismus-Modus
- **PvP vs. Coop**: Unterschiedliche Respawn-Einstellungen und Sichtweiten
- **Day/Night Missionen**: Angepasste Beleuchtungs- und NVG-Einstellungen

## Maintainer

- TTT Development Team
