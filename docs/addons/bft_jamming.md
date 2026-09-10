# BFT-Störung

Fügt ein Zeus/Editor-Modul hinzu, mit dem sich cTabs Blue Force Tracker stören lässt — nach dem gleichen Grundprinzip wie Crow's EWs Funk-/Drohnenstörsender: ein Gerät, ein Radius, per Spektrumgerät ortbar.

## Benutzung

Modul `Set as BFT Jammer` platzieren und optional mit einem Objekt synchronisieren, das als Störsender dienen soll. Ist kein Objekt synchronisiert, wird automatisch ein `Crows_dataterminal` erzeugt (wie beim Crow's-EW-eigenen `Set as Jammer`-Modul).

Einstellungen am Modul:

- **Jamming Type**: `Blackout`, `Drift` oder `Mixed` (Dropdown, nicht kombinierbar — ein Gerät hat genau eine Störungsart).
  - **Blackout**: Einheiten innerhalb des Gesamtradius (Effektiv + Abklingen) verschwinden komplett vom BFT.
  - **Drift**: Einheiten bleiben sichtbar, ihre angezeigte Position bekommt einen Versatz. Der Versatz ist im effektiven Radius am größten und nimmt zum äußeren Rand des Abklingradius auf null ab — je näher eine Einheit also am Zentrum des Störsenders ist, desto ungenauer wird ihre Position angezeigt. Der Versatz wandert dabei sichtbar statt zu springen.
  - **Mixed**: Blackout innerhalb des effektiven Radius, Drift im Abklingradius darum herum — nutzt dieselben zwei Radien, kein Kompromiss zwischen den beiden anderen Arten, sondern beide gleichzeitig je nach Distanzzone.
- **Effective Radius** / **Falloff Radius**: gleiche zwei-Radien-Logik wie bei Crow's EWs eigenem Störsender-Modul.
- **Frequency**: Frequenz (MHz), auf der das Signal dieses Störsenders im Spektrumgerät erscheint, solange er aktiv ist. Der konkrete Wert ist beliebig, solange er innerhalb des vom Spektrumgerät abgedeckten Bereichs liegt — unterschiedliche Störsender können unterschiedliche Frequenzen bekommen.
- **Active at Mission Start**: Störsender startet aktiv oder muss erst (z.B. per Zeus) eingeschaltet werden.

Der Störsender wird wie jeder andere Crow's-EW-Störsender behandelt: Zeus-Marker, Aktivieren/Deaktivieren per Rechtsklick und JIP-Sync funktionieren automatisch mit. Auf dem Spektrumgerät ist ein aktiver BFT-Störsender unter dem Signaltyp `sweep_bft` auf der am Modul eingestellten Frequenz ortbar — unabhängig davon, welche Störungsart gewählt wurde.

!!! warning
    Drift wirkt sich nur aus, wenn cTab im Modus "atSync" läuft (`ctab_core_bft_mode = 2`). Das TTT-Mod erzwingt diesen Modus bereits repo-weit über `addons/settings/settings/cTab.inc.sqf`. Im Modus "realTime" (`= 1`) liest cTab die Position live neu ein und ignoriert den gespeicherten, von uns manipulierten Wert — Blackout funktioniert dagegen in beiden Modi, da ein entferntes Listenelement nie gezeichnet wird.

Es gibt bewusst keine CBA-Einstellungen für dieses Addon: ohne platziertes Modul passiert ohnehin nichts, die Frequenz ist ein Modul-Attribut statt eines globalen Werts, und die Drift-Feinabstimmung (maximaler Versatz, Aktualisierungsintervall) ist fest im Code verdrahtet, damit sich Drift auf jedem Server gleich verhält.

## Voraussetzungen

- [Crow's Electronic Warfare](https://github.com/Crowdedlight/Crows-Electronic-Warfare) (`crowsEW_main`, `crowsEW_spectrum`)
- [cTab Advanced](https://steamcommunity.com/sharedfiles/filedetails/?id=3438246217) (`cTab_core`, `cTab_main`)

## Kopplung an Fremdmods

Diese Integration läuft ausschließlich über Crow's EWs und cTabs eigene öffentliche CBA-Events/globale Variablen, nicht über eine offiziell dokumentierte Plugin-API. Ein zukünftiges Update von Crow's EW oder cTab könnte diese stillschweigend brechen — bei Versionssprüngen dieser beiden Mods entsprechend testen. Details dazu im [readme.md](https://github.com/TacticalTrainingTeam/ttt_a3/blob/master/addons/bft_jamming/readme.md) des Addons.

## Maintainer

- Andy
