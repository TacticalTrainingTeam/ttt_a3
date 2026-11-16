# Clear HUD

Blendet den Chat aus.

## Funktionsweise

Solange der Chat ausgeblendet ist, blockiert ein `HandleChatMessage`-Missions-Eventhandler jede neue Nachricht (Rückgabe `true`). Der Handler wird nur beim Ausblenden angelegt und beim Einblenden wieder entfernt (`fnc_hideChat`), damit er `HandleChatMessage`-Handler anderer Mods nicht dauerhaft überlagert. Da er nur neue Nachrichten abfängt, leert `clearRadio` beim Ausblenden einmalig die bereits angezeigten.

Früher lief dafür ein Per-Frame-Handler, der jeden Frame `clearRadio` aufrief. Das Ergebnis ist dasselbe: Nachrichten, die während des Ausblendens eingehen, sind auch nach dem Einblenden nicht mehr zu sehen.

## Quellen

Basierd auf *Soldias Clearhud*.

## Maintainer

- Andx
