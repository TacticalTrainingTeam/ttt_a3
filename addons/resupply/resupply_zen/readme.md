# Resupply ZEN Modul

Registriert ein "Nachschub"-Untermenü im ZEN-Kontextmenü, über das Curatoren
eine Kiste direkt an der angeklickten Position anfordern können, ohne zuvor
eines der Zeus-Module aus dem Support-Menü zu platzieren. Nutzt intern
dieselbe `ttt_resupply_fnc_spawnCrate`, die auch die Zeus-Module und die
ACE-Depot-Aktion verwenden - siehe `fnc_zenRegisterContextMenu` und
`fnc_zeusSpawnCrate` im Hauptaddon.

Zusätzlich enthält dasselbe Untermenü **Als Nachschub-Depot markieren** und
**Nachschub-Depot-Markierung entfernen**, um ein anvisiertes Objekt live als
Depot zu markieren bzw. die Markierung wieder zu entfernen (setzt/löscht
dieselbe `ttt_resupply_container`-Variable, die auch per Init-Feld gesetzt
werden kann).

Reine Optional-Abhängigkeit: Wird nur gebaut/geladen, wenn Zeus Enhanced
(genauer `zen_context_menu`) vorhanden ist (`skipWhenMissingDependencies`).

## Abhängigkeiten

- `ttt_resupply` (Parent-Komponente)
- `zen_context_menu` (Zeus Enhanced)

## Maintainer

- Andx
