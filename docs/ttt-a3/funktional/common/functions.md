---
title: Common – Funktionen
description: >-
  Skriptfunktionen des Common-Addons für Missionsbauer: Kisten befüllen, Intel,
  Verstärkung, Flak-Feuer und KI-Fähigkeiten.
published: true
date: '2026-11-12T14:01:04.556Z'
tags:
  - arma3
  - missionsbauer
  - skripte
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

::block-infobox{name="Common – Funktionen"}
```yaml
Ansprechpartner: "Andx (Discord: andx), EinStein"
```
::

Skriptfunktionen für Missionsbauer: Kisten befüllen, Intel, Verstärkung, Flakfeuer und KI-Fähigkeiten.

# Funktionen

## `ttt_common_fnc_crateFiller`

Befüllt Kisten oder Fahrzeuge mit Gegenständen. Auf dem Server ausführen, z.B. in der `initServer.sqf`.

```sqf
[
    [fahrzeug_01, fahrzeug_03],
    [
        ["Toolkit", 1],
        ["ACE_EntrenchingTool", 5],
        ["30Rnd_556x45_Stanag", 50]
    ],
    false
] call ttt_common_fnc_crateFiller;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Kisten oder Fahrzeuge | ARRAY | Nein | - |
| 1 | Inhalt als Liste aus `[Klassenname, Anzahl]` | ARRAY | Nein | - |
| 2 | Vorherigen Inhalt leeren | BOOL | Ja | `true` |

Rückgabewert: keiner

## `ttt_common_fnc_addIntel`

Macht ein Objekt zu Intel, das Spieler aufheben können. Der Inhalt erscheint danach auf der Karte unter **Intel**. In der `initPlayerLocal.sqf` ausführen.

```sqf
[intel_01, "Lagekarte des Gegners untersuchen", false, ["Gefundene Karte", "<img image='pictures\Karte_v3.paa' width=370 height=370/>"]] call ttt_common_fnc_addIntel;
[intel_02, "Dokumente nehmen", true, ["Eingesammeltes Dokument", "Hier stehen wichtige Informationen"]] call ttt_common_fnc_addIntel;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Objekt | OBJECT | Nein | - |
| 1 | Text der Aktion | STRING | Nein | - |
| 2 | Objekt nach dem Aufheben ausblenden | BOOL | Nein | - |
| 3 | `[Überschrift, Text]` für die Karte. Der Text kann HTML enthalten, z.B. Bilder | ARRAY | Nein | - |

Rückgabewert: keiner

> [!WARNING]
> Pro Objekt nur ein Intel. Sonst verschwindet beim Aufheben die falsche Aktion, und JIP-Spieler bekommen alle Intel des Objekts, auch die noch nicht gefundenen. Für mehrere Intel mehrere Objekte nehmen.

## `ttt_common_fnc_callReinforcements`

Erzeugt Verstärkung mit einem Fahrzeug, bringt sie zu einem Absetzpunkt und lässt sie von dort angreifen. Auf dem Server ausführen, am besten in einem Trigger mit **Nur Server**.

Ist [LAMBS Danger](https://steamcommunity.com/workshop/filedetails/?id=1858075458) geladen, nutzen Bodentruppen die LAMBS-Wegpunkte. Fastrope und Fallschirmsprünge nutzen die Wegpunkte von [Zeus Enhanced](https://steamcommunity.com/sharedfiles/filedetails/?id=1779063631). Kann ein Hubschrauber kein Fastrope, landet er stattdessen.

```sqf
[l_sp_1, l_rp_1, l_at_1, EAST, "O_APC_Wheeled_02_rcws_v2_F"] call ttt_common_fnc_callReinforcements;
[l_sp_1, l_rp_1, l_at_1, EAST, "O_Heli_Light_02_dynamicLoadout_F", 1, ["O_Soldier_SL_F", "O_Soldier_TL_F", "O_Soldier_F"], 1, 50] call ttt_common_fnc_callReinforcements;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Startpunkt | OBJECT oder Position | Nein | - |
| 1 | Absetzpunkt | OBJECT oder Position | Nein | - |
| 2 | Angriffsziel | OBJECT oder Position | Nein | - |
| 3 | Seite | SIDE | Nein | - |
| 4 | Fahrzeug-Klassenname | STRING | Nein | - |
| 5 | Verhalten am Absetzpunkt (siehe unten) | NUMBER | Ja | `0` |
| 6 | Infanterie als Liste von Klassennamen oder CfgGroups-Eintrag. Was nicht ins Fahrzeug passt, wird gelöscht | ARRAY oder CONFIG | Ja | `configFile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad"` |
| 7 | Verhalten der Infanterie: 0 = entspannt, 1 = vorsichtig, 2 = Kampf | NUMBER | Ja | `2` |
| 8 | Flughöhe | NUMBER | Ja | `80` |

| Verhalten | Luftfahrzeug | Bodenfahrzeug |
| --- | --- | --- |
| 0 | Landet, Infanterie sitzt ab, Fahrzeug fliegt zurück und wird gelöscht | Infanterie sitzt ab, Fahrzeug fährt zurück und wird gelöscht |
| 1 | Infanterie seilt sich ab (Fastrope), Hubschrauber fliegt zurück und wird gelöscht | Infanterie sitzt ab, Fahrzeug greift mit an |
| 2 | Infanterie springt mit Fallschirm ab, Hubschrauber fliegt zurück und wird gelöscht | Infanterie sitzt ab, Fahrzeug verteidigt den Absetzpunkt |

Rückgabewert: keiner

## `ttt_common_fnc_doFlakFire`

Lässt eine Flak dauerhaft in den Himmel feuern. Die Flak braucht beim Start einen Richtschützen. Das Feuer endet, wenn die Flak zerstört ist, der Richtschütze stirbt oder aussteigt, oder mit [`ttt_common_fnc_stopFlakFire`](#tttcommonfncstopflakfire). Auf dem Server ausführen, z.B. in einem Trigger mit **Nur Server**.

```sqf
handle_01 = [flak_01] call ttt_common_fnc_doFlakFire;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Flak | OBJECT | Nein | - |

Rückgabewert: NUMBER, Kennung des laufenden Flakfeuers. Feuert die Flak schon, wird die bestehende Kennung zurückgegeben.

## `ttt_common_fnc_stopFlakFire`

Beendet das Flakfeuer. Danach bekommt die Flak beim Nachladen keine unendliche Munition mehr. Auf dem Server ausführen.

```sqf
[flak_01] call ttt_common_fnc_stopFlakFire;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Flak | OBJECT | Nein | - |

Rückgabewert: keiner

## `ttt_common_fnc_setAISkill`

Setzt die Fähigkeiten einer KI-Einheit einzeln. Alle Werte von 0 bis 1.

```sqf
[ai_01, 0.45, 0.45, 0.25, 0.25, 0.25, 0.45, 0.45, 0.45, 0.45] call ttt_common_fnc_setAISkill;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Einheit | OBJECT | Nein | - |
| 1 | Allgemein | NUMBER | Ja | `0.75` |
| 2 | Mut | NUMBER | Ja | `0.75` |
| 3 | Zielgenauigkeit | NUMBER | Ja | `0.65` |
| 4 | Zittern beim Zielen | NUMBER | Ja | `0.65` |
| 5 | Zielgeschwindigkeit | NUMBER | Ja | `0.65` |
| 6 | Führung | NUMBER | Ja | `0.75` |
| 7 | Entdeckungsreichweite | NUMBER | Ja | `0.85` |
| 8 | Entdeckungsgeschwindigkeit | NUMBER | Ja | `0.85` |
| 9 | Nachladegeschwindigkeit | NUMBER | Ja | `0.75` |

Rückgabewert: keiner

## `ttt_common_fnc_setAISkillLevel`

Setzt die Fähigkeiten einer KI-Einheit über eine Stufe. Die Werte werden zufällig aus der Spanne der Stufe gewählt, die Zielwerte liegen immer 0,2 darunter.

```sqf
[ai_01, "Recruit"] call ttt_common_fnc_setAISkillLevel;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Einheit | OBJECT | Nein | - |
| 1 | Stufe: `"Novice"`, `"Rookie"`, `"Recruit"`, `"Veteran"` oder `"Expert"` | STRING | Ja | `"Veteran"` |

Rückgabewert: keiner
