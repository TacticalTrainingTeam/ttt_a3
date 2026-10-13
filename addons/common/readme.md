# Common

Enthält Funktionen und Assets für die TTT-Mod.

## Sitz sperren

`ttt_common_lockSeat` und `ttt_common_unlockSeat` (CBA-Events, Funktionen `fnc_lockSeat`, `fnc_unlockSeat`) sperren bzw. entsperren einen Turm-Sitz für den Spieler, der sich auf einen Nachbarsitz bewegt hat (z.B. Kommandant, der höher steigt). Der gesperrte Sitz wird am Spieler gespeichert (`ttt_common_lockedSeat`). Er wird automatisch entsperrt, wenn der Spieler aussteigt (`GetOutMan`) oder gelöscht wird (`Deleted`). Genutzt von `compat_rnt`.

## Rucksack aus dem Laderaum entfernen

`ttt_common_removeBackpackCargo` (CBA-Event, Argumente: Fahrzeug, Rucksackklasse) entfernt einen Rucksack aus dem Laderaum auf dem Rechner, auf dem das Fahrzeug lokal ist. Der Laderaum lässt sich nur dort ändern. Genutzt vom TOW-Nachladen in `compat_rnt`.

## Karten-Aktion

`ttt_common_fnc_initMapActions` fügt einem Fahrzeug die Aktion "Karte auf dem Fahrzeug ablegen" hinzu (benötigt Metis Enhanced ab Version 1.10.2, die Funktion prüft zusätzlich, ob Metis Enhanced geladen ist). Die Fahrzeuge werden über Config-Attribute angemeldet:

| Attribut | Bedeutung |
| --- | --- |
| `ttt_common_mapActionPosition[]` | Position der Karte relativ zum Fahrzeug |
| `ttt_common_mapActionOrientation[]` | Richtungs- und Hochvektor der Karte |
| `ttt_common_mapActionAnimation` | optional: Animationsquelle, die für die Aktion einen bestimmten Wert haben muss |
| `ttt_common_mapActionAnimationPhase` | Wert dieser Animationsquelle (Standard 0) |

Mit der Variable `ttt_common_showMapAction` (`false`) lässt sich die Aktion pro Fahrzeug ausblenden. Verwendet von `compat_rnt` (Marder, Fuchs, Wolf) und `compat_bwa3` (Puma). Das Init-Event der Fahrzeugbasisklasse, das die Aktion anmeldet, liegt in den Addons `compat_rnt_map` und `compat_bwa3_map`. Diese benötigen das Addon `mts_map` von Metis Enhanced und werden ohne dieses übersprungen.

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals. Pfade in der Tabelle beziehen sich auf `addons/` im Original.


| Datei | Original | Änderung |
| --- | --- | --- |
| `functions/fnc_lockSeat.sqf`, `fnc_unlockSeat.sqf`, Events in `XEH_preInit.sqf` | `Common/functions/fnc_lockSeat.sqf`, `fnc_unlockSeat.sqf`, `Common/XEH_postInit.sqf` | an dieses Repository angepasst (Events in `preInit`) |
| `functions/fnc_initMapActions.sqf` | `Redd_Marder/functions/fnc_initMapActions.sqf` (außerdem `Redd_Fuchs`, `Redd_Wolf`, `BwMod_Puma`) | für alle Fahrzeuge verallgemeinert, Position und Bedingung kommen aus der Fahrzeug-Config |

Autor laut Original: Timi007 (Sitze), Mishkar und Timi007 (Karten-Aktion).

## Maintainer

- Andx
- EinStein
