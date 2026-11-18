# Compat Redd'n'Tank - Milan

Die abgesessene Milan (`Redd_Milan_Static`) und ihre Rucksäcke.

## Allgemein

- Das Dreibein (`Redd_Milan_Static_Tripod`) baut allein eine leere Milan auf (`assembleInfo` mit `primary = 1`). Das Rohr (`Redd_Milan_Static_Barrel`) gehört nicht mehr zum Aufbau (`delete assembleInfo`), sondern wird als Munition geladen.
- Laden und Entladen über Halte-Aktionen (10 Sekunden, `fnc_addStaticMilanActions` in `compat_rnt`, angemeldet als `clientInit` in `compat_rnt/CfgEventhandlers.hpp`):
  - **Milan laden**: Der Spieler trägt das Rohr als Rucksack und steht näher als 2 m an der leeren Milan. Das Rohr wird zum Magazin (`fnc_loadStaticMilan`).
  - **Milan entladen**: Der Spieler trägt keinen Rucksack, das Rohr wird ihm als Rucksack gegeben (`fnc_unloadStaticMilan`). Im Original fehlt die Rucksack-Prüfung, dort ersetzt `addBackpackGlobal` einen getragenen Rucksack samt Inhalt.
- "Geladen" heißt: ein Magazin mit Munition (`magazinesAllTurrets`, Munition > 0). Ein leeres Magazin nach dem Schuss zählt als ungeladen und wird beim Laden entfernt.
- Abbauen geht nur, wenn die Milan leer und unbesetzt ist und der Spieler keinen Rucksack trägt (UserAction `ttt_compat_rnt_disassemble`, `fnc_disassembleStaticMilan`). Der Abbau der Engine entfällt (`delete assembleInfo`), weil er den Ladezustand nicht kennt.
- Das Rohr an der Waffe (`ReloadMagazine`, auf `user` umgestellt) ist nach dem Aufbau und nach einem Schuss ausgeblendet und wird beim Laden eingeblendet. Nach dem Schuss blendet es ein eigener `FiredBIS`-Handler aus, der `fired`-Handler von Redd'n'Tank bleibt erhalten.
- Die Optik nutzt die Milan-Anzeige ohne Entfernungsmesser (`ttt_compat_rnt_RSC_Milan`), die Flaggen-Aktionen entfallen.
- Gewicht: Rohr 265, Dreibein mit MIRA-Wärmebildgerät 671 (wie im Original von PzGrenBtl402).

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals.

Übernommen aus `addons/Redd_Milan` (Autoren laut Original: Lemonberries, Timi007). Die Funktionen liegen in `compat_rnt`.

## Abhängigkeiten

- Redd'n'Tank Vehicles <https://steamcommunity.com/sharedfiles/filedetails/?id=1128145626> (`Redd_Milan_Static`, `Redd_Bags`)

## Maintainer

- Andx
