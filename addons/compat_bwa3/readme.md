# Compat BWmod

## Puma (Skripte)

Die Skripte, Tastenbelegung und Bilder des Puma liegen in diesem Hauptaddon, die zugehörige Config in `compat_bwa3_puma` (siehe dessen README). Die Bilder (`data/numbers`, `data/rsc`) sind die Fahrzeugnummern und Radar-Symbole.

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang.

Aus `addons/BwMod_Puma` stammen die Funktionen unter `functions/`, die Tastenbelegung (`XEH_postInit.sqf`), die Standard-Munition (`XEH_preInit.sqf`) und die Bilder unter `data/`. Der horizontale Fahrerkompass (`RscInGameUI.hpp`) wird von Leopard und Puma gemeinsam genutzt.

## Abhängigkeiten

- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537>
- ACE Hunterkiller (für die Turmausrichtung des MUSS)

## Maintainer

- Andx
