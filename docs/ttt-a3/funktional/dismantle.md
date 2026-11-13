---
title: Abbauen
description: >-
  Spieler mit Werkzeug und Befähigung können bestimmte Objekte wie Panzersperren
  zerlegen.
published: true
date: '2026-11-12T19:58:42.889Z'
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

::block-infobox{name="Abbauen"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Spieler mit Werkzeug und Befähigung können bestimmte Objekte zerlegen, z.B. Panzersperren.

# Benutzung

An einem erlaubten Objekt in der ACE-Interaktion **Zerlegen** wählen. Das dauert 20 Sekunden. Danach verschwindet das Objekt, und ein Metallgeräusch ist im Umkreis von 40 m zu hören.

Welche Objekte erlaubt sind und was man dafür braucht, legen die Einstellungen fest.

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team > Objekte Zerlegen**.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_dismantle_enable` | `false` | Zerlegen aktivieren |
| `ttt_dismantle_supportedObjects` | `"[]"` | Klassennamen der Objekte, die zerlegt werden können |
| `ttt_dismantle_neededItem` | `""` | Gegenstand, den der Spieler dabeihaben muss. Leer: kein Gegenstand nötig |
| `ttt_dismantle_neededSkill` | `1` | Nötige Befähigung: 0 = keine, 1 = [Pionier](/de/handbuch/kampfunterstützungskräfte/pioniere), 2 = erfahrener Pionier |

Beispiel für die `cba_settings.sqf`:

```sqf
force ttt_dismantle_enable = true;
force ttt_dismantle_supportedObjects = "['Land_CzechHedgehog_01_new_F', 'Land_CzechHedgehog_01_old_F']";
force ttt_dismantle_neededItem = "Toolkit";
force ttt_dismantle_neededSkill = 1;
```
