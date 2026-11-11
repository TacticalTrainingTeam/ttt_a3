---
title: cTab Nachrichten Vorlagen
description: >-
  Das cTab Nachrichten Vorlagen Addon stellt standardisierte militärische
  Nachrichtenformate für das cTab Advanced Tablet-System bereit.
published: true
date: '2026-11-11T12:57:50.266Z'
tags:
  - arma3
  - funk
  - referenz
  - pruefung-noetig
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

Das cTab Nachrichten Vorlagen Addon stellt standardisierte militärische Nachrichtenformate für das [cTab Advanced](https://steamcommunity.com/sharedfiles/filedetails/?id=3438246217) Tablet-System bereit. Diese Vorlagen ermöglichen eine schnelle und konsistente Kommunikation für medizinische Evakuierungen, Feuerunterstützungsanfragen und logistische Koordination.

Alle Vorlagen werden automatisch beim Missionsstart über den `XEH_postInit.sqf` Handler registriert. Es ist keine manuelle Einrichtung erforderlich.

## Voraussetzungen

- cTab Advanced BETA - Erforderlich für das Nachrichten-Vorlagen-System

## Übersicht

Dieses Addon registriert vier standardisierte Nachrichtenvorlagen im cTab-System:

1. **NATO MedEvac (9-Liner)** - Standard-Format für medizinische Evakuierungsanfragen
2. **TTT 5-Liner** - Vereinfachtes Koordinationsformat des Tactical Training Teams
3. **FDCB** - Fire Direction Control Briefing für Artillerie-/Mörserunterstützung
4. **CAS 9-Liner** - Close Air Support Anforderungsformat für Luftnahunterstützung

Alle Vorlagen werden automatisch registriert, wenn das Addon geladen wird und cTab vorhanden ist.

## Nachrichten Vorlagen

### NATO MedEvac (9-Liner)

> [!WARNING]
> Wird im TTT nicht benutzt, muss aber vorhanden sein.

Die NATO MedEvac-Vorlage implementiert das standardmäßige 9-Zeilen-Format für medizinische Evakuierungsanfragen, das von NATO-Streitkräften verwendet wird.

### TTT 5-Liner

Der TTT 5-Liner ist das vereinfachte Koordinationsformat des Tactical Training Teams für logistische Operationen, Personentransport und allgemeine Koordinationsaufgaben.

**Referenz:** [TTT 5-Liner Anleitung](/de/handbuch/nachschubkräfte/logistik#5-liner)

### FDCB (Fire Direction Command Briefing)

Die FDCB-Vorlage wird für die Anforderung von Artillerie- oder Mörserfeuerunterstützung mit präzisen Zielinformationen verwendet.

**Referenz:** [FDCB](/de/handbuch/kampfunterstützungskräfte/artillerie/fdcb)

### CAS 9-Liner

Die CAS (Close Air Support) 9-Liner Vorlage ist das standardisierte NATO-Format für die Anforderung von Luftnahunterstützung. Sie enthält alle notwendigen Informationen für die präzise Koordination von Luftangriffen auf Bodenziele.

**Referenz:** [9-Line](/de/handbuch/luftstreitkräfte/close-air-support)

## Externe Ressourcen

- [cTab Nachrichten-Vorlagen-System](https://maps.plan-ops.fr/MessageTemplates) - Offizielles Vorlagen-Repository
- [cTab Advanced im Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=3438246217)

## Maintainer

- Andx
