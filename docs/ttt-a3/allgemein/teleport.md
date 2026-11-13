---
title: Teleporter und Zuschauerkamera
description: >-
  Stellt am Respawn eine TTT-Flagge mit Teleport und Zuschauerkamera bereit und
  bringt JIP-Spieler dorthin.
published: true
date: '2026-11-12T12:41:22.573Z'
tags:
  - arma3
  - referenz
  - ttt-mod
  - missionsbauer
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Teleporter und Zuschauerkamera"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Stellt am Respawn eine TTT-Flagge mit Teleport und Zuschauerkamera bereit und bringt JIP-Spieler automatisch dorthin.

# Benutzung

Ein Objekt mit dem Variablennamen `ttt_teleport_teleporter` bekommt die Mausrad-Aktionen **Technischer Teleport** (siehe [Framework Teleporter](/de/ttt-a3/grundlagen/w-teleporter)) und **Zuschauermodus**.

- Gibt es kein solches Objekt, wird am Marker `respawn` eine TTT-Flagge mit diesen Aktionen erzeugt.
- Gibt es keinen Marker `respawn`, wird einer in der Kartenecke [0,0,0] erzeugt.
- Spieler, die während der Mission beitreten (JIP), werden zum Marker `respawn` gebracht.

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team > Teleport Logik**.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_teleport_enableTeleport` | `true` | Teleporter am Respawn automatisch erzeugen |
| `ttt_teleport_enableJIPMoveToRespawn` | `true` | JIP-Spieler zum Respawn bringen |

# Funktionen

## `ttt_teleport_fnc_addActions`

Gibt einem beliebigen Objekt die Aktionen für Teleport und Zuschauerkamera.

```sqf
[meinObjekt] call ttt_teleport_fnc_addActions;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Objekt, das die Aktionen bekommt | OBJECT | Nein | - |

Rückgabewert: keiner

# Events

| Event | Wann | Parameter | Lokalität |
| --- | --- | --- | --- |
| `ttt_teleport_API_JIPmovedToRespawn` | Ein JIP-Spieler wurde zum Respawn gebracht | `_unit, _positionASL` | lokal |
