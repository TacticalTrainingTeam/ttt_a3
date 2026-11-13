---
title: Settings
description: >-
  Setzt beim Missionsstart die TTT-CBA-Einstellungen und lässt in der Lobby
  eines von drei Sanitätssystemen wählen.
published: true
date: '2026-11-12T19:58:44.894Z'
tags:
  - arma3
  - sanitaet
  - referenz
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Settings"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Setzt beim Missionsstart die TTT-CBA-Einstellungen für ACE, [ACRE](/de/handbuch/mods/acre2) und die anderen Mods des Modsets und lässt in der Lobby eines von drei Sanitätssystemen wählen.

Alles, was das Addon nicht festlegt, kann jeder Spieler selbst einstellen. Greift eine Einstellung nicht (z.B. weil die Mod fehlt oder der Name falsch ist), steht im [RPT](/de/technik/rpt) eine Meldung mit `(settings) WARNING`.

# Benutzung

## Sanitätssysteme

| Index | System | Wofür |
| --- | --- | --- |
| 0 | Standard | Reguläre Einstellungen. Wird auch genommen, wenn nichts gewählt ist |
| 1 | Einfach | Längere Überlebenszeit und schnellere Behandlung für spezielle Events |
| 2 | Training | KI kann bewusstlos werden, um daran zu üben |

## In der Mission

Damit die Auswahl in der Lobby erscheint, in der `description.ext` ergänzen:

```cpp
class Params {
    class medical_system {
        title = "Sanitäts System";
        values[] = {0, 1, 2};
        texts[] = {"Standard", "Einfach", "Training"};
        default = 0;
    };
};
```

Danach gibt es in der Lobby oben rechts einen Button für die Parameter.

## Während der Mission

Admins können das System per Chat wechseln, z.B. wenn es in der Lobby vergessen wurde: `#medsys 0`, `#medsys 1` oder `#medsys 2` (siehe [Chat Commands](/de/ttt-a3/funktional/chatcommands)).
