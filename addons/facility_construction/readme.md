# Facility Construction

Interne Bibliothek für Addons, die über eine ACE-Fremdinteraktion ein Objekt (z.B. Zelt, Werkstatt) in der Nähe eines Fahrzeugs auf- und wieder abbauen lassen. Wird aktuell von `medic_vehicle` und `repair_vehicle` genutzt, hat selbst aber keine eigenen Einstellungen oder Inhalte - jedes nutzende Addon übergibt seine eigene Konfiguration (Fahrzeugliste, Facility-Objekt, Texte, Animation, ...) als HashMap an `[_context] call ttt_facility_construction_fnc_addActions;`.

## Funktionsweise

- Die Actions (Auf-/Abbauen) werden über `ace_interact_menu_fnc_createAction`/`AddActionToClass` an die unterstützten Fahrzeug- bzw. das Facility-Objekt gehängt, wobei der Context als `params` mitgegeben wird und so in allen Callbacks verfügbar ist (siehe `ace_interact_menu_this_convention` in den Projekt-Notizen).
- Beim Aufbau wird das Facility-Objekt zunächst bei `[0,0,0]` erzeugt, dann anhand von `boundingBoxReal` von Fahrzeug und Facility ein passender Abstand hinter dem Fahrzeug berechnet und das Objekt dorthin verschoben.
- Fahrzeug und Facility werden beim Aufbau direkt gegenseitig referenziert (`<varPrefix>_vehicle`/`<varPrefix>_facility` als Objekt-Variablen) statt bei Bedarf über eine Umkreissuche wiedergefunden zu werden.
- `setFuel`/`setVelocity`/`allowDamage` laufen über CBA-Events (`CBA_fnc_targetEvent`) statt `remoteExec`.
- `fnc_canConstruct.sqf` erkennt zusätzlich den alten, addon-spezifischen Variablennamen (z.B. `ttt_medic_vehicle_hasTent`), falls ein nutzendes Addon einen `legacyHasFacilityVar`-Eintrag im Context setzt - damit funktionieren vor der Umstellung auf dieses Framework gesetzte Init-Variablen weiterhin.

## Maintainer

- Andx
- EinStein
