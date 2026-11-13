---
title: UAV-Verbindung
description: >-
  Lässt das Videobild eines UAV mit zunehmender Entfernung des Operators
  verschlechtern und die Verbindung bei zu großer Distanz vollständig abbrechen.
published: true
tags:
  - arma3
  - luftfahrzeuge
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

::block-infobox{name="UAV-Verbindung"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Das Videobild einer [Drohne](/de/handbuch/kampfunterstützungskräfte/drohnen) wird mit der Entfernung zum Operator schlechter und bricht bei zu großer Entfernung ab.

# Benutzung

Gilt nach dem Aktivieren automatisch für jede [Drohne](/de/handbuch/kampfunterstützungskräfte/drohnen) in der Mission, egal aus welcher Mod und ob im Editor oder später erzeugt.

- Bis zur Verschlechterungsdistanz ist das Bild klar.
- Danach wackelt und rauscht es immer stärker.
- Ab der Abbruch-Distanz ist die Verbindung weg und die Drohne lässt sich nicht mehr steuern.
- Kommt der Operator wieder näher, verbindet er sich automatisch neu.

Trennt sich der Operator selbst (z.B. über das Terminal), greift das Addon nicht ein.

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team > UAV Link**.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_uav_link_enable` | `false` | Funktion aktivieren |
| `ttt_uav_link_degradeDistance` | `800` | Meter, ab denen das Bild schlechter wird (100 bis 5000) |
| `ttt_uav_link_lostDistance` | `1200` | Meter, ab denen die Verbindung abbricht (100 bis 6000). Muss größer sein als die Verschlechterungsdistanz |
