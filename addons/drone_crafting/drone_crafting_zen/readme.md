# FPV-Drohnenbau ZEN Modul

Registriert ein "TTT - FPV-Drohnenbau"-Untermenü im ZEN-Kontextmenü (nur auf Objekten mit
Laderaum, keine Einheiten), über das Curatoren während der Mission ein Objekt als
Materialfahrzeug festlegen (mit Startbestand oder unter Beibehaltung des Inventars), es auf den
Startbestand auffüllen oder die Markierung wieder entfernen können. Nutzt dieselben öffentlichen
Funktionen wie das Eden-Modul und die Script-API (`fnc_setVehicle`, `fnc_restock`,
`fnc_removeVehicle`), siehe `fnc_zenRegister` im Hauptaddon.

Reine Optional-Abhängigkeit: wird nur geladen, wenn Zeus Enhanced (`zen_context_menu`) und das
Hauptaddon geladen sind (`skipWhenMissingDependencies`).

## Abhängigkeiten

- `ttt_drone_crafting` (Parent-Komponente)
- `zen_context_menu` (Zeus Enhanced)
- `ace_zeus` (Rückmeldungen im Zeus-Interface)

## Maintainer

- Andx
