# Common

Enthält Funktionen und Assets für die TTT-Mod.

## addIntel

`fnc_addIntel` läuft auf jedem Client (`initPlayerLocal.sqf`) und fügt dort lokal eine Aktion hinzu. Die ID dieser Aktion wird lokal am Objekt gespeichert (`ttt_common_intelActionId`), da Action-IDs pro Maschine unterschiedlich sein können.

Beim Aufheben wird genau ein CBA-Event ausgelöst (`ttt_common_intelFound`, `CBA_fnc_globalEvent`). Der Handler `fnc_intelFound` läuft auf allen Maschinen:

- Maschinen mit Interface: Tagebucheintrag anlegen, Hint anzeigen, lokale Aktion entfernen. Das gilt damit auch für Spectator/Zeus, nicht nur für Spielereinheiten.
- Server: `hideObjectGlobal` (funktioniert nur dort), falls das Objekt ausgeblendet werden soll.

Das Event ist bewusst nicht JIP-fähig: Spätere Spieler erhalten den Eintrag über die öffentliche Variable `ttt_infoShared`, die in `fnc_addIntel` geprüft wird. Ein JIP-Event würde den Eintrag doppelt anlegen.

## Maintainer

- Andx
- EinStein
