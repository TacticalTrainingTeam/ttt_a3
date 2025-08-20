---
tags:
  - Feature
---

# Teleporter und Zuschauerkamera

Fügt automatisch einem Objekt das den Variablennamen `ttt_teleport_teleporter` hat, eine Mausrad-Aktion für den W-Teleporter und eine Zuschauerkamera hinzu.

Wenn kein `respawn`-Marker in der Mission vorhanden ist, wird einer im [0,0,0]-Eck der Karte erzeugt.

Wenn kein Objekt mit dem Variablennamen `ttt_teleport_teleporter` existiert wird am `respawn`-Marker eine TTT-Flagge erzeugt und die Aktionen dort hinzugefügt.

JIP Spieler werden automatisch zum Marker `respawn` bewegt.

## CBA-Einstellungen

``` cpp
force ttt_teleport_enableTeleport = false; //aktiviert die Teleport-Logik - default: true
force ttt_teleport_enableJIPMoveToRespawn = false; //aktiviert den Teleport für JIP Spieler - default: true
```

## Maintainer

- Andx
