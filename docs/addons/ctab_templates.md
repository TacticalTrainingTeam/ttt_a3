# cTab Nachrichten Vorlagen

Das cTab Nachrichten Vorlagen Addon stellt standardisierte militärische Nachrichtenformate für das [cTab Advanced](https://steamcommunity.com/sharedfiles/filedetails/?id=3438246217) Tablet-System bereit. Diese Vorlagen ermöglichen eine schnelle und konsistente Kommunikation für medizinische Evakuierungen, Feuerunterstützungsanfragen und logistische Koordination.

## Voraussetzungen

- cTab Advanced BETA - Erforderlich für das Nachrichten-Vorlagen-System

## Übersicht

Dieses Addon registriert drei standardisierte Nachrichtenvorlagen im cTab-System:

1. **NATO MedEvac (9-Liner)** - Standard-Format für medizinische Evakuierungsanfragen
2. **TTT 5-Liner** - Vereinfachtes Koordinationsformat des Tactical Training Teams
3. **FDCB** - Fire Direction Control Briefing für Artillerie-/Mörserunterstützung

Alle Vorlagen werden automatisch registriert, wenn das Addon geladen wird und cTab vorhanden ist.

## Nachrichten Vorlagen

### NATO MedEvac (9-Liner)

!!! warning
    Wird im TTT nicht benutzt, muss aber vorhanden sein.

Die NATO MedEvac-Vorlage implementiert das standardmäßige 9-Zeilen-Format für medizinische Evakuierungsanfragen, das von NATO-Streitkräften verwendet wird.

### TTT 5-Liner

Der TTT 5-Liner ist das vereinfachte Koordinationsformat des Tactical Training Teams für logistische Operationen, Personentransport und allgemeine Koordinationsaufgaben.

**Referenz:** [TTT 5-Liner Anleitung](https://wiki.tacticalteam.de/de/Handbuch/Nachschubkr%C3%A4fte/Logistik#h-5-liner)

### FDCB (Fire Direction Control Brief)

Die FDCB-Vorlage wird für die Anforderung von Artillerie- oder Mörserfeuerunterstützung mit präzisen Zielinformationen verwendet.

**Referenz:** [FDCB](https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%C3%BCtzungskr%C3%A4fte/Artillerie/FDCB)

## Technische Implementierung

### Functions

#### `ttt_ctab_messages_fnc_medevac`

Registriert die NATO MedEvac 9-Liner Vorlage mit cTab.

```sqf
call ttt_ctab_messages_fnc_medevac;
```

**Wird automatisch während der Initialisierung aufgerufen.**

#### `ttt_ctab_messages_fnc_fiveline`

Registriert die TTT 5-Liner Vorlage mit cTab.

```sqf
call ttt_ctab_messages_fnc_fiveline;
```

**Wird automatisch während der Initialisierung aufgerufen.**

#### `ttt_ctab_messages_fnc_fdcb`

Registriert die FDCB Feuerunterstützungsvorlage mit cTab.

```sqf
call ttt_ctab_messages_fnc_fdcb;
```

**Wird automatisch während der Initialisierung aufgerufen.**

### Registrierung

Alle Vorlagen werden automatisch beim Missionsstart über den `XEH_postInit.sqf` Handler registriert. Es ist keine manuelle Einrichtung erforderlich.

## Externe Ressourcen

- [cTab Nachrichten-Vorlagen-System](https://maps.plan-ops.fr/MessageTemplates) - Offizielles Vorlagen-Repository
- [cTab Advanced im Steam Workshop](https://steamcommunity.com/sharedfiles/filedetails/?id=3438246217)

## Maintainer

- Andx
