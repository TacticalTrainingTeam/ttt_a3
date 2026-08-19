# Resupply ZEN Modul

Registriert ein "Nachschub"-Untermenü im ZEN-Kontextmenü, über das Curatoren
eine Kiste direkt an der angeklickten Position anfordern können, ohne zuvor
eines der Zeus-Module aus dem Support-Menü zu platzieren. Nutzt intern
dieselbe `ttt_resupply_fnc_spawnCrate`, die auch die Zeus-Module und die
ACE-Depot-Aktion verwenden - siehe `fnc_zenRegisterContextMenu` und
`fnc_zeusSpawnCrate` im Hauptaddon.

Reine Optional-Abhängigkeit: Wird nur gebaut/geladen, wenn Zeus Enhanced
(genauer `zen_context_menu`) vorhanden ist (`skipWhenMissingDependencies`).

## Abhängigkeiten

- `ttt_resupply` (Parent-Komponente)
- `zen_context_menu` (Zeus Enhanced)

## Maintainer

- Andx
