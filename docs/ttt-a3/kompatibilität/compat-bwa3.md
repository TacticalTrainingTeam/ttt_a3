---
title: Compat BWMod
description: Verbesserungen von Fahrzeugen aus der BWMod.
published: true
tags:
  - arma3
  - fahrzeuge
  - referenz
  - ace
  - bwmod
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Compat BWMod"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Verbesserungen an Fahrzeugen aus der BWMod, vor allem einheitliche ACRE-Funkausstattung.

# Voraussetzungen

- [BWMod](https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537) - Erforderlich
- [ACRE2](https://steamcommunity.com/sharedfiles/filedetails/?id=751965892) - Erforderlich
- [ITC Land Systems](https://steamcommunity.com/sharedfiles/filedetails/?id=1388192893) - Optional, für die Panzerhaubitze 2000

# Änderungen

## ACRE

Eagle, Dingo 2, Multi, Puma, [Skorpion](/de/handbuch/kampfunterstützungskräfte/pioniere/skorpion), Leopard 2 und Panzerhaubitze 2000 haben die gleichen Funkracks:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Infanterietelefon und Bordverständigung sind ebenfalls vereinheitlicht.

## Eagle IV

Am Eagle IV hängen zwei Patrouillenrucksäcke (`BWA3_PatrolPack_Fleck` bzw. `BWA3_PatrolPack_Tropen`), die sich über die ACE-Interaktion abnehmen lassen.

## NH-90

Die Plätze 13 und 14 sind gesperrt, weil man dort unter dem Hubschrauber sitzt.

## Mörser 120 mm

Der [Mörser](/de/handbuch/kampfunterstützungskräfte/artillerie/moerser) kann direkt nach dem Laden feuern (`allowFireOnLoad`, siehe [ACE CSW](https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework#3-additional-configuration-parameters)).

## Panzerhaubitze 2000 mit ITC

Ist ITC geladen, bekommt die Panzerhaubitze 2000 den ITC-Feuerleitrechner mit Schusstafeln und Munition für die Ladungen 1 bis 5.
