# Compat BWA3 - Karten-Aktion

Meldet die Karten-Aktion (`ttt_common_fnc_initMapActions`) für den Puma an. Das Fahrzeug ist über Config-Attribute (`ttt_common_mapAction*`) in `compat_bwa3_puma` beschrieben. Dieses Addon enthält nur den Init-Event-Eintrag der Puma-Basisklasse und benötigt das Addon `mts_map` von Metis Enhanced (ab Version 1.10.2). Fehlt es, wird nur dieses Addon übersprungen (`skipWhenMissingDependencies`), alles andere der Compat läuft ohne Karten-Aktion weiter.

## Herkunft

Der Init-Event-Eintrag stammt aus den Fahrzeug-Addons des Mods PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`, mit Erlaubnis eines Maintainers übernommen, Arma Public License No Derivatives): `addons/BwMod_Puma`. Die Funktion `ttt_common_fnc_initMapActions` steht im Addon `common`.


Autoren laut Original: Mishkar, Timi007.

## Abhängigkeiten

- Metis Enhanced (`mts_map`)
- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537>

## Maintainer

- Andx
