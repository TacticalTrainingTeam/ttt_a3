---
tags:
  - Feature
---

# Missionspersistentes Loadout-System

Das MPLS speichert alle 10 Minuten, beim Respawn und beim Disconnect das aktuelle Loadout des Spielers im `missionNamespace` der Mission. Beim JIP/Respawn wird das letzte gespeicherte Loadout dem Spieler wieder zugewiesen. Zusätzlich gibt es für JIP Spieler am TTT-Teleporter die Möglichkeit per Mausrad-Menü das erste gespeicherte Loadout wieder auszuwählen.

Inspiriert von [W] Millers <https://gitlab.gruppe-w.de/Missionsbau/Framework/-/tree/master/addons/mcls>

## `ttt_mpls_fnc_saveLoadout`

``` cpp
[player, getPlayerUID player] call ttt_mpls_fnc_saveLoadout;
```

Ermöglicht ein manuelles speichern des aktuellen Loadouts.

## Maintainer

- Andx
