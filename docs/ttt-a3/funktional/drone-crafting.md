---
title: FPV-Drohnenbau
description: >-
  Spieler können an einem Materialfahrzeug aus Einzelteilen FPV-Drohnen
  zusammenbauen: ein leerer Drohnenrahmen, Kabelbinder, bei Glasfaser-Drohnen
  ein Seil als Glasfaserkabel und je nach Typ ein …
published: true
date: '2026-11-11T12:55:24.694Z'
tags:
  - arma3
  - referenz
  - pruefung-noetig
  - ace
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

Spieler können an einem **Materialfahrzeug** aus Einzelteilen FPV-Drohnen zusammenbauen: ein
leerer Drohnenrahmen, Kabelbinder, bei Glasfaser-Drohnen ein Seil als Glasfaserkabel und je nach
Typ ein RPG-7-Sprengkopf werden zu einer einsatzbereiten Drohne.

> [!NOTE]
> Das Addon ist nur aktiv, wenn **RHS: Armed Forces of the Russian Federation** und
> **Ukraine FPV Drone** geladen sind. Fehlt einer der beiden Mods, ist der Drohnenbau samt
> Modul einfach nicht vorhanden, es gibt keine Fehlermeldung.

## So funktioniert es für Spieler

Wer höchstens 7 m (einstellbar) von einem Materialfahrzeug entfernt zu Fuß unterwegs ist, findet
in der ACE-Eigeninteraktion den Eintrag **FPV-Drohnenbau**:

``` text
FPV-Drohnenbau
├─ Standard-FPV
│   ├─ AP-Drohne (OG-7V) (X baubar)
│   ├─ HE-Drohne (TBG-7V) (X baubar)
│   └─ AT-Drohne (PG-7VL) (X baubar)
└─ Glasfaser-FPV
    ├─ LWL-Aufklärungsdrohne (ohne Sprengkopf) (X baubar)
    └─ LWL-AT-Drohne (PG-7VL) (X baubar)
```

Die Zahl hinter jedem Typ zeigt, wie viele Drohnen dieses Typs das Material im Fahrzeug noch
hergibt. Nach 5 Sekunden Montage (einstellbar) landet die fertige Drohne im **Rucksack**. Ist
dort kein Platz, kommt sie ins **Materialfahrzeug**. Ist auch dort kein Platz, wird nichts
verbraucht und die Materialien bleiben im Fahrzeug. Fehlt etwas, wird angezeigt, was genau fehlt.

Wer sich während der Montage zu weit vom Fahrzeug entfernt, bricht den Zusammenbau ab.

### Rezepte

| Drohne | Rahmen | Kabelbinder | Seil (6 m) | Sprengkopf |
| --- | --- | --- | --- | --- |
| AP-Drohne | 1 | 2 | - | OG-7V |
| HE-Drohne | 1 | 2 | - | TBG-7V |
| AT-Drohne | 1 | 2 | - | PG-7VL |
| LWL-Aufklärungsdrohne | 1 | 2 | 1 | - |
| LWL-AT-Drohne | 1 | 2 | 1 | PG-7VL |

Es zählt nur das Material, das direkt im Laderaum des Materialfahrzeugs liegt, nicht das im
eigenen Inventar und nicht das in Rucksäcken, die im Fahrzeug liegen.

## Materialfahrzeug festlegen

### Im Editor: Modul "Drohnen-Materialfahrzeug"

Das Modul liegt im Editor unter **Systeme > Module > Tactical Training Team**. Platzieren und mit einem oder
mehreren Fahrzeugen synchronisieren (Rechtsklick auf das Modul > **Verbinden > Synchronisieren
mit**). Auch Kisten funktionieren.

Option im Modul:

- **Startbestand laden** (Standard: an): Der gesamte Laderaum der Fahrzeuge wird bei
  Missionsstart geleert und mit dem Startbestand (siehe unten) befüllt. Abwählen, um stattdessen
  das im Editor eingestellte Inventar des Fahrzeugs zu behalten.

Mit Startbestand wird außerdem die Ladekapazität des Fahrzeugs angepasst: Das Material belegt
75 % des Laderaums, 25 % bleiben für fertige Drohnen frei (einstellbar).

### Während der Mission: Zeus-Kontextmenü

Ist [Zeus Enhanced](https://zen-mod.github.io/ZEN/) geladen, gibt es im Zeus-Interface per
Rechtsklick auf ein Fahrzeug oder eine Kiste das Untermenü **TTT - FPV-Drohnenbau**:

- **Als Materialfahrzeug festlegen (Startbestand laden)**: wie das Modul mit angehaktem Startbestand.
- **Als Materialfahrzeug festlegen (Inventar behalten)**: das Fahrzeug wird Materialfahrzeug, sein
  Inventar bleibt unverändert.
- **Auf Startbestand auffüllen** (nur bei Materialfahrzeugen): ergänzt, was zum Startbestand fehlt.
  Es wird nichts geleert, fertige Drohnen und alles andere im Laderaum bleiben liegen.
- **Materialfahrzeug-Markierung entfernen** (nur bei Materialfahrzeugen): das Fahrzeug ist kein
  Materialfahrzeug mehr. Sein Inventar bleibt erhalten.

Es kann beliebig viele Materialfahrzeuge gleichzeitig geben. Wird ein Materialfahrzeug zerstört,
kann dort nicht mehr gebaut werden.

### Per Skript

``` c++
// Auf jedem Rechner aufrufbar, z. B. in der initServer.sqf

// Als Materialfahrzeug festlegen und mit dem Startbestand befüllen
[myTruck] call ttt_drone_crafting_fnc_setVehicle;

// Als Materialfahrzeug festlegen, Inventar behalten
[myTruck, false] call ttt_drone_crafting_fnc_setVehicle;

// Auf den Startbestand auffüllen (ohne zu leeren)
[myTruck] call ttt_drone_crafting_fnc_restock;

// Markierung entfernen
[myTruck] call ttt_drone_crafting_fnc_removeVehicle;
```

> [!WARNING]
> **Umstieg von den alten Missionsskripten**
>
> Missionen, die noch `serverDroneCrafting.sqf` / `playerDroneCrafting.sqf` und den Variablennamen
> `drone_crafting_vehicle` nutzen, sollten die Skripte und ihre Einträge in `description.ext`
> (`CfgRemoteExec`) entfernen und stattdessen das Modul verwenden. Sonst gibt es den Drohnenbau
> im ACE-Menü doppelt.

## CBA-Einstellungen

``` c++
force ttt_drone_crafting_craftTime = 5;          // default: 5; Sekunden pro Drohne (1-60)
force ttt_drone_crafting_maxDistance = 7;        // default: 7; Meter zum Materialfahrzeug (2-30)
force ttt_drone_crafting_reserveCapacity = 0.25; // default: 0.25; freier Laderaum nach dem Startbestand (0-0.9)
force ttt_drone_crafting_stock = '[["ACE_CableTie", 50], ["ACE_rope6", 10], ["UA_Item_EMPTY", 20], ["rhs_rpg7_OG7V_mag", 15], ["rhs_rpg7_PG7VL_mag", 15], ["rhs_rpg7_TBG7V_mag", 10]]';
```

Der **Startbestand** ist eine Liste aus `[Classname, Anzahl]`-Paaren. Hier darf auch Ausrüstung
stehen, die für keine Drohne gebraucht wird, z. B. Sprengladungen oder ein RPG-7 zum Abfeuern der
übrigen Sprengköpfe:

``` c++
force ttt_drone_crafting_stock = '[["ACE_CableTie", 50], ["ACE_rope6", 10], ["UA_Item_EMPTY", 20], ["rhs_rpg7_OG7V_mag", 15], ["rhs_rpg7_PG7VL_mag", 15], ["rhs_rpg7_TBG7V_mag", 10], ["rhs_weap_rpg7", 1]]';
```

Unbekannte Classnames werden übersprungen. Ist die Liste selbst fehlerhaft (z. B. eine fehlende
Klammer oder ein fehlendes Anführungszeichen), bleibt der Laderaum unverändert. Änderungen wirken
sich erst beim nächsten Befüllen aus (Missionsstart, Festlegen oder Auffüllen per Zeus).

## Maintainer

- Andx
