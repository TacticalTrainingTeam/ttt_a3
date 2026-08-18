# Missionspersistentes Loadout-System

Das MPLS speichert alle 10 Minuten, beim Respawn und beim Disconnect das aktuelle Loadout des Spielers in der Mission. Beim JIP/Respawn wird das letzte gespeicherte Loadout dem Spieler wieder zugewiesen. Zusätzlich gibt es für JIP Spieler am TTT-Teleporter die Möglichkeit per Mausrad-Menü das erste gespeicherte Loadout wieder auszuwählen.

Ist [Zeus Enhanced (ZEN)](https://zen-mod.github.io/ZEN/) geladen, steht Zeus zusätzlich eine Kontextmenü-Aktion zur Verfügung, um die Ausrüstung eines beliebigen Spielers per Rechtsklick auf dessen zuerst gespeichertes Loadout zurückzusetzen. Der betroffene Spieler erhält dabei einen Hinweis. Diese Aktion löst ebenfalls das `ttt_mpls_API_loadoutApplied`-Event aus.

Inspiriert von [W] Millers <https://gitlab.gruppe-w.de/Missionsbau/Framework/-/tree/master/addons/mcls>

## Maintainer

- Andx
