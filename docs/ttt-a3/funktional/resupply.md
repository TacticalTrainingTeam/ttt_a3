---
title: Nachschub
description: >-
  Nachschubkisten, die mit der Ausrüstung gefüllt werden, die die Spieler zu
  Missionsbeginn dabeihaben.
published: true
date: '2026-11-12T19:58:44.188Z'
tags:
  - arma3
  - logistik
  - referenz
  - ace
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

::block-infobox{name="Nachschub"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

[Nachschubkisten](/de/missionsbau/nachschubkisten), die mit der Ausrüstung gefüllt werden, die die Spieler zu Missionsbeginn dabeihaben. Angefordert werden sie an einem Depot, per Zeus oder per Skript.

# Benutzung

## Kistentypen

5 Sekunden nach Missionsstart liest der Server die Ausrüstung aller Spieler ein und mittelt sie pro Gruppe. Daraus werden die Kisten befüllt.

| Typ | Inhalt |
| --- | --- |
| Munitionskiste | Gewehr- und Pistolenmagazine |
| Granatenkiste | Hand-, Rauch-, Leucht- und Unterlaufgranaten |
| Panzerabwehrkiste | Raketen und Lenkflugkörper, bei echten Einwegwaffen auch neue Abschussrohre |
| Sprengstoffkiste | [Minen](/de/handbuch/kampfunterstützungskräfte/pioniere/minen) und Sprengladungen |
| Ausrüstungskiste | Sonstiges wie Batterien und Kabelbinder, ohne Sanitätsmaterial |
| Sanitätskiste Alpha, Bravo, Charlie | Fester Inhalt aus [Common – Objekte](/de/ttt-a3/funktional/common/objects), mit KAT die Kisten aus [Compat KAM](/de/ttt-a3/kompatibilit%C3%A4t/compat-kam) |

Hatte kein Spieler etwas aus einer Kategorie dabei, gibt es diese Kiste nicht. Wer sie anfordert, bekommt einen Hinweis. JIP-Spieler und spätere Umrüstungen sind nicht erfasst, dafür kann die Datenbank neu aufgebaut werden (Zeus oder Skript).

## Depot

Ein Objekt wird zum Depot, entweder in den Attributen unter **TTT - Resupply** mit dem Häkchen **Nachschub-Depot** oder in seiner Init:

```sqf
this setVariable ["ttt_resupply_container", true];
```

Spieler finden am Depot in der ACE-Interaktion das Menü **Nachschub** mit allen Kistentypen. Kisten, die gerade nicht verfügbar sind, werden ausgeblendet.

Optional lässt sich pro Depot begrenzen, wie oft ein Typ ausgegeben wird (nur über die Init):

```sqf
this setVariable ["ttt_resupply_limits", [["ammo", 3], ["at", 1]]];
```

Typen: `"ammo"`, `"grenades"`, `"at"`, `"explosives"`, `"support"`, `"medical_alpha"`, `"medical_bravo"`, `"medical_charlie"`. Nicht aufgeführte Typen sind unbegrenzt.

## Wo die Kiste erscheint

Die Kiste sucht sich einen freien Platz im Umkreis von 10 m. Für einen festen Platz eine gelbe 2x2-Fläche (`VR_Area_01_square_2x2_yellow_F`) im Umkreis von 10 m um das Depot legen. Die Kiste erscheint dann immer dort. Steht dort schon eine Kiste, wird am Depot keine neue erzeugt. Zeus weicht in dem Fall auf einen freien Platz aus.

## Zeus

- **Module:** Unter **Unterstützung** gibt es ein Modul pro Kistentyp. Die Kiste erscheint am Modul.
- **Kontextmenü** (mit Zeus Enhanced): Rechtsklick öffnet **TTT - Nachschub**.
  - Auf leerem Boden: alle Kistentypen und **Nachschub-Datenbank neu aufbauen**
  - Auf einem Objekt: **Als Nachschub-Depot markieren** bzw. **Nachschub-Depot-Markierung entfernen**

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team > Nachschub**.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_resupply_faction` | `0` | Kistenmodelle: 0 = NATO, 1 = OPFOR, 2 = INDEP |
| `ttt_resupply_quantityMultiplier` | `1.0` | Mengenmultiplikator (0.5 bis 5.0) |
| `ttt_resupply_spawnPointClass` | `"VR_Area_01_square_2x2_yellow_F"` | Objekt, das den festen Platz für Kisten markiert |

# Funktionen

Beide Funktionen sind auf jedem Rechner aufrufbar.

## `ttt_resupply_fnc_spawnCrate`

Erzeugt eine Nachschubkiste in der Nähe einer Position oder eines Objekts.

```sqf
[getPos myMarker, "medical_alpha"] call ttt_resupply_fnc_spawnCrate;

// Dynamische Kisten erst, wenn die Datenbank fertig ist
["ttt_resupply_dbReady", {
    [supplyDepot, "ammo"] call ttt_resupply_fnc_spawnCrate;
}] call CBA_fnc_addEventHandler;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Position oder Objekt, in dessen Nähe die Kiste erscheint | ARRAY oder OBJECT | Nein | - |
| 1 | Kistentyp, siehe oben | STRING | Nein | - |
| 2 | Netzwerk-ID, die bei einem Fehler benachrichtigt wird | NUMBER | Ja | `-1` |
| 3 | Hinweis als Zeus-Nachricht statt als Hint | BOOL | Ja | `false` |
| 4 | Depot, dessen Limit geprüft und verbraucht wird | OBJECT | Ja | `objNull` |
| 5 | Bei belegter Fläche auf einen freien Platz ausweichen | BOOL | Ja | `false` |

Rückgabewert: OBJECT, die Kiste oder `objNull` bei einem Fehler

## `ttt_resupply_fnc_rebuildDatabase`

Liest die Ausrüstung aller anwesenden Spieler neu ein, z.B. nach JIP. Bis der neue Scan fertig ist, gilt die alte Datenbank.

```sqf
[] call ttt_resupply_fnc_rebuildDatabase;
```

Argumente: keine

Rückgabewert: keiner

# Events

| Event | Wann | Parameter | Lokalität |
| --- | --- | --- | --- |
| `ttt_resupply_dbReady` | Die Datenbank ist fertig aufgebaut, auch nach einem Neuaufbau | keine | Server |
