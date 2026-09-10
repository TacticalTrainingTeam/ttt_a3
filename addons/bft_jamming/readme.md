# BFT Jamming

Fügt einen Zeus/Editor-Modul "Set as BFT Jammer" hinzu, der cTabs Blue Force Tracker stört -
gleiches Grundprinzip wie Crow's EW-Störsender (Gerät, Radius, per Spektrumgerät ortbar), aber
für den BFT statt Funk/Drohnen.

## Funktionsweise

Das Modul registriert das synchronisierte Objekt (oder ein erzeugtes `Crows_dataterminal`, falls
keines synchronisiert ist - wie bei Crow's EWs eigenem "Set as Jammer"-Modul) über Crow's EWs
eigenes öffentliches CBA-Event `crowsEW_main_addJammer` als ganz normalen Störsender in dessen
`jamMap`. Crow's EW kennt unsere Fähigkeits-Tags (`BftJammerBlackout`/`BftJammerDrift`/
`BftJammerMixed`) nicht, transportiert sie aber unverändert mit - dadurch bekommen wir Zeus-Marker,
Aktivieren/Deaktivieren per Rechtsklick und JIP-Sync komplett kostenlos, ohne eine einzige Zeile
Crow's EW anzufassen.

Drei Störungsarten stehen als Dropdown zur Wahl (nicht kombinierbar, ein Gerät = eine Art):

- **Blackout**: Einheiten innerhalb des Gesamtradius (Effektiv + Abklingen) verschwinden
  komplett aus `cTabBFTmembers`/`cTabBFTgroups`/`cTabBFTvehicles`.
- **Drift**: Einheiten bleiben sichtbar, ihre angezeigte Position bekommt einen Versatz, der
  innerhalb des effektiven Radius maximal ist und zum äußeren Rand des Abklingradius auf null
  abfällt (gleiche Falloff-Logik wie Crow's EWs `fnc_calcSignalStrength.sqf`). Der Versatz wird
  pro Einheit/Störsender geglättet (Ziel-Offset wird nur alle paar Pulse neu gewürfelt, dazwischen
  wird interpoliert), damit das Symbol sichtbar wandert statt zu springen.
- **Mixed**: kombiniert beide über die vorhandenen zwei Radien - innerhalb des effektiven Radius
  Blackout (kein Fix mehr, wie ein Empfänger direkt am Störsender), im Abklingradius darum herum
  Drift mit der gleichen abklingenden Stärke wie oben. Kein zusätzliches Attribut nötig, nur eine
  dritte Fallunterscheidung in `fnc_applyBftJam.sqf`.

Die eigentliche Manipulation passiert clientseitig: cTab baut `cTabBFTmembers`/`cTabBFTgroups`/
`cTabBFTvehicles` lokal auf jedem Client neu auf und feuert danach das lokale Event
`ctab_main_listsUpdated`. Wir hängen uns dort ein und mutieren dieselben globalen Arrays, bevor
cTab sie das nächste Mal zeichnet - auch hier keine cTab-Datei verändert.

Auf dem Spektrumgerät ist ein aktiver BFT-Störsender unter dem Signaltyp `sweep_bft` auf der am
Modul eingestellten Frequenz (Attribut `Frequency`, Standard 805) ortbar, unabhängig davon welche
Störungsart gewählt wurde. Die konkrete Frequenz ist beliebig, solange sie innerhalb des vom
Spektrumgerät abgedeckten Bereichs liegt.

## Wichtig: cTab-Modus

Drift wirkt sich nur aus, wenn `ctab_core_bft_mode = 2` ("atSync") gesetzt ist - im Modus 1
("realTime") liest `cTab_fnc_drawBftMarkers` die Position live neu ein und ignoriert den
gespeicherten Wert, den wir manipulieren. `addons/settings/settings/cTab.inc.sqf` erzwingt daher
Modus 2 repo-weit. Blackout funktioniert unabhängig vom Modus, da ein entferntes Listenelement in
keinem Modus gezeichnet wird.

Es gibt bewusst keine CBA-Einstellungen: ohne platziertes Modul passiert ohnehin nichts (ein
globaler Ein/Aus-Schalter wäre wirkungslos), die Frequenz ist Modul-Attribut statt globaler Wert
(unterschiedliche Störsender können unterschiedliche Frequenzen haben), und die Drift-Feinabstimmung
(`BFT_JAM_MAX_DRIFT_DISTANCE`, `BFT_JAM_DRIFT_UPDATE_INTERVAL` in `script_component.hpp`) ist
bewusst fest verdrahtet, damit sich Drift auf jedem Server gleich verhält.

## Kopplung an Fremdmods (wichtig bei Updates)

Diese Integration läuft ausschließlich über Crow's EWs und cTabs eigene öffentliche CBA-
Events/globale Variablen, nicht über eine offiziell dokumentierte Plugin-API:

- `crowsEW_main_addJammer`, `crowsEW_main_updateJammers`, `crowsEW_main_jamMap`
- `crowsEW_spectrum_addBeacon`, `crowsEW_spectrum_removeBeacon`
- `ctab_main_listsUpdated`, `cTabBFTmembers`/`cTabBFTgroups`/`cTabBFTvehicles`

Ein zukünftiges Update von Crow's EW oder cTab könnte diese Namen oder Array-Formate ändern und
das Addon stillschweigend brechen. Bei Versionssprüngen dieser beiden Mods entsprechend testen.

## Abhängigkeiten

- `ttt_common`
- `crowsEW_main`, `crowsEW_spectrum` ([Crow's Electronic Warfare](https://github.com/Crowdedlight/Crows-Electronic-Warfare))
- `cTab_core`, `cTab_main` ([cTab](https://github.com/jetelain/cTab))

## Maintainer

- Andy
