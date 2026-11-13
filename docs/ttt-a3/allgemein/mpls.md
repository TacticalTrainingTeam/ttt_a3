---
title: Missionspersistentes Loadout-System
description: >-
  Speichert regelmäßig das Loadout jedes Spielers und gibt es bei Respawn und
  Wiederbeitritt zurück.
published: true
date: '2026-11-12T12:38:38.741Z'
tags:
  - arma3
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

::block-infobox{name="Missionspersistentes Loadout-System"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Speichert regelmäßig das Loadout jedes Spielers und gibt es ihm bei Respawn und Wiederbeitritt (JIP) zurück.

# Benutzung

Läuft automatisch:

- 30 Sekunden nach dem Beitritt wird das erste Loadout gespeichert. Es gilt als **Start-Ausrüstung**.
- Danach wird alle 10 Minuten gespeichert, außerdem beim Respawn und beim Verlassen des Servers.
- Beim Respawn und beim Wiederbeitritt bekommt der Spieler sein zuletzt gespeichertes Loadout.
- Wer per JIP beitritt, findet an der TTT-Flagge die Mausrad-Aktion **Start-Ausrüstung ausrüsten**.

Das gespeicherte Loadout steht auf der Karte unter **Ausrüstung > Gespeicherte Ausrüstung**.

!["Beispielbild"](https://i.imgur.com/Xg2Zjea.jpeg)

## Zeus

Ist Zeus Enhanced geladen, gibt es per Rechtsklick auf einen Spieler das Untermenü **TTT - MPLS**:

| Aktion | Wirkung |
| --- | --- |
| Start-Ausrüstung wiederherstellen | Setzt den Spieler auf seine Start-Ausrüstung zurück |
| Ausrüstungs-Snapshot erstellen | Speichert die aktuelle Ausrüstung in einem eigenen Platz, unabhängig vom automatischen Speichern |
| Snapshot wiederherstellen | Setzt den Spieler auf den letzten Snapshot zurück |

Der Spieler bekommt beim Zurücksetzen jeweils einen Hinweis.

# Funktionen

## `ttt_mpls_fnc_saveLoadout`

Speichert das aktuelle Loadout eines Spielers sofort.

```sqf
[player] call ttt_mpls_fnc_saveLoadout;
```

| # | Argument | Typ | Optional | Standard |
| - | --- | --- | --- | --- |
| 0 | Spieler | OBJECT | Nein | - |
| 1 | UID des Spielers | STRING | Ja | `""` |
| 2 | Eintrag auf der Karte aktualisieren | BOOL | Ja | `true` |

Rückgabewert: BOOL, `true` bei Erfolg

# Events

| Event | Wann | Parameter | Lokalität |
| --- | --- | --- | --- |
| `ttt_mpls_API_loadoutApplied` | Ein gespeichertes Loadout wurde dem Spieler gegeben | `_player, _newLoadout, _oldLoadout` | lokal |
| `ttt_mpls_API_loadoutSaved` | Das Loadout des Spielers wurde gespeichert | `_player, _loadout` | lokal |
