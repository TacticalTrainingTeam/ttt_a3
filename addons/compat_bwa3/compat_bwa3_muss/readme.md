# Compat BWA3 - MUSS

Meldet die Reaktion des MUSS (Multifunktionales Selbstschutz-System) auf anfliegende Lenkflugkörper für den Puma an (`fnc_incomingMissile`, siehe `compat_bwa3_puma`). Dieses Addon enthält nur den `IncomingMissile`-Event-Eintrag der Puma-Basisklasse, die Funktion selbst liegt in `compat_bwa3`. Es benötigt ACE Hunterkiller für die Turmausrichtung. Fehlt es, wird nur dieses Addon übersprungen (`skipWhenMissingDependencies`), alles andere der Compat läuft ohne MUSS weiter.

## Herkunft

Der Event-Eintrag stammt aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`, mit Erlaubnis eines Maintainers übernommen, Arma Public License No Derivatives): `addons/BwMod_Puma`.

## Abhängigkeiten

- ACE Hunterkiller
- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537>

## Maintainer

- Andx
