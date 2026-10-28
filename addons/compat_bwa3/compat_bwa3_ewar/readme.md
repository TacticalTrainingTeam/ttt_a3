# Compat BWA3 EWAR

Der Dingo 2 CG13 stört zusätzlich zu den IED-Minen auch ACRE-Funkgeräte. Der Funkstörer wird über denselben Schalter wie der IED-Störer bedient.

## Funktionsweise

- BWA3 schaltet den CG13 nur über die Variable `BWA3_Dingo2_ECM_on` (UserActions `TurnOnCG13`/`TurnOffCG13`) und bietet keinen Event oder Callback an. Die `statement`-Einträge der beiden UserActions werden deshalb in `CfgVehicles.hpp` überschrieben: Sie setzen weiterhin die Variable und senden zusätzlich das Event `ttt_compat_bwa3_ecmToggled` an den Server.
- BWA3 schaltet den CG13 bei abgestelltem Motor ohne Event ab (`POWER_FAILURE`). Ein `Engine`-EventHandler (`fnc_initVehicle`) sendet deshalb beim Motor-Aus dasselbe Event mit `false`. Der Handler muss auf jedem Client registriert werden, da `Engine` nur dort feuert, wo das Fahrzeug lokal ist.
- Der Server registriert jedes Fahrzeug mit `BWA3_hasECM = 1` (`fnc_registerJammer`) einmalig als deaktivierten Funkstörer (`VoiceCommsJammer`) bei Crow's Electronic Warfare über `crowsEW_main_addJammer`. Das Event wird erst ab `CBA_missionTime > 0` gesendet, da editorplatzierte Fahrzeuge vor den Event-Handlern von Crow's EW initialisiert werden.
- `fnc_handleToggle` schaltet den Funkstörer über `crowsEW_main_toggleJammer` um. Die eigentliche Störung (ACRE-Interferenz, Spectrum-Device-Signal, Aufräumen bei Zerstörung) übernimmt Crow's EW.
- Crow's EW fügt jedem Störer eigene Aktionen zum (De-)Aktivieren hinzu. Diese würden den Zustand von Crow's EW ohne den CG13-Schalter ändern. `fnc_removeCrowsActions` entfernt sie bei jedem `crowsEW_main_updateJammers` von den Dingos (`removeAllActions`; der Dingo nutzt nur Config-UserActions). Das setzt voraus, dass dieser Handler nach dem von Crow's EW läuft; das ergibt sich aus `requiredAddons`.

## Einschränkungen

- Gestört wird jeder Spieler in Reichweite, auch die eigene Besatzung und Verbündete. Crow's EW kennt außer Zeus keine Immunität.
- Der Radius der vollständigen Störung entspricht dem Radius des IED-Störers von BWA3 (40 m, dort fest im Code hinterlegt, `ECM_EFFECTIVE_RADIUS` muss ggf. nachgezogen werden). Der Abklingradius ist das 1,5-fache davon.
- Crow's EW funktioniert nur im Mehrspielermodus.

## Abhängigkeiten

- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537>
- Crow's Electronic Warfare <https://steamcommunity.com/sharedfiles/filedetails/?id=2515887728>

## Maintainer

- Andx
