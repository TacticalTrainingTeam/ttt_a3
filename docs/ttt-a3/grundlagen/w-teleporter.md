---
title: Framework Teleporter
description: Dialog, mit dem sich Spieler zu einem anderen Spieler teleportieren.
published: true
tags:
  - arma3
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

::block-infobox{name="Framework Teleporter"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Dialog, mit dem sich Spieler zu einem anderen Spieler teleportieren, z.B. nach einem Verbindungsabbruch.

# Benutzung

An der TTT-Flagge die Mausrad-Aktion **Technischer Teleport** wählen, einen Spieler aussuchen und teleportieren. Man landet in der Nähe des Spielers oder, wenn er in einem Fahrzeug sitzt, auf einem freien Platz als Fahrer, Schütze, Kommandant oder Passagier.

Die Flagge kommt aus [Teleporter und Zuschauerkamera](/de/ttt-a3/allgemein/teleport) oder dem Chat-Befehl `#techsupport`.

# Events

| Event | Wann | Parameter | Lokalität |
| --- | --- | --- | --- |
| `ttt_w_teleporter_API_playerTeleported` | Ein Spieler hat sich zu einem anderen Spieler teleportiert | `_unit, _target` | lokal |
