---
title: Compat Redd'n'Tank
description: Enthält diverse Verbesserungen und Fixes für Redd'n'Tank Fahrzeuge.
published: true
tags:
  - arma3
  - fahrzeuge
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

::block-infobox{name="Compat Redd'n'Tank"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Fehlerbehebungen und einheitliche Funkausstattung für Redd'n'Tank-Fahrzeuge.

# Voraussetzungen

- [Redd'n'Tank Vehicles](https://steamcommunity.com/sharedfiles/filedetails/?id=1128145626) - Erforderlich

# Änderungen

## ACRE

Fuchs, Gepard, Luchs, Marder, Wiesel MK20, Wiesel TOW und Wolf haben die gleichen Funkracks:

- Rack 1: SEM90 + SEM70 (Funkkreis A)
- Rack 2: PRC103 + PRC117F (Funkkreis B)
- Rack 3: SEM90 (Funkkreis C)

Infanterietelefon und Bordverständigung sind ebenfalls vereinheitlicht.

## Marder

- Der Turm ist nicht mehr gesperrt, wenn der Fahrer über Luke ist
- Der Motorstart dauert 5 Sekunden
- Behebt einige Fehler im Original

## M120 Mörser

ACE-CSW-Unterstützung und Fehlerbehebungen. Der [Mörser](/de/handbuch/kampfunterstützungskräfte/artillerie/moerser) kann direkt nach dem Laden feuern (`allowFireOnLoad`, siehe [ACE CSW](https://ace3.acemod.org/wiki/framework/crew-served-weapons-framework#3-additional-configuration-parameters)).

## GraMaWa

Stabiler, und die ACE-Aktionen zum seitlichen Drehen und zur Höhenverstellung funktionieren. Benötigt `force ace_csw_defaultAssemblyMode = true;` in den CBA-Einstellungen.

## MG3-Lafette

Lässt sich auch mit MG3 aus anderen Mods aufbauen (`BWA3_MG3`, `BWA3_MG3_bipod`, `BWA3_MG3_MicroT2_pointer_bipod`) und ist stabiler.

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team**.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_compat_rnt_lafetteMountTime` | `5` | Sekunden, um ein MG3 auf die Lafette zu montieren (1 bis 120) |
| `ttt_compat_rnt_lafetteDisassembleTime` | `10` | Sekunden, um die Lafette abzubauen (1 bis 120) |
