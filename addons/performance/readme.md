# Performance

Sammlung von Performance-Optimierungen, die über CBA-Einstellungen gesteuert werden.

## Remote-Sensoren (`ttt_performance_disableRemoteSensors`)

Ruft auf jedem Spieler-Client `disableRemoteSensors` auf. Die Engine stoppt damit auf diesem Rechner die Sicht-Raycasts für alle Gruppen, die **keine** lokale Einheit enthalten (<https://community.bistudio.com/wiki/disableRemoteSensors>). Enthält eine Gruppe auch nur eine lokale Einheit, wird für die gesamte Gruppe weiter gerechnet.

Server und Headless Clients werden bewusst ausgenommen (`isServer || {!hasInterface}`): Dort ist die KI lokal und deren Raycasts liefern das eigentliche KI-Wissen.

Auswirkung je Missionstyp:

- **Zeus-Missionen**: Vom Zeus platzierte KI ist lokal auf dessen Rechner (`acex_headless_enabled = false`), wird dort also weiter vollständig berechnet. Nur die anderen Spieler-Clients sparen sich die Berechnung. Disconnectet der Zeus, wandert die KI auf den Server, der nicht betroffen ist.
- **Gescriptete Missionen**: KI liegt auf dem Server, alle Spieler-Clients sparen sich die Berechnung.
- **KI in Spielergruppen**: Gruppe enthält eine lokale Einheit, wird also weiter berechnet.

Nebenwirkung: `knowsAbout`, `nearTargets` und `targetKnowledge` liefern auf einem Client nur noch für lokale Gruppen aktuelle Werte. Skripte, die das Wissen fremder KI abfragen, müssen dort laufen, wo die KI lokal ist (Server bzw. Zeus). Die TTT-Mod selbst nutzt keinen dieser Befehle; LAMBS läuft ohnehin dort, wo die KI lokal ist.

Der Zustand wird von der Engine beim Missionsende zurückgesetzt. Da CBA den Change-Handler einer Einstellung bei jedem Missionsstart erneut ausführt, wird der Befehl automatisch wieder gesetzt. Die Einstellung ist bewusst nicht in `addons/settings` erzwungen, damit Missionsbauer sie per `cba_settings.sqf` abschalten können.

## Quellen

- <https://github.com/ArmaForces/Mods/tree/master/addons/remotesensors> - Original von veteran29 (ArmaForces)
- <https://github.com/Theseus-Aegis/Mods/tree/master/addons/performance> - Übernahme bei Theseus, dort ebenfalls ArmaForces/veteran29 zugeschrieben

## Maintainer

- Andx
