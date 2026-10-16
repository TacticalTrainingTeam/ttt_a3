# Compat BWA3 - Puma

Verbessert Optiken, Anzeigen und Bedienung des Puma. Die Config liegt in diesem Unterordner, die Skripte und Daten (Funktionen, Tastenbelegung, Bilder) im Hauptaddon `compat_bwa3`.

## Optik und Bewaffnung

- Richtschützen- und Kommandantenoptik nutzen die Warrior-Optik für ein größeres Sichtfeld (`WARRIOR_OPTICS`), die Nachtsicht bleibt erhalten.
- Die Waffen und Magazine des Richtschützen: MK30 mit AP/HE-Mündungen, MG5 mit 1000-Schuss-Gurtkasten und Spike LR. Die Munitionsmengen stehen in `compat_bwa3_weapons`.
- Im Eden-Editor ist HE statt ABM als Standardmunition der MK30 vorausgewählt (`Cfg3DEN.hpp`, `Attributes` des Fahrzeugs und `XEH_preInit.sqf` für zur Laufzeit erzeugte Fahrzeuge).
- Die Motorstartverzögerung beträgt 5 Sekunden, die Sound-Dämpfung nutzt `TankAttenuation`.

## Anzeigen (`RscInGameUI.hpp`)

- Richtschützenoptik: ohne Datum, Turm-Elevation und grüne Lampe.
- Kommandantenoptik: ohne Datum, Sichtmodus und Anzeigen der Turm- und Waffenzustände.
- Fahrer: horizontaler Kompass (geteilt mit dem Leopard, siehe `compat_bwa3/RscInGameUI.hpp`).
- Radar oben links: zeigt zusätzlich die Richtung eines anfliegenden Lenkflugkörpers (`fnc_onDrawRadar`, ersetzt die Zeichenfunktion von BWmod `BWA3_RscUnitInfoTank`). Die Pfeile erscheinen, wenn die BWmod-Variable `BWA3_showIncomingMissileWarning` gesetzt ist.

## MUSS (Multifunktionales Selbstschutz-System)

- `fnc_incomingMissile` (`Extended_IncomingMissile_EventHandlers`, angemeldet in `compat_bwa3_muss`) reagiert auf lenkbare Flugkörper (`irlock`), die näher als 2000 m kommen. Für den Spieler im Fahrzeug spielt ein lauterer Warnton (`CfgSounds.hpp`).
- Je nach Modus richtet der Richtschützenturm sich auf den Flugkörper aus (`ace_hunterkiller_fnc_slew`) und bricht damit die Zielerfassung. Der Modus wird mit `fnc_toggleMussMode` umgeschaltet (Variable `ttt_compat_bwa3_MussMode` am Fahrzeug, 0 = nur Stören, 1 = mit Turmausrichtung, Standard 1).
- Ohne ACE Hunterkiller entfällt das MUSS vollständig, der Rest der Compat läuft weiter. Die Prüfung läuft pro Flugkörper in einem Handler mit 0,1 s Intervall und endet, sobald der Flugkörper nicht mehr existiert oder näher als 10 m ist.

## Kameras

`fnc_toggleCamera` schaltet die Rückfahrkamera des Fahrers bzw. die Kameras der Passagiere durch (`fnc_setRearViewCamera`, `fnc_setCamera`, `fnc_rearViewCamCargo`). Die Tasten werden vom BWmod-Original überschrieben (Umschalt+Pos1 / Umschalt+Ende). Die Anzeige der Passagierkamera wechselt abhängig vom Sichtmodus zwischen normalem und Nachtsichtbild. Das passiert über einen Handler mit 0,25 s Intervall, der endet, sobald die Kamera nicht mehr gebraucht wird.

## Fahrzeugnummern

Das Eden-Attribut "Symbol: Fahrzeugnummer" (`ttt_compat_bwa3_vehicleNumber`) setzt eine rote Nummer (2.0, A bis C3) seitlich ans Fahrzeug. Der Server erzeugt dafür ein Textur-Objekt und hängt es an das Fahrzeug an (`fnc_setVehicleNumber`).

## Karten-Aktion

Mit Metis Enhanced kann eine Karte auf der Heckklappe abgelegt werden (`ttt_common_fnc_initMapActions`, angemeldet in `compat_bwa3_map`, Position in den Config-Attributen `ttt_common_mapAction*`).

## Herkunft

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`). Sie wurden mit Erlaubnis eines Maintainers übernommen und für dieses Repository angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang. Im Header steht als Autor der Autor des Originals. Pfade in der Tabelle beziehen sich auf `addons/` im Original.


| Datei | Original | Änderung |
| --- | --- | --- |
| `CfgVehicles.hpp` | `BwMod_Puma/CfgVehicles.hpp` | ohne ACRE-Racks, Rearm und Nebelmittelwurfanlage |
| `Cfg3DEN.hpp`, `CfgSounds.hpp`, `RscTitles.hpp` | `BwMod_Puma/` gleichnamig | angepasst |
| `RscInGameUI.hpp` | `BwMod_Puma/RscInGameUI.hpp` | ohne Fahrerkompass (liegt in `compat_bwa3`) |

Die Skripte und Bilder stehen in der README von `compat_bwa3`. Autoren laut Original: Timi007, Mishkar, Max.

Nicht übernommen wurden die ACRE-Konfiguration, das Nachladen (Rearm) und die Nebelmittelwurfanlage für Richtschütze und Kommandant.

## Abhängigkeiten

- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537> (`bwa3_puma`, `bwa3_common`, `bwa3_mells`)
- ACE Hunterkiller

## Maintainer

- Andx
