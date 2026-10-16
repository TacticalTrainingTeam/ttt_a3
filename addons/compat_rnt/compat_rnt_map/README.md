# Compat Redd'n'Tank - Karten-Aktion

Meldet die Karten-Aktion (`ttt_common_fnc_initMapActions`) für Marder, Fuchs und Wolf an. Die Fahrzeuge sind über Config-Attribute (`ttt_common_mapAction*`) in ihren Addons (`compat_rnt_marder`, `compat_rnt_fuchs`, `compat_rnt_wolf`) beschrieben. Dieses Addon enthält nur den Init-Event-Eintrag der Fahrzeug-Basisklassen und benötigt das Addon `mts_map` von Metis Enhanced (ab Version 1.10.2). Fehlt es, wird nur dieses Addon übersprungen (`skipWhenMissingDependencies`), alles andere der Compat läuft ohne Karten-Aktion weiter.

## Herkunft

Der Init-Event-Eintrag stammt aus den Fahrzeug-Addons des Mods PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`, mit Erlaubnis eines Maintainers übernommen, Arma Public License No Derivatives): `addons/Redd_Marder, Redd_Fuchs, Redd_Wolf`. Die Funktion `ttt_common_fnc_initMapActions` steht im Addon `common`.


Autoren laut Original: Mishkar, Timi007.

## Abhängigkeiten

- Metis Enhanced (`mts_map`)
- Redd'n'Tank Vehicles <https://steamcommunity.com/sharedfiles/filedetails/?id=1128145626>

## Maintainer

- Andx
