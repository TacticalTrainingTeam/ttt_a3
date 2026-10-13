# Compat Redd'n'Tank

Enthält diverse Verbesserungen und Fixes für Redd'n'Tank Fahrzeuge.

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang.

Übernommen und angepasst wurden:

- `Redd_Wiesel_MK20`, `Redd_Wiesel_TOW`, `Redd_Marder`, `Redd_Fuchs`, `Redd_Wolf`, `Redd_Luchs`: höher steigen, Tarnnetz, Heckklappe, Luken, Leiter, Karten-Aktion, TOW-Nachladen, HUD (Autoren laut Original: Lemonberries, Mishkar, Timi007). Die Logik für Kommandant und Ladeschütze wurde dabei in generische Funktionen zusammengeführt, die über Config-Attribute des Fahrzeugs gesteuert werden.
- `Common` (Sitz sperren, siehe Addon `common`), `SmokeLauncher` (Addon `smoke_launcher`), `Ladder` (Addon `vehicle_ladder`).

Aus `addons/Redd_Main` stammt die MK20-Konfiguration, aus `addons/Redd_GMW` die ACE-CSW-Konfiguration der GraMaWa. Nicht übernommen wurden u.a. die Nachlade-Mechanik (Rearm), das Milan-System und die NiArms-Anpassungen.

## Config-Attribute der Fahrzeuge

Die Sitz- und Tarnnetz-Funktionen sind generisch und werden pro Fahrzeug über Config-Attribute in `CfgVehicles` gesteuert (siehe `compat_rnt_wiesel_mk20`, `compat_rnt_wiesel_tow`, `compat_rnt_marder`):

| Attribut | Bedeutung |
| --- | --- |
| `ttt_compat_rnt_<seat>Turret[]` | Turmpfad des normalen Sitzes (`<seat>` ist `commander` oder `loader`) |
| `ttt_compat_rnt_<seat>HigherTurret[]` | Turmpfad des höheren Sitzes |
| `ttt_compat_rnt_<seat>Turrets[]` | alle Turmpfade, die zum Sitz gehören (für "Sitz frei?" und das Entsperren beim Aussteigen) |
| `ttt_compat_rnt_<seat>BinoVariable` | Fahrzeug-Variable von Redd'n'Tank, die anzeigt, dass der Sitz höher steht |
| `ttt_compat_rnt_<seat>ResetVariables[]` | weitere Fahrzeug-Variablen, die beim Ein- und Aussteigen zurückgesetzt werden |

Die Sitzdaten werden beim ersten Zugriff pro Fahrzeugklasse gelesen und zwischengespeichert (`fnc_getSeatData`). Änderungen an der Config werden daher erst nach einem Neustart des Spiels wirksam.

## Waffen (`CfgWeapons.hpp`)

- `Redd_MK20` (Marder, Wiesel MK20) hat AP und HE als getrennte Mündungen (`AP`/`HE`). Gewechselt wird über die Waffenauswahl oder die Taste aus dem Addon `common` (`ttt_common_fnc_toggleHEAP`) statt per Mausrad. Die Waffe hat 900 Schuss pro Minute, kurze Nachladezeit und eigene Reichweitenstufen für die KI (`MK20_PROPERTIES`). `Redd_MK20FL` nutzt dieselben Mündungen mit eigenen Magazinen.

## Abhängigkeiten

- Redd'n'Tank Vehicles <https://steamcommunity.com/sharedfiles/filedetails/?id=1128145626>

## Maintainer

- Andx
