# Chat Commands ZEN Modul

Registriert eine "Zu Zeus befördern"-Aktion im ZEN-Kontextmenü, über die ein
Curator per Rechtsklick auf einen Spieler diesen zu Zeus befördern kann,
ohne dass der Zielspieler selbst Chatzugriff oder Adminrechte benötigt.
Nutzt intern dieselbe `ttt_common_fnc_giveZeus`, die auch der
`#zeus`-Chatbefehl im Hauptaddon verwendet - siehe `fnc_zenRegister` im
Hauptaddon und `fnc_giveZeus` in `ttt_common`.

Reine Optional-Abhängigkeit: Wird nur gebaut/geladen, wenn Zeus Enhanced
(genauer `zen_context_menu`) vorhanden ist (`skipWhenMissingDependencies`).

## Abhängigkeiten

- `ttt_chatcommands` (Parent-Komponente)
- `ttt_common`
- `zen_context_menu` (Zeus Enhanced)

## Maintainer

- Andx
