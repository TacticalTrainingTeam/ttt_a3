# Compat Acre

## Arsenal Tab

Fügt einen neuen Tab (rechts) im Arsenal hinzu, indem alle ACRE Gegenstände gesammelt sind.

## Dämpfung in Fahrzeugen

`CfgSoundEffects.hpp` definiert `TankAttenuation`, das alle Fahrzeuge der Compat-Addons (`attenuationEffectType`, `soundAttenuationTurret`) verwenden: `acreAttenuation = 1` dämpft die Funk- und Sprachübertragung zwischen Spielern im und außerhalb des Fahrzeugs voll, `acreAttenuationTurnedOut = 0.5` dämpft Besatzungsmitglieder, die ausgestiegen (turned out) sind, nur halb.

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Config-Datei trägt einen entsprechenden Kommentar am Anfang.

Übernommen aus `addons/ACRE/CfgSoundEffects.hpp` (Autor laut Original: Timi007).

## Maintainer

- Andx
