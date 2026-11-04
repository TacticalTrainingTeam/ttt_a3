# TTT FPV-Drohnenbau

Spieler in der Nähe eines Materialfahrzeugs bauen per ACE-Eigeninteraktion aus dem Laderaum
FPV-Drohnen des Mods "Ukraine FPV Drone" (`FPV_UA`) zusammen: Drohnenrahmen (`UA_Item_EMPTY`),
Kabelbinder, Seil als Glasfaser-Ersatz und RHS-RPG-7-Sprengköpfe werden gegen die fertige
Drohne getauscht. Ursprünglich zwei Missionsskripte (`serverDroneCrafting.sqf` /
`playerDroneCrafting.sqf`, Autor Colin), hier als Addon neu aufgebaut.

## Aufbau

- **Rezepte** stehen in `CfgRecipes.hpp` (`ttt_drone_crafting_categories` / `ttt_drone_crafting_recipes`)
  und werden pro Maschine einmal in `fnc_compileRecipes` in eine HashMap übernommen. Klassen
  werden dabei auf Config-Schreibweise normalisiert (`get*Cargo` + `find` sind case-sensitiv)
  und Rezepte mit unbekannten Klassen mit RPT-Warnung übersprungen, statt das Menü zu brechen.
  Zutaten dürfen nur Magazine oder Items sein - nur die lassen sich exakt zählen, entfernen und
  zurücklegen.
- **Materialfahrzeuge** verwaltet der Server in `ttt_drone_crafting_vehicles` (Array, per
  `publicVariable` verteilt, damit JIP-fähig). Mehrere Fahrzeuge gleichzeitig sind möglich.
  Festlegen per Eden-Modul (`fnc_moduleSupplyVehicle`), ZEN-Kontextmenü (`drone_crafting_zen`)
  oder Script-API (`fnc_setVehicle`, `fnc_removeVehicle`, `fnc_restock`). Die öffentlichen
  Funktionen leiten sich auf Clients selbst per CBA-Server-Event an den Server weiter.
- **Startbestand** (`fnc_fillStock`): CBA-Einstellung `ttt_drone_crafting_stock`. Danach wird
  `setMaxLoad` so gesetzt, dass die Ladung `1 - reserveCapacity` des Laderaums belegt (Original:
  75 %). Beim Auffüllen (`fnc_restock`) wird nur die Differenz zum Startbestand ergänzt und die
  Kapazität nie verkleinert. `setMaxLoad` muss auf dem Server laufen.
- **ACE-Menü** (`fnc_addActions`): einmal bei postInit an `CAManBase` registriert, die Bedingung
  sucht das nächste Materialfahrzeug jedes Mal selbst. Die "(X baubar)"-Zahl kommt aus
  `fnc_checkIngredients` und berücksichtigt alle Zutaten inklusive Sprengkopf.
- **Bauen**: Client prüft vor (`fnc_startCraft`), ACE-Fortschrittsbalken, danach
  `ttt_drone_crafting_craftRequest` an den Server (`fnc_craft`), Antwort per Target-Event
  `ttt_drone_crafting_craftResult` (`fnc_showCraftResult`). Der Server schickt nur Ergebnis-Code
  und Klassennamen, lokalisiert wird beim Spieler.

## Behobene Fehler gegenüber den Missionsskripten

1. **Gleichzeitiges Bauen konnte den Laderaum beschädigen**: der Server-Teil lief per
   `remoteExec` scheduled und kopierte/baute den kompletten Laderaum neu auf. Jetzt läuft
   `fnc_craft` als CBA-Event-Handler unscheduled (nicht unterbrechbar) und entfernt nur die
   Zutaten (`CBA_fnc_removeMagazineCargo` bzw. `addItemCargoGlobal` mit negativer Anzahl -
   `CBA_fnc_removeItemCargo` würde den kompletten Item-Laderaum leeren und neu befüllen).
   `fnc_setVehicle` und `fnc_restock` wechseln aus scheduled Kontexten (Modul, `initServer.sqf`)
   per `CBA_fnc_directCall` ebenfalls nach unscheduled.
2. **LWL-Aufklärungsdrohne gab `UA_Item_EMPTY` zurück** (also den gerade verbrauchten Rahmen).
   Richtig ist `UA_Item_FIBER` - das Item, das der FPV-Mod selbst für eine Glasfaser-Drohne ohne
   Nutzlast verwendet (`UA_fnc_fpv_getPayloadItem`, Payload `"FIBER"`).
3. **"(X baubar)" ignorierte Sprengköpfe**: Anzeige jetzt pro Rezept über alle Zutaten.
4. **Server vertraute den Client-Parametern** (Magazin-, Ergebnisklasse, Anzahlen): Clients
   schicken nur noch den Rezeptnamen, Zutaten und Ergebnis liest der Server aus seiner Config.
   Der übergebene Spieler wird weiterhin nicht gegen den Absender geprüft (CBA-Events kennen
   keinen Absender) - Distanz und Lebend-Status prüft der Server aber selbst.
5. **Viele Netzwerknachrichten pro Bauvorgang** (ein `addItemCargoGlobal` pro Einzelteil beim
   Neuaufbau): entfällt, siehe 1.

Zurücklegen bei fehlendem Platz entfernt erst die Zutaten und prüft dann den Fahrzeug-Platz
(die frei gewordene Masse kann genau den Ausschlag geben), Magazine werden dabei einzeln mit
Munitionsstand entfernt und so auch wieder zurückgelegt.

Nicht übernommen: die 12 M112-Sprengladungen und das RPG-7 aus dem alten Startbestand. Sie werden
von keinem Rezept verwendet, und das M112 hätte zusätzlich RHS USAF vorausgesetzt. Bei Bedarf
lassen sie sich über die Einstellung `ttt_drone_crafting_stock` wieder ergänzen.

## Abhängigkeiten

- `ttt_common` (Modul-Kategorie `TTT`)
- `ace_common`, `ace_interact_menu`, `ace_captives` (`ACE_CableTie`), `ace_logistics_rope` (`ACE_rope6`)
- `rhs_main_loadorder` (RHS AFRF, RPG-7-Sprengköpfe)
- `FPV_UA` (Ukraine FPV Drone, Workshop 3475006113)

Fehlt eine davon, wird das Addon samt ZEN-Teil übersprungen (`skipWhenMissingDependencies`).
`drone_crafting_zen` braucht zusätzlich `zen_context_menu` und `ace_zeus` und hängt explizit
vom Hauptaddon ab, damit es nicht ohne dieses lädt.

## Maintainer

- Andx
