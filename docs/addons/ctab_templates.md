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
    Wird im TTT nicht benutzt muss aber vorhanden sein.

Die NATO MedEvac-Vorlage implementiert das standardmäßige 9-Zeilen-Format für medizinische Evakuierungsanfragen, das von NATO-Streitkräften verwendet wird.

**Lines:**

- **Line 1** - Location: Grid coordinates of pickup zone
- **Line 2** - Call Sign & Frequency: Contact information for coordination
- **Line 3** - Number of Patients/Precedence:
  - A: URGENT (Hospital under 90 min)
  - B: PRIORITY (Hospital under 4 hours)
  - C: ROUTINE (Hospital within 24 hours)
- **Line 4** - Special Equipment Required:
  - A: None
  - B: Hoist (Winch)
  - C: Extrication
  - D: Ventilator
  - E: Others
- **Line 5** - Number to be Carried Lying/Sitting:
  - L: Litter (Stretcher)
  - A: Ambulatory (Walking)
  - E: Escorts (e.g., for child patient)
- **Line 6** - Security at Pickup Zone:
  - N: No enemy
  - P: Possible enemy
  - E: Enemy in area
  - X: Hot PZ - Armed escort required
- **Line 7** - Pickup Zone Marking Method:
  - A: Panels
  - B: Pyro
  - C: Smoke
  - D: None
  - E: Other
- **Line 8** - Nationality/Status:
  - A: Military
  - D: Civilian
  - E: PW / Detainee
  - F: Child
- **Line 9** - Pickup Zone Terrain/Obstacles: Description of terrain and obstacles

### TTT 5-Liner

Der TTT 5-Liner ist das vereinfachte Koordinationsformat des Tactical Training Teams für logistische Operationen, Personentransport und allgemeine Koordinationsaufgaben.

**Referenz:** [TTT 5-Liner Anleitung](https://wiki.tacticalteam.de/de/Handbuch/Nachschubkr%C3%A4fte/Logistik#h-5-liner)

**Lines:**

- **Line 0** - Identifikator: Unique ID for the request (e.g., "ID 001")
- **Line 1** - Ort (Location):
  - Grid: Coordinates
  - LZ: Landing zone name
- **Line 2** - Anflug-/Anfahrtsrichtung (Approach Direction): Heading in degrees
- **Line 3** - Empfänger (Receiver):
  - Call Sign
  - Radio Channel/Frequency
- **Line 4** - Auftrag (Mission): Type of mission/request
- **Line 5** - Markierung (Marking):
  - Smoke: A
  - Plane (Panel): B
  - Light: C
  - Other: D
- **Hinweise (Notes):** Additional remarks

### FDCB (Fire Direction Control Brief)

Die FDCB-Vorlage wird für die Anforderung von Artillerie- oder Mörserfeuerunterstützung mit präzisen Zielinformationen verwendet.

**Referenz:** [FDCB](https://wiki.tacticalteam.de/de/Handbuch/Kampfunterst%C3%BCtzungskr%C3%A4fte/Artillerie/FDCB)

**Lines:**

- **Line 0** - ID: Unique identifier for the fire mission
- **Line 2** - Typ (Type):
  - Typ 1: Fire when ready
  - Typ II: Fire on command
  - Typ 3: Time on target (specific time)
- **Line 1** - Art (Type):
  - P: Point target
  - L: Linear target
  - F: Area target
- **Line 2** - Koordinaten (Coordinates):
  - Start: Starting coordinate
  - Ende: Ending coordinate (for linear/area)
  - Radius: Radius in meters (for area)
- **Line 3** - Höhe (Elevation): Altitude above sea level in meters
- **Line 4** - Anzahl Geschosse (Munitions): Type and quantity of munitions
- **Line 2** - Hinweise (Notes): Any additional information

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
