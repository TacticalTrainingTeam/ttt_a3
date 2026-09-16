# Missionspersistentes Loadout-System

Das MPLS speichert alle 10 Minuten, beim Respawn und beim Disconnect das aktuelle Loadout des Spielers im `missionNamespace` der Mission. Beim JIP/Respawn wird das letzte gespeicherte Loadout dem Spieler wieder zugewiesen. Zusätzlich gibt es für JIP Spieler am TTT-Teleporter die Möglichkeit per Mausrad-Menü das erste gespeicherte Loadout wieder auszuwählen.

Ist [Zeus Enhanced (ZEN)](https://zen-mod.github.io/ZEN/) geladen, steht Zeus im Rechtsklick-Kontextmenü zusätzlich die Kategorie **TTT - MPLS** zur Verfügung, mit drei Aktionen für den anvisierten Spieler:

- **Revert to Initial Loadout**: setzt die Ausrüstung auf das zuerst gespeicherte Loadout zurück.
- **Make Loadout Snapshot**: speichert die aktuelle Ausrüstung manuell in einem eigenen Slot, unabhängig vom automatischen Speichern (das alle 10 Minuten sowie bei Respawn/Disconnect läuft) - ein Snapshot bleibt also erhalten, bis er per **Restore Snapshot** wiederhergestellt oder erneut überschrieben wird.
- **Restore Snapshot**: stellt die zuletzt per Snapshot gespeicherte Ausrüstung wieder her.

Beim Zurücksetzen bzw. Wiederherstellen erhält der betroffene Spieler jeweils einen Hinweis; beide Aktionen lösen zudem das `ttt_mpls_API_loadoutApplied`-Event aus.

Sobald in Loadout gespeichert wurde, wird dieses in der Kartenübersicht unter "Ausrüstung" > "Gespeicherte Ausrüstung" angezeigt.

!["Beispielbild"](https://i.imgur.com/Xg2Zjea.jpeg)

## `ttt_mpls_fnc_saveLoadout`

Ermöglicht ein manuelles Speichern des aktuellen Loadouts.

``` c++
[player, getPlayerUID player] call ttt_mpls_fnc_saveLoadout;
```

Argumente:

| # | Argument                                       | Typ    | Optional | Default |
| - | ---------------------------------------------- | ------ | -------- | ------- |
| 0 | Spieler dessen loadout gespeichert werden soll | OBJECT | Nein     | -       |
| 1 | UID des Spielers                               | STRING | Ja       | -       |

Rückgabe-Wert:

Erfolg - BOOLEAN

## Events

| Eventname                         | Beschreibung                                    | Parameter                              | Lokalität |
| --------------------------------- | ----------------------------------------------- | -------------------------------------- | --------- |
| `ttt_teleport_API_loadoutApplied` | Wenn das Loadout dem Spieler zugewiesen wurde   | `_player, _oldLoadout`, `_newLoadout`  | lokal     |
| `ttt_teleport_API_loadoutSaved`   | Wenn das Loadout des Spielers gespeichert wurde | `_player`, `_Loadout`                  | lokal     |

## Maintainer

- Andx
