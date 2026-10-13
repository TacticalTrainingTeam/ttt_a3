# Common

Enthält Funktionen und Assets für die TTT-Mod.

## Sitz sperren

`ttt_common_lockSeat` und `ttt_common_unlockSeat` (CBA-Events) sperren bzw. entsperren einen Turm-Sitz für den Spieler, der sich auf einen Nachbarsitz bewegt hat (z.B. Kommandant, der höher steigt). Der Sitz wird automatisch entsperrt, wenn der Spieler aussteigt oder gelöscht wird. `ttt_common_removeBackpackCargo` entfernt einen Rucksack aus dem Laderaum auf dem Rechner, auf dem das Fahrzeug lokal ist.

## Karten-Aktion

`ttt_common_fnc_initMapActions` fügt einem Fahrzeug die Aktion "Karte auf dem Fahrzeug ablegen" hinzu (benötigt Metis Enhanced, ohne wird die Aktion übersprungen). Die Fahrzeuge werden über Config-Attribute angemeldet:

| Attribut | Bedeutung |
| --- | --- |
| `ttt_common_mapActionPosition[]` | Position der Karte relativ zum Fahrzeug |
| `ttt_common_mapActionOrientation[]` | Richtungs- und Hochvektor der Karte |
| `ttt_common_mapActionAnimation` | optional: Animationsquelle, die für die Aktion einen bestimmten Wert haben muss |
| `ttt_common_mapActionAnimationPhase` | Wert dieser Animationsquelle (Standard 0) |

Mit der Variable `ttt_common_showMapAction` (`false`) lässt sich die Aktion pro Fahrzeug ausblenden. Verwendet von `compat_rnt` (Marder, Fuchs, Wolf) und `compat_bwa3` (Puma).

## Quellen

Sitz sperren/entsperren ist übernommen aus `addons/Common`, die Karten-Aktion aus `addons/Redd_Marder`, `addons/Redd_Fuchs`, `addons/Redd_Wolf` und `addons/BwMod_Puma` des Mods PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Autor laut Original: Timi007, Stand: Commit `e4d9ec8`) und wurde mit Erlaubnis eines Maintainers angepasst (Arma Public License No Derivatives). Die Herkunft steht im Header der Funktionen (`Source:`).

## Maintainer

- Andx
- EinStein
