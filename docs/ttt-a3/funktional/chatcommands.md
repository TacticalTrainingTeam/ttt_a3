---
title: Chat Commands
description: >-
  Chat-Befehle für Admins, um die Mission zu beenden, einen Teleporter zu
  erzeugen oder das Sanitätssystem zu wechseln.
published: true
date: '2026-11-12T19:57:19.830Z'
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

::block-infobox{name="Chat Commands"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Chat-Befehle für Admins, um die Mission zu beenden, einen [Teleporter](/de/ttt-a3/allgemein/teleport) zu erzeugen oder das Sanitätssystem zu wechseln.

# Benutzung

Chat mit :block-kbd[-]{platform="pc"} öffnen und den Befehl mit :block-kbd[#]{platform="pc"} am Anfang eingeben. Alle Befehle gehen nur als Admin (eingeloggt oder gewählt). Andere Spieler sehen die Eingabe nicht.

| Befehl | Wirkung |
| --- | --- |
| `#endmission` | Beendet die Mission als Erfolg. Optional mit dem Namen eines Missionsendes, z.B. `#endmission end2` |
| `#failmission` | Beendet die Mission als Fehlschlag. Optional mit dem Namen eines Missionsendes |
| `#techsupport` | Erzeugt an der eigenen Position eine TTT-Flagge mit Teleport und [Zuschauerkamera](/de/ttt-a3/allgemein/teleport) |
| `#medsys 0`, `1` oder `2` | Wechselt das Sanitätssystem auf Standard, Einfach oder Training, siehe [Settings](/de/ttt-a3/funktional/settings) |
