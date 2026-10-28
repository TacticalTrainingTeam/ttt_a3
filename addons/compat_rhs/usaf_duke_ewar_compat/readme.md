# Compat RHS DUKE

Fahrzeuge mit DUKE (M1117, HMMWV-Familie, MATV, M1A1/M1A2 u. a.) stören zusätzlich zu den IED-Minen auch ACRE-Funkgeräte. Der Funkstörer folgt dem DUKE-Schalter von RHS.

## Funktionsweise

- RHS schaltet den DUKE über eine Pseudo-Waffe (`rhsusf_weap_duke`/`rhsusf_weap_duke_on`). Der `fired`-EventHandler der Munition `rhsusf_ammo_duke` startet bzw. beendet das Störskript `rhs_fnc_duke_jammer` und setzt die öffentliche Variable `RHS_DUKE_OP`. RHS bietet keinen Event oder Callback an, und das Skript ist TFAR-only (`tf_*DistanceMultiplicator`), für ACRE passiert nichts.
- Neben dem RHS-Handler hängt in `CfgAmmo.hpp` ein zweiter `fired`-Handler (`fnc_onFired`). Er liest die Variable nicht sofort, da RHS sie erst in einem gespawnten Skript setzt, sondern fragt den Server nach `DUKE_SYNC_DELAY` (0,5 s) per CBA-Event `ttt_compat_rhs_syncJammer`, den Funkstörer abzugleichen.
- Jedes Landfahrzeug mit `rhs_duke_type` in der Config (`fnc_initVehicle`, Class-EventHandler auf `LandVehicle`) wird vom Server einmalig als deaktivierter Funkstörer (`VoiceCommsJammer`) bei Crow's Electronic Warfare registriert (`crowsEW_main_addJammer`). Wie beim CG13 erst ab `CBA_missionTime > 0`, da editorplatzierte Fahrzeuge vor den Event-Handlern von Crow's EW initialisiert werden.
- `fnc_syncJammer` (Server) leitet den Sollzustand aus RHS ab und gleicht Crow's EW an:
    - an/aus aus `RHS_DUKE_OP`
    - beide Antennen zerstört (`HitDuke1`/`HitDuke2` >= 0,99): aus
    - eine Antenne zerstört (>= 1): 60 % Reichweite, wie in `rhs_duke.sqf`
- Crow's EW kann die Radien eines Störers nicht ändern. Bei geänderter Reichweite wird der Störer deshalb entfernt (`crowsEW_main_removeJammer`) und neu registriert.
- Schaden an den Antennen meldet `fnc_onDammaged` über `Dammaged`. Der Handler feuert nur dort, wo das Fahrzeug lokal ist, und wird deshalb auf jedem Client registriert. Er tut nichts, solange der DUKE aus ist, und bündelt Treffer innerhalb der Verzögerung zu einem Abgleich.
- Zerstörte Fahrzeuge entfernt die Aufräumschleife von Crow's EW selbst. RHS lässt sein Störskript für tote Fahrzeuge zwar weiterlaufen, das hat aber keine Auswirkung auf den Funkstörer.
- Crow's EW fügt jedem Störer eigene Aktionen zum (De-)Aktivieren hinzu. Diese würden den Zustand ohne den DUKE-Schalter ändern. `fnc_removeCrowsActions` entfernt sie bei jedem `crowsEW_main_updateJammers` (`removeAllActions`; der DUKE wird über seine Waffe bedient, es gehen keine Aktionen verloren). Das setzt voraus, dass dieser Handler nach dem von Crow's EW läuft; das ergibt sich aus `requiredAddons`.

## Einschränkungen

- Gestört wird jeder Spieler in Reichweite, auch die eigene Besatzung und Verbündete. Crow's EW kennt außer Zeus keine Immunität.
- Der Radius der vollständigen Störung entspricht dem Radius des IED-Störers (50 m, in RHS fest im Code hinterlegt, `DUKE_EFFECTIVE_RADIUS` muss ggf. nachgezogen werden). Der Abklingradius ist das 1,5-fache davon.
- RHS startet das Störskript nur, wenn Schütze und Fahrzeug auf derselben Maschine lokal sind (z. B. nicht für einen Schützen im Turm eines fremden Fahrzeugs). Dann ändert sich `RHS_DUKE_OP` nicht, und der Funkstörer bleibt wie der IED-Störer aus.
- Crow's EW funktioniert nur im Mehrspielermodus.
- CUP-Fahrzeuge haben nur ein DUKE-Modell ohne Funktion und werden nicht unterstützt.

## Abhängigkeiten

- RHS USAF <https://steamcommunity.com/sharedfiles/filedetails/?id=843577117>
- Crow's Electronic Warfare <https://steamcommunity.com/sharedfiles/filedetails/?id=2515887728>

## Maintainer

- Andx
