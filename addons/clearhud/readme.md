# Clear HUD

Blendet den Chat aus.

## Funktionsweise

Solange der Chat ausgeblendet ist, ruft ein Per-Frame-Handler jeden Frame `clearRadio` auf (`fnc_hideChat`). Das ist hier bewusst kein Event:

- Der Missions-Eventhandler `HandleChatMessage` kann zwar Nachrichten blockieren, wird aber für Skript-Nachrichten (`systemChat`, `sideChat` und die anderen Chat-Befehle) gar nicht ausgelöst. Diese blieben sichtbar. Außerdem zählt bei mehreren `HandleChatMessage`-Handlern nur die Rückgabe des zuletzt angelegten.
- `showChat false` blendet das ganze Chatfenster aus, nicht nur die Nachrichten.

`clearRadio` ist ein einzelner, billiger Engine-Befehl. Nachrichten, die während des Ausblendens eingehen, sind auch nach dem Einblenden nicht mehr zu sehen.

## Quellen

Basierd auf *Soldias Clearhud*.

## Maintainer

- Andx
