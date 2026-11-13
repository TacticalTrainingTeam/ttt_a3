---
title: Tagging2Map
description: >-
  Erstellt automatisch einen Marker auf der Karte, wenn ein Gebäude mit einem X
  per ACE-Sprühflasche oder Kreide markiert wurde.
published: true
date: '2026-11-12T19:57:17.887Z'
tags:
  - arma3
  - referenz
  - ace
  - ttt-mod
  - fuehrung
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Tagging2Map"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Setzt automatisch einen Kartenmarker, wenn ein Gebäude mit einem X markiert oder eine orange ACE-Markierungsfahne gesetzt wird.

# Benutzung

- **Gebäude markieren:** Mit ACE-Sprühfarbe oder Kreide ein **X** an ein Gebäude sprühen. Es entsteht ein Punkt in derselben Farbe auf der Karte (Rot, Grün, Blau, Schwarz, Gelb oder Weiß). Andere Formen wie Pfeile, Kreise oder Dreiecke erzeugen keinen Marker.
- **[IED](/de/handbuch/kampfunterstützungskräfte/pioniere/ieds) markieren:** Eine **orange ACE-Markierungsfahne** setzen. Es entsteht ein oranger Punkt auf der Karte.

Die Marker sind im Seitenkanal für die eigene Seite sichtbar. Eine neue Markierung am selben Gebäude ersetzt den alten Marker.

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team**.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_tagging2map_enabled` | `true` | Kartenmarker für Markierungen erzeugen |
