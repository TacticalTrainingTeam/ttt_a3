---
title: Umgebungseffekte
description: Atemwolken und Sand- oder Schneesturm als Effekte für Missionen.
published: true
tags:
  - arma3
  - missionsbauer
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

::block-infobox{name="Umgebungseffekte"}
```yaml
Ansprechpartner: "EinStein"
```
::

Atemwolken und Sand- oder Schneesturm als Effekte für Missionen.

# Benutzung

Beide Effekte gibt es als 3DEN-Modul, als Zeus-Modul und per Skript.

## Atemwolken

Vor dem Mund aller Einheiten, die zu diesem Zeitpunkt existieren, entsteht eine Atemwolke wie bei kalter Luft.

- **3DEN:** Modul **Erzeuge Ausatemeffekt** (Kategorie **Effekte**) platzieren.
- **Zeus:** Modul **Erzeuge Ausatemeffekt** (Kategorie **Effekte**).

## Sturm

Die Sicht wird eingeschränkt, Sturmgeräusche spielen und die Kamera wackelt gelegentlich. Infanterie kann standardmäßig nur noch gehen. Vorhandene KI zielt und sieht 75 % schlechter. Es kann immer nur ein Sturm aktiv sein.

- **3DEN:** Modul **Erstelle Sturm** (Kategorie **Umgebung**) platzieren, optional mit einem Trigger synchronisieren.
- **Zeus:** Modul **Erstelle Sturm** (Kategorie **Umgebung**).

| Attribut | Standard | Beschreibung |
| --- | --- | --- |
| Dauer | 300 | Sekunden, mindestens 60 |
| Objekteffekte | aus | Wind bewegt Fahrzeuge und Spieler leicht |
| Sturmtyp | Sandsturm | Sandsturm oder Schneesturm |
| Bewegungsgeschwindigkeit begrenzen | an | Infanterie kann nur gehen |
| Windrichtung | 0 | Grad |

# Funktionen

## `ttt_effects_fnc_condensedBreathInit`

Erzeugt die Atemwolken. Muss auf jedem Spieler-Rechner laufen, z.B. in der `initPlayerLocal.sqf`.

```sqf
[] call ttt_effects_fnc_condensedBreathInit;
```

Argumente: keine

Rückgabewert: keiner

## `ttt_effects_fnc_stormInit`

Startet einen Sturm. Auf dem Server ausführen, z.B. in der `initServer.sqf` oder einem Trigger mit **Nur Server**.

```sqf
[600, false, 1, true, 270] call ttt_effects_fnc_stormInit;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Dauer in Sekunden, mindestens 60 | NUMBER | Ja | `300` |
| 1 | Wind bewegt Objekte | BOOL | Ja | `false` |
| 2 | Sturmtyp: 0 = Sand, 1 = Schnee | NUMBER | Ja | `0` |
| 3 | Infanterie kann nur gehen | BOOL | Ja | `true` |
| 4 | Windrichtung in Grad | NUMBER | Ja | zufällig |

Rückgabewert: ARRAY `[Endzeit, Windrichtung]`, die Endzeit als Missionszeit (`time`)
