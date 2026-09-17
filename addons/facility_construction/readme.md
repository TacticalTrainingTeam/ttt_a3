# Facility Construction

Interne Bibliothek für Addons, die über eine ACE-Fremdinteraktion ein Objekt (z.B. Zelt, Werkstatt) in der Nähe eines Fahrzeugs auf- und wieder abbauen lassen. Wird aktuell von `medic_vehicle` und `repair_vehicle` genutzt, hat selbst aber keine eigenen Einstellungen oder Inhalte - jedes nutzende Addon übergibt seine eigene Konfiguration (Fahrzeugliste, Facility-Objekt, Texte, Animation, ...) als HashMap an `[_context] call ttt_facility_construction_fnc_addActions;`.

## Context-HashMap (Argument 0 von `fnc_addActions`)

Jedes nutzende Addon baut seinen eigenen Context per `createHashMapFromArray` und übergibt ihn an `[_context] call ttt_facility_construction_fnc_addActions;`. Derselbe Context wird danach als `params`-Eintrag durch alle Callbacks (Condition/Statement der ACE-Action, Progressbar, Construct/Deconstruct, Cancel) weitergereicht, siehe `ace_interact_menu_this_convention` in den Projekt-Notizen. Erwartete Keys:

| Key | Typ | Beschreibung |
| --- | --- | --- |
| `varPrefix` | STRING | Präfix für alle Objekt-Variablen, die dieses Framework setzt/liest (z.B. `ttt_medic_vehicle`), kombiniert mit Suffixen wie `_hasFacility`, `_vehicle`, `_facility`, `_inUse`, `_fuel`. |
| `legacyHasFacilityVar` | STRING, optional (Default `""`) | Alter, addon-spezifischer Variablenname von vor dem Refactoring (z.B. `ttt_medic_vehicle_hasTent`), der in `fnc_canConstruct.sqf` als Fallback gelesen wird, solange die neue `varPrefix`-Variable noch nicht gesetzt wurde. |
| `enable` | BOOLEAN | Ob die Actions (wieder) registriert werden sollen. Bei `false` läuft in `fnc_addActions.sqf` nur der Entfernungs-Schritt, es wird nichts neu angehängt. |
| `supportedVehicles` | ARRAY of STRING | Fahrzeug-Klassennamen, an die die Aufbau-Action gehängt wird. |
| `facilityObject` | STRING | Klassenname des beim Aufbau erzeugten Objekts; gleichzeitig die Klasse, an die die Abbau-Action gehängt wird. |
| `buildTime` | NUMBER | Dauer des ACE-Progressbars (Sekunden) für Auf- und Abbau. |
| `useAnimation` | BOOLEAN | Ob der Spieler während des Progressbars `buildAnimation` abspielt. |
| `buildAnimation` | STRING | Animation, die per `playMove` abgespielt wird, wenn `useAnimation` gesetzt ist. |
| `facilityMarkerVar` | STRING | Globale Objekt-Variable, die beim Aufbau auf dem Facility-Objekt auf `true` gesetzt wird (z.B. `ace_medical_isMedicalFacility`), damit andere Systeme (z.B. ACE Medical/Repair) das Objekt erkennen. |
| `actionIdConstruct` | STRING | Eindeutige ACE-Fremdinteraktions-ID der Aufbau-Action; wird auch als Schlüssel beim Entfernen genutzt. |
| `actionIdDeconstruct` | STRING | Eindeutige ACE-Fremdinteraktions-ID der Abbau-Action; wird auch als Schlüssel beim Entfernen genutzt. |
| `strings` | HASHMAP | Anzeigetexte mit den Keys `actionConstruct`/`actionDeconstruct` (Menü-Beschriftungen), `abort` (Text bei Abbruch des Progressbars), `hintErrorNoSpace` (kein Platz zum Aufbauen) und `hintLoaded` (Hinweis beim Abbau). |
| `extraConstructFx` | CODE, optional (Default `{}`) | Wird nach dem Aufbau mit `[_facility]` aufgerufen für addon-spezifisches Setup, z.B. die Tür-/Dach-/Solarpanel-Animationen des Sanitäts-Zelts. |

## Funktionsweise

- Die Actions (Auf-/Abbauen) werden über `ace_interact_menu_fnc_createAction`/`AddActionToClass` an die unterstützten Fahrzeug- bzw. das Facility-Objekt gehängt, wobei der Context als `params` mitgegeben wird und so in allen Callbacks verfügbar ist (siehe `ace_interact_menu_this_convention` in den Projekt-Notizen).
- Beim Aufbau wird das Facility-Objekt zunächst bei `[0,0,0]` erzeugt, dann anhand von `boundingBoxReal` von Fahrzeug und Facility ein passender Abstand hinter dem Fahrzeug berechnet und das Objekt dorthin verschoben.
- Fahrzeug und Facility werden beim Aufbau direkt gegenseitig referenziert (`<varPrefix>_vehicle`/`<varPrefix>_facility` als Objekt-Variablen) statt bei Bedarf über eine Umkreissuche wiedergefunden zu werden.
- `setFuel`/`setVelocity`/`allowDamage` laufen über CBA-Events (`CBA_fnc_targetEvent`) statt `remoteExec`.
- `fnc_canConstruct.sqf` erkennt zusätzlich den alten, addon-spezifischen Variablennamen (z.B. `ttt_medic_vehicle_hasTent`), falls ein nutzendes Addon einen `legacyHasFacilityVar`-Eintrag im Context setzt - damit funktionieren vor der Umstellung auf dieses Framework gesetzte Init-Variablen weiterhin.

## Maintainer

- Andx
- EinStein
