# TTT Tarps (Framework)

Das `ttt_tarps`-Addon stellt die gemeinsame Infrastruktur für alle auflegbaren Tarps des TTT-Mods bereit.
Es wird von folgenden Addons genutzt:

- [Signal Tarp](signal_tarp.md) – Markierung einer Hubschrauber-Landezone
- [Drohnen Tarp](drone_tarp.md) – Markierung eines Drohnen-Landeplatzes
- [Medizinisches Tarp](medic_tarp.md) – mobiles medizinisches Einrichtungsobjekt

## Ablauf

Jedes Tarp-Addon registriert seine Aktionen über `ttt_tarps_fnc_deployableAddActions`.
Danach läuft jede Interaktion wie folgt ab:

```
Spieler öffnet ACE-Eigeninteraktion
  └─ [Tarp-Typ] ── [Farbe A]  ──► Fortschrittsbalken (buildTime)
                ├─ [Farbe B]       └─ Tarp-Objekt wird gespawnt
                └─ ...             └─ Item wird aus Inventar entfernt
                                   └─ Event ttt_tarps_tarpConstructed

Spieler öffnet ACE-Fremdinteraktion am Tarp-Objekt
  └─ [Tarp einpacken]  ──► Fortschrittsbalken (buildTime × 1,5)
                           └─ Tarp-Objekt wird gelöscht
                           └─ Event ttt_tarps_tarpDeconstructed
                           └─ Item wird ins Inventar zurückgelegt
```

Das am Tarp-Objekt gesetzte Objektattribut `ttt_tarps_sourceItem` (Typ: STRING) enthält den
Klassennamen des ursprünglichen Inventar-Items und wird global synchronisiert.

## Öffentliche API – `ttt_tarps_fnc_deployableAddActions`

Registriert alle ACE-Interaktionen für ein neues Tarp-Addon.
Wird typischerweise einmalig in der `XEH_postInit.sqf` aufgerufen.

``` sqf
private _config = createHashMapFromArray [
    // Pflichtfelder
    ["constructId",     "my_addon_construct"],          // Eindeutige ACE-Aktions-ID (Aufbauen)
    ["deconstructId",   "my_addon_deconstruct"],         // Eindeutige ACE-Aktions-ID (Abbauen)
    ["tarpItems", [                                      // Zuordnung Inventar-Item → Tarp-Objekt
        ["my_addon_tarp_Black", "Tarp_01_Large_Black_F"],
        ["my_addon_tarp_Green", "Tarp_01_Large_Green_F"]
    ]],
    ["inUseVar",        "my_addon_inUse"],               // Objektvariable als Sperrmerkmal
    ["buildTime",       10],                             // Aufbauzeit in Sekunden; Abbauzeit = × 1,5
    ["constructText",   "Tarp auslegen..."],              // Text im Fortschrittsbalken (Aufbauen)
    ["deconstructText", "Tarp einpacken..."],             // Text im Fortschrittsbalken (Abbauen)
    ["abortText",       "Abgebrochen"],                  // Hinweis bei Abbruch
    ["hintErrorNoSpace","Kein Platz vorhanden"],          // Hinweis wenn kein Platz
    ["hintLoaded",      "Tarp wurde eingepackt"],         // Hinweis nach erfolgreichem Abbauen

    // Optionale Felder
    ["useAnimation",   true],                            // default: true
    ["animation",      "Acts_carFixingWheel"],            // default: "Acts_carFixingWheel"
    ["onConstruct", {                                    // Callback nach dem Aufbauen (lokal)
        params ["_object", "_caller", "_config"];
        // ...
    }],
    ["onDeconstruct", {                                  // Callback vor dem Löschen (lokal)
        params ["_target", "_caller", "_config"];
        // ...
    }]
];

[_config] call ttt_tarps_fnc_deployableAddActions;
```

### Parametertabelle

| Schlüssel | Typ | Pflicht | Beschreibung |
| - | - | - | - |
| `constructId` | STRING | ✓ | Eindeutige ID der ACE-Aufbau-Aktion |
| `deconstructId` | STRING | ✓ | Eindeutige ID der ACE-Abbau-Aktion |
| `tarpItems` | ARRAY | ✓ | `[[itemClass, objectClass], ...]` – Zuordnung Item → Tarp-Objekt |
| `inUseVar` | STRING | ✓ | Objektvariable, die während einer Aktion gesetzt wird, um gleichzeitige Aktionen zu sperren |
| `buildTime` | NUMBER | ✓ | Aufbauzeit in Sekunden; Abbauzeit beträgt das 1,5-fache |
| `constructText` | STRING | ✓ | Text im Fortschrittsbalken beim Aufbauen |
| `deconstructText` | STRING | ✓ | Text im Fortschrittsbalken beim Abbauen |
| `abortText` | STRING | ✓ | Hinweis bei Abbruch |
| `hintErrorNoSpace` | STRING | ✓ | Hinweis wenn kein Platz zum Auslegen vorhanden |
| `hintLoaded` | STRING | ✓ | Hinweis nach erfolgreichem Einpacken |
| `useAnimation` | BOOLEAN | – | Soll der Spieler eine Animation abspielen? (default: `true`) |
| `animation` | STRING | – | Name der Animations-Klasse (default: `"Acts_carFixingWheel"`) |
| `onConstruct` | CODE | – | `[_object, _caller, _config]` – wird lokal nach dem Spawnen aufgerufen |
| `onDeconstruct` | CODE | – | `[_target, _caller, _config]` – wird lokal vor dem Löschen aufgerufen |

## Events

Beide Ereignisse werden als **lokales CBA-Event** auf der Maschine des auslösenden Spielers gefeuert.

### `ttt_tarps_tarpConstructed`

Wird ausgelöst, nachdem der Tarp erfolgreich aufgebaut wurde.

``` sqf
["ttt_tarps_tarpConstructed", {
    params ["_object", "_caller", "_itemClassname", "_config"];
    // _object  - das aufgebaute Tarp-Objekt
    // _caller  - der Spieler
    // _itemClassname - Klassenname des benutzten Inventar-Items
    // _config  - die Konfigurations-HashMap
}] call CBA_fnc_addEventHandler;
```

### `ttt_tarps_tarpDeconstructed`

Wird ausgelöst, nachdem der Abbau bestätigt wurde, aber **bevor** das Objekt gelöscht wird.

``` sqf
["ttt_tarps_tarpDeconstructed", {
    params ["_target", "_caller", "_itemClassname", "_config"];
    // _target        - das noch existierende Tarp-Objekt
    // _caller        - der Spieler
    // _itemClassname - Klassenname des zurückgegebenen Inventar-Items
    // _config        - die Konfigurations-HashMap
}] call CBA_fnc_addEventHandler;
```

## Maintainer

- Andx
