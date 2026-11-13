---
title: W-Shields
description: >-
  Macht Gebäude und Fahrzeuge unzerstörbar, Fenster und einzelne Fahrzeugteile
  bleiben zerstörbar.
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

::block-infobox{name="W-Shields"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Macht Gebäude und Fahrzeuge unzerstörbar. Fenster und einzelne Fahrzeugteile bleiben zerstörbar.

# Benutzung

## Gebäudeschild

| Wo | Wie |
| --- | --- |
| Gebäude der Karte (3DEN) | Modul **Buildingshield** (Kategorie **W-Framework**) auf das Gebäude setzen, es rastet am nächsten Gebäude ein |
| Selbst platzierte Gebäude (3DEN) | In den Attributen des Gebäudes unter **Gruppe W - Framework** das Häkchen **Gebäudeschild** setzen |
| Während der Mission (Zeus) | Rechtsklick auf das Gebäude, **TTT - W-Shields > Gebäudeschild hinzufügen** |

Attribute des Moduls:

| Attribut | Standard | Beschreibung |
| --- | --- | --- |
| Variablenname | leer | Globaler Variablenname für das Gebäude |
| Buildingshield | an | Gebäude wird unzerstörbar |
| Fenster entglasen | aus | Zerstört alle Fenster |
| Door 1 bis Door 8 | Geschlossen | Zustand der einzelnen Türen: Geschlossen, Verriegelt oder Offen |

Bei selbst platzierten Gebäuden gibt es das Attribut **Fenster entglasen** ebenfalls. Wird das Häkchen wieder entfernt, sind die Fenster wieder heil.

Das Modul wirkt nur beim Missionsstart und löscht sich danach selbst.

## Fahrzeugschild

Haupt- und Heckrotor bleiben heil, und der Motor fällt aus, wenn die Hülle das Schadenslimit erreicht.

| Wo | Wie |
| --- | --- |
| 3DEN | In den Attributen des Fahrzeugs unter **Gruppe W - Framework** das Häkchen **Fahrzeugschild** setzen |
| Zeus-Modul | Modul **Fahrzeugschild hinzufügen** (Kategorie **W-Framework**) auf das Fahrzeug ziehen |
| Zeus-Kontextmenü | Rechtsklick auf das Fahrzeug, **TTT - W-Shields > Fahrzeugschild hinzufügen** |

Das Zeus-Kontextmenü braucht Zeus Enhanced.

# Events

| Event | Wann | Parameter | Lokalität |
| --- | --- | --- | --- |
| `ttt_w_shields_API_buildingShieldTriggered` | Das Schild hat Schaden an einem Gebäude verhindert | `_unit, _source, _instigator, _directHit` | lokal |
| `ttt_w_shields_API_vehicleShieldTriggered` | Das Schild hat Schaden an einem Fahrzeug verhindert | `_unit, _source, _instigator` | lokal |
