# Missionspersistentes Loadout-System

Das MPLS speichert alle 10 Minuten, beim Respawn und beim Disconnect das aktuelle Loadout des Spielers im `missionNamespace` der Mission. Beim JIP/Respawn wird das letzte gespeicherte Loadout dem Spieler wieder zugewiesen. Zusätzlich gibt es für JIP Spieler am TTT-Teleporter die Möglichkeit per Mausrad-Menü das erste gespeicherte Loadout wieder auszuwählen.

## `ttt_mpls_fnc_saveLoadout`

``` cpp
[player, getPlayerUID player] call ttt_mpls_fnc_saveLoadout;
```

Ermöglicht ein manuelles speichern des aktuellen Loadouts.

## Events

| Eventname                         | Beschreibung                                    | Parameter                              | Lokalität |
| --------------------------------- | ----------------------------------------------- | -------------------------------------- | --------- |
| `ttt_teleport_API_loadoutApplied` | Wenn das Loadout dem Spieler zugewiesen wurde   | `_player, _oldLoaodout`, `_newLoadout` | lokal     |
| `ttt_teleport_API_loadoutSaved`   | Wenn das Loadout des Spielers gespeichert wurde | `_player`, `_Loadout`                  | lokal     |

## Maintainer

- Andx
