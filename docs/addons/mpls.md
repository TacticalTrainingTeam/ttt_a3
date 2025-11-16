# Missionspersistentes Loadout-System

Das MPLS speichert alle 10 Minuten, beim Respawn und beim Disconnect das aktuelle Loadout des Spielers im `missionNamespace` der Mission. Beim JIP/Respawn wird das letzte gespeicherte Loadout dem Spieler wieder zugewiesen. Zusätzlich gibt es für JIP Spieler am TTT-Teleporter die Möglichkeit per Mausrad-Menü das erste gespeicherte Loadout wieder auszuwählen.

## `ttt_mpls_fnc_saveLoadout`

Ermöglicht ein manuelles speichern des aktuellen Loadouts.

```c++
[player, getPlayerUID player] call ttt_mpls_fnc_saveLoadout;
```

Argumente:

| Position | Argument                                       | Typ    | Optional? |
| -------- | ---------------------------------------------- | ------ | --------- |
| 0        | Spieler dessen loadout gespeichert werden soll | OBJECT | Nein      |
| 1        | UID des Spielers                               | STRING | ja        |

Rückgabe-Wert:

Erfolg - BOOLEAN

## Events

| Eventname                       | Beschreibung                             | Parameter                           | Lokalität |
| --------------------------------| -----------------------------------------| ----------------------------------- | --------- |
| `ttt_mpls_API_loadoutApplied`   | Loadout wurde einem Spieler zugewiesen   | `_player, _newLoadout, _oldLoadout` | lokal     |
| `ttt_mpls_API_API_loadoutSaved` | Loadout eines Spielers wurde gespeichert | `_player, _loadout`                 | lokal     |

## Maintainer

- Andx
