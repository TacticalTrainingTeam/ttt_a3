# Compat BWA3 - Puma

Verbessert Optiken, Anzeigen und Bedienung des Puma. Die Config liegt in diesem Unterordner, die Skripte und Daten (Funktionen, Tastenbelegung, Bilder) im Hauptaddon `compat_bwa3`.

## Optik und Bewaffnung

- Richtschützen- und Kommandantenoptik nutzen die Warrior-Optik für ein größeres Sichtfeld.
- Richtschütze und Kommandant können die Nebelmittelwurfanlage abfeuern (Waffe aus `compat_bwa3_weapons`, Logik im Addon `smoke_launcher`). Die Anlage wandert dafür vom Kommandanten zum Richtschützen.
- Die Waffen und Magazine des Richtschützen: MK30 mit AP/HE-Mündungen, MG5 mit 1000-Schuss-Gurtkasten, Spike LR und Nebelmittelwurfanlage. Die Munitionsmengen stehen in `compat_bwa3_weapons`.
- Im Eden-Editor ist HE statt ABM als Standardmunition der MK30 vorausgewählt (`Cfg3DEN.hpp`, `Attributes` des Fahrzeugs und `XEH_preInit.sqf` für zur Laufzeit erzeugte Fahrzeuge).
- Die Motorstartverzögerung beträgt 5 Sekunden.

## Anzeigen (`RscInGameUI.hpp`)

- Richtschützenoptik: ohne Datum, Turm-Elevation und grüne Lampe.
- Kommandantenoptik: ohne Datum, Sichtmodus und Anzeigen der Turm- und Waffenzustände.
- Fahrer: horizontaler Kompass (geteilt mit dem Leopard, siehe `compat_bwa3/RscInGameUI.hpp`).
- Radar oben links: zeigt zusätzlich die Richtung eines anfliegenden Lenkflugkörpers (`fnc_onDrawRadar`, ersetzt die Zeichenfunktion von BWmod `BWA3_RscUnitInfoTank`).

## MUSS (Multifunktionales Selbstschutz-System)

- `fnc_incomingMissile` (`Extended_IncomingMissile_EventHandlers`) reagiert auf lenkbare Flugkörper (`irlock`), die näher als 2000 m kommen. Für den Spieler im Fahrzeug spielt ein lauterer Warnton (`CfgSounds.hpp`).
- Je nach Modus richtet der Richtschützenturm sich auf den Flugkörper aus (`ace_hunterkiller_fnc_slew`), bricht damit die Zielerfassung und feuert danach die Nebelmittelwurfanlage ab (über `smoke_launcher`). Der Modus wird mit `fnc_toggleMussMode` umgeschaltet (Variable `ttt_compat_bwa3_MussMode` am Fahrzeug, 0 = nur Stören, 1 = mit Turmausrichtung, 2 = mit Nebeln, Standard 2).
- Die Prüfung läuft pro Flugkörper in einem Handler mit 0,1 s Intervall und endet, sobald der Flugkörper nicht mehr existiert oder näher als 10 m ist.

## Kameras

`fnc_toggleCamera` schaltet die Rückfahrkamera des Fahrers bzw. die Kameras der Passagiere durch (`fnc_setRearViewCamera`, `fnc_setCamera`, `fnc_rearViewCamCargo`). Die Tasten werden vom BWmod-Original überschrieben (Umschalt+Pos1 / Umschalt+Ende). Die Anzeige der Passagierkamera wechselt abhängig vom Sichtmodus zwischen normalem und Nachtsichtbild. Das passiert über einen Handler mit 0,25 s Intervall, der endet, sobald die Kamera nicht mehr gebraucht wird.

## Fahrzeugnummern

Das Eden-Attribut "Symbol: Fahrzeugnummer" (`ttt_compat_bwa3_vehicleNumber`) setzt eine rote Nummer (2.0, A bis C3) seitlich ans Fahrzeug. Der Server erzeugt dafür ein Textur-Objekt und hängt es an das Fahrzeug an (`fnc_setVehicleNumber`).

## Karten-Aktion

Mit Metis Enhanced kann eine Karte auf der Heckklappe abgelegt werden (`ttt_common_fnc_initMapActions`, Position in den Config-Attributen `ttt_common_mapAction*`).

Nicht enthalten ist das Nachladen von Rauchwurfanlage und Koax-MG (Rearm).

## Abhängigkeiten

- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537>

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang.

Übernommen aus `addons/BwMod_Puma` (Autoren laut Original: Timi007, Mishkar, Max): Optik, Waffen, Anzeigen, MUSS, Kameras, Fahrzeugnummern und Karten-Aktion. Die Kamera- und die MUSS-Prüfung wurden von Dauerschleifen auf Handler mit Intervall umgestellt, die Karten-Aktion liegt als gemeinsame Funktion in `common`. Nicht übernommen wurden die ACRE-Konfiguration und das Nachladen (Rearm).

## Maintainer

- Andx
