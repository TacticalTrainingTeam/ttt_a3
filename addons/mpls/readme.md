# Missionspersistentes Loadout-System

Das MPLS speichert alle 10 Minuten, beim Respawn und beim Disconnect das aktuelle Loadout des Spielers in der Mission. Beim JIP/Respawn wird das letzte gespeicherte Loadout dem Spieler wieder zugewiesen. Zusätzlich gibt es für JIP Spieler am TTT-Teleporter die Möglichkeit per Mausrad-Menü das erste gespeicherte Loadout wieder auszuwählen.

Ist [Zeus Enhanced (ZEN)](https://zen-mod.github.io/ZEN/) geladen, steht Zeus im Rechtsklick-Kontextmenü zusätzlich die Kategorie **TTT - MPLS** zur Verfügung, mit drei Aktionen für den anvisierten Spieler: die Ausrüstung auf das zuerst gespeicherte Loadout zurücksetzen, die aktuelle Ausrüstung manuell in einem eigenen Snapshot-Slot speichern (unabhängig vom automatischen Speichern) und diesen Snapshot wieder herstellen. Beim Zurücksetzen bzw. Wiederherstellen erhält der betroffene Spieler jeweils einen Hinweis; beide Aktionen lösen zudem das `ttt_mpls_API_loadoutApplied`-Event aus.

Inspiriert von [W] Millers <https://gitlab.gruppe-w.de/Missionsbau/Framework/-/tree/master/addons/mcls>

## Maintainer

- Andx
