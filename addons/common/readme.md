# Common

## Funktionen

Stellt folgende Funktionen an andere Addons zur Verfügung:

### crateFiller

(ehem. r_crate)

```c++
[
    [container],
    [
        [item, count]
    ],
    clear
] call ttt_common_fnc_crateFiller; 
```

**container:** OBJECT - Objekte denen der Cargoinhalt hinzugefügt werden soll  
**item:** STRING - Inventargegenstand welcher hinzugefügt werden soll  
**count:**  INTEGER - Anzahl der hinzuzufügenden Inventargegenstände  
**clear:** BOOLEAN (Optional, default: true) - Vorherigen Inventarinhalt des Objektes leeren

#### Beispiel

```c++
[
    [fahrzeug_01, fahrzeug_03],
    [
        ["Toolkit", 1],
        ["ACE_Entrenchingtool", 5],
        ["30Rnd_556x45_Stanag", 50]
    ],
    false
] call ttt_common_fnc_crateFiller;
```

Dabei werden die bisherigen Gegenstände des Fahrzeugs nicht entfernt und bleiben im Inventar beider Fahrzeuge vorhanden.  
Hinzu kommen allerdings wie gewünscht bei beiden ein Werkzeugkasten, fünf Klappspaten und 50 Magazine.

### callReinforcements

Diese Funktion erstellt Verstärkungstruppen mit einem Fahrzeug und sendet diese zu einem Releasepunkt von woaus sie angreifen. Dabei kann das Fahrzeug wie bei mechanisierten Kräften, u.a. zum Angriff, genutzt werden. Es stehen für Luft- sowie Bodenfahrzeuge jeweils drei Einstellungen zur Verfügung.  
Sollte die Mod [LAMBS DANGER](https://steamcommunity.com/workshop/filedetails/?id=1858075458) aktiv sein, werden alle möglichen Wegpunkte durch das LAMBS-Äquivalent ersetzt.  
Sollte die Mod [ACHILLES](https://steamcommunity.com/workshop/filedetails/?id=723217262) nicht aktiv sein, werden Helikopter keine Fastrope oder Fallschirmsprünge durchführen, sondern immer landen.

```c++
[spawnPos, releasePos, attackPos, side, vehicle, rpBehaviour, infantry, groupBehaviour, flyHeight] call ttt_common_fnc_callReinforcements;
```

**spawnPos:**  OBJECT or ARRAY format Position - Wo wird die Verstärkung mit Fahrzeug erstellt, wovon sie sich dann in Bewegung setzt  
**releasePos:** OBJECT or ARRAY format Position - Wo wird die Infanterie absitzen um zu Fuß anzugreifen  
**attackPos:** OBJECT or ARRAY format Position - Welchen Bereich soll die Infanterie und ggf. das Fahrzeug angreifen  
**side:** SIDE - Welcher Seite sollen die neuen Einheiten angehören  
**vehicle:** STRING - Welches Fahrzeug soll die Infanterie transportieren  
**rpBehaviour:** INTEGER (optional, default: 0) - Welches Verhalten nimmt das Fahrzeug am Releasepunkt an; abhängig davon ob es ein Luft- oder Landfahrzeug ist (Siehe dazu die Tabelle unten)  
**infantry:** ARRAY format characterTypes or CONFIG format CfgGroups entry (optional, default: configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad") - Welche Infanterieeinheiten sollen erstellt werden (Sollte das Array oder die Config zu groß für den Frachtraum des Fahrzeugs sein, werden übrige Einheiten gelöscht)  
**groupBehaviour:** INTEGER (optional, default: 2) - Welches Verhalten haben die Einheiten ab ihrem Releasepunkt (0: relaxed, 1: cautious, 2: combat)  
**flyHeight:** INTEGER (optional, default: 80) - Auf welcher höhe soll das Luftfahrzeug fliegen

| rpBehaviour  | Luftfahrzeug | Landfahrzeug |
| - | - | - |
| 0 | Fahrzeug landet und Infanterie sitzt ab; Fahrzeug kehrt zum Spawnpunkt zurück und wird gelöscht | Infanterie sitzt ab; Fahrzeug kehrt zum Spawnpunkt zurück und wird gelöscht |
| 1 | Infanterie wird per Fast-Rope abgesetzt; Helikopter kehrt zum Spawnpunkt zurück und wird gelöscht | Infanterie sitzt ab; Fahrzeug greift den Angriffspunkt mit an  |
| 2 | Infanterie wird per Fallschirm abgeworfen; Helikopter kehrt zum Spawnpunkt zurück und wird gelöscht | Infanterie sitzt ab; Fahrzeug verteidigt den Releasepunkt  |

#### Beispiele

```c++
[l_sp_1, l_rp_1, l_at_1, EAST, "O_APC_Wheeled_02_rcws_v2_F"] call ttt_common_fnc_callReinforcements;
[[300.51, 5151.98, 806.54], releasepunkt_2, oplSpieler, WEST, "rsr_bergepanzer_flecktarn", 2] call ttt_common_fnc_callReinforcements;
[l_sp_1, l_rp_1, l_at_1, EAST, "O_Heli_Light_02_dynamicLoadout_F", 2, ["O_Soldier_SL_F","O_Soldier_TL_F","O_Soldier_F","O_Soldier_F"]] call ttt_common_fnc_callReinforcements;
[l_sp_1, l_rp_1, l_at_1, EAST, "O_APC_Wheeled_02_rcws_v2_F", 2, configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad"] call ttt_common_fnc_callReinforcements;
[l_sp_1, l_rp_1, l_at_1, EAST, "O_Heli_Light_02_dynamicLoadout_F", 2, ["O_Soldier_SL_F","O_Soldier_TL_F","O_Soldier_F"], 1, 50] call ttt_common_fnc_callReinforcements; 
```

### Bilder

Stellt TTT-Bilder anderen Addons zur Verfügung.

### ACE-Fortify Presets

Definiert Presets für ACE Fortify, die in spontanen Missionen und Trainings genutzt werden können:

Benutztung:

1. `ACE_Fortify` an Spieler ausgeben
2. als Admin im Chat `#ace-fortify blufor presetname` eingeben, `presetname` durch eins der unten angegebenen ersetzen.

Folgendes Prests stehen zur Verfügung:

- `TTT_OHK` für das Befestigen einzelner Gebäude im OHK
- `TTT_FOB` für das Errichten einer FOB oder eines Checkpoint
- `TTT_GM` enthält Assets auf dem GM DLC, nicht speziell für ein bestimmtes Szenario gedacht

### Kisten

Fügt einige TTT-spezifische Kisten hinzu. Alle Kisten sind ein (1) ACE-Cargo groß.

#### Sanitätskisten

Fügt folgende Sanitätskisten  hinzu:

- Sanitätskiste (VBA) `ttt_common_vba_crate`
- Sanitätskiste (VBT) `ttt_common_vbt_crate`

Inhalt ist im [Wiki VBA](https://wiki.tacticalteam.de/de/Missionsbau/Nachschubkisten#verbandsmaterial-arzt) bzw. [Wiki VBT](https://wiki.tacticalteam.de/de/Missionsbau/Nachschubkisten#verbandsmaterial-truppe) definiert.

#### Pionierkisten

Fügt folgende Pionierkisten hinzu:

- Sprengkiste `ttt_common_explosives_crate`
- Pionierkiste `ttt_common_pio_crate`
- EOD-Kiste `ttt_common_eod_crate`
- EOD-Kiste mit UGV (ED-1D) `ttt_common_eod_ugv_crate`

Inhalt ist im [Wiki spezielle Kisten](https://wiki.tacticalteam.de/de/Missionsbau/Nachschubkisten#spezielle-kisten) definiert.

#### Spezialkisten

- Drohnenkiste (UAV) `ttt_common_uav_crate`
- Markierkiste (Mark) `ttt_common_mark_crate`
Inhalt ist im [Wiki spezielle Kisten](https://wiki.tacticalteam.de/de/Missionsbau/Nachschubkisten#spezielle-kisten) definiert.

## Maintainer

- Andx
- EinStein
