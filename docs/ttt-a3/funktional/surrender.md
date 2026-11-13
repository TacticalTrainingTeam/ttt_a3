---
title: KI-Kapitulation
description: >-
  Feindliche KI in einem Bereich kapituliert, wenn sie deutlich in Unterzahl
  ist.
published: true
tags:
  - arma3
  - missionsbauer
  - referenz
  - ace
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="KI-Kapitulation"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Feindliche KI in einem Bereich kapituliert, wenn sie deutlich in Unterzahl ist. Kapitulierte KI hebt die Hände und gilt in ACE als ergeben.

# Benutzung

::block-steps
1. Modul **KI-Kapitulation** im Editor platzieren.
2. Über die Größe des Moduls den Bereich festlegen.
3. Feindliche und freundliche Seite einstellen.
::

Alle 10 Sekunden wird geprüft, ob die feindliche KI im Bereich unterlegen ist. Dann kann jede feindliche Einheit mit der eingestellten Chance kapitulieren.

Wird das Modul während der Mission gelöscht (z.B. durch Zeus), endet die Prüfung sofort.

Attribute des Moduls:

| Attribut | Standard | Beschreibung |
| --- | --- | --- |
| Feindliche Seite | OPFOR | Seite, deren KI kapitulieren kann |
| Freundliche Seite | BLUFOR | Seite, die überlegen sein muss |
| Unterlegenheitsverhältnis | 2x | So viel mal mehr freundliche als feindliche Einheiten müssen im Bereich sein (1x, 2x oder 3x) |
| Kapitulationschance | 50 % | Chance pro Prüfung und Einheit (10 % bis 100 %) |
| Waffe fallen lassen | aus | Kapitulierende KI lässt ihre Waffe fallen |
