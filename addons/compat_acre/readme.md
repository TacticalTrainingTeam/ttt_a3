# Compat Acre

## Arsenal Tab

Fügt einen neuen Tab (rechts) im Arsenal hinzu, indem alle ACRE Gegenstände gesammelt sind.

## Dämpfung in Fahrzeugen

`CfgSoundEffects.hpp` definiert `TankAttenuation`, das alle Fahrzeuge der Compat-Addons (`attenuationEffectType`, `soundAttenuationTurret`) verwenden: `acreAttenuation = 1` dämpft die Funk- und Sprachübertragung zwischen Spielern im und außerhalb des Fahrzeugs voll, `acreAttenuationTurnedOut = 0.5` dämpft Besatzungsmitglieder, die ausgestiegen (turned out) sind, nur halb. Ob ACRE den Effekt bereits selbst definiert, wurde nicht geprüft, hier gelten in jedem Fall diese Werte.

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals. Pfade in der Tabelle beziehen sich auf `addons/` im Original.


| Datei | Original | Änderung |
| --- | --- | --- |
| `CfgSoundEffects.hpp` | `ACRE/CfgSoundEffects.hpp` | Kommentare angepasst |

Autor laut Original: Timi007.

## Maintainer

- Andx
