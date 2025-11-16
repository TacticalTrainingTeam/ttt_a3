Stellt die folgenden Funktionen zur Verfügung:

### `ttt_common_fnc_crateFiller`

(ehem. r_crate)

```c++
[
    [container],
    [
        ["item", count],
        ["item", count]
    ],
    clear
] call ttt_common_fnc_crateFiller;
```

- **container:** OBJECT - Objekte denen der Cargoinhalt hinzugefügt werden soll
- **item:** STRING - Inventargegenstand welcher hinzugefügt werden soll
- **count:**  INTEGER - Anzahl der hinzuzufügenden Inventargegenstände
- **clear:** BOOLEAN (Optional, default: true) - Vorherigen Inventarinhalt des Objektes leeren

Kann in der `initServer.sqf` oder während der Mission auf dem Server aufgerufen werden.

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

### `ttt_common_fnc_addIntel`

```c++
[intel, action, hide, [titel, text]] call ttt_common_fnc_addIntel;
```

- **intel:** OBJECT - Das interagierbare Objekt
- **action:** STRING - Actiontitel der als Interaktion gezeigt wird
- **hide:** BOOLEAN - Objekt nach Interaktion ausblenden
- **titel:** STRING - Intelüberschrift auf der Kartenansicht
- **text:** STRING - Intelinhalt der unter der Überschrift steht (Der Text unterstüzt HTML-Syntax für z.B. Bilder)

In der `initPlayerLocal.sqf` ausführen.

#### Beispiel

```c++
[intel_01, "Lagekarte des Gegners untersuchen", false, ["gefundene Karte", "<img image='pictures\Karte_v3.paa' width=370 height=370/>"]] call ttt_common_fnc_addIntel;
[intel_02, "Dokumente nehmen", true, ["eingesammeltes Dokument", "Hier stehen wichtige Informationen"]] call ttt_common_fnc_addIntel;
```

### `ttt_common_fnc_callReinforcements`

Diese Funktion erstellt Verstärkungstruppen mit einem Fahrzeug und sendet diese zu einem Releasepunkt, von woaus sie angreifen. Dabei kann das Fahrzeug wie bei mechanisierten Kräften, u.a. zum Angriff, genutzt werden. Es stehen für Luft- sowie Bodenfahrzeuge jeweils drei Einstellungen zur Verfügung.
Sollte die Mod [LAMBS DANGER](https://steamcommunity.com/workshop/filedetails/?id=1858075458) aktiv sein, werden alle möglichen Wegpunkte durch das LAMBS-Äquivalent ersetzt.
Sollte die Mod [ZEN Add](https://steamcommunity.com/sharedfiles/filedetails/?id=2319721149) nicht aktiv sein, werden Helikopter keine Fastrope oder Fallschirmsprünge durchführen, sondern immer landen.

```c++
[spawnPos, releasePos, attackPos, side, vehicle, rpBehaviour, infantry, groupBehaviour, flyHeight] call ttt_common_fnc_callReinforcements;
```

- **spawnPos**:  OBJECT or ARRAY format Position - Wo wird die Verstärkung mit Fahrzeug erstellt, wovon sie sich dann in Bewegung setzt
- **releasePos**: OBJECT or ARRAY format Position - Wo wird die Infanterie absitzen, um zu Fuß anzugreifen
- **attackPos**: OBJECT or ARRAY format Position - Welchen Bereich soll die Infanterie und ggf. das Fahrzeug angreifen
- **side**: SIDE - Welcher Seite sollen die neuen Einheiten angehören
- **vehicle**: STRING - Welches Fahrzeug soll die Infanterie transportieren
- **rpBehaviour**: INTEGER (optional, default: 0) - Welches Verhalten nimmt das Fahrzeug am Releasepunkt an; abhängig davon ob es ein Luft- oder Landfahrzeug ist (Siehe dazu die Tabelle unten)
- **infantry**: ARRAY format characterTypes or CONFIG format CfgGroups entry (optional, default: configfile >> "CfgGroups" >> "East" >> "OPF_F" >> "Infantry" >> "OIA_InfSquad") - Welche Infanterieeinheiten sollen erstellt werden (Sollte das Array oder die Konfig zu groß für den Frachtraum des Fahrzeugs sein, werden übrige Einheiten gelöscht)
- **groupBehaviour**: INTEGER (optional, default: 2) - Welches Verhalten haben die Einheiten ab ihrem Releasepunkt (0: relaxed, 1: cautious, 2: combat)
- **flyHeight**: INTEGER (optional, default: 80) - Auf welcher Höhe soll das Luftfahrzeug fliegen

Sollte am besten in einem `Server Only`-Trigger aufgerufen werden.

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

### `ttt_common_fnc_doFlakFire`

```c++
handle = [object] call ttt_common_fnc_doFlakFire;
```

- **handle**: NUMBER - Rückgabewert mit dem das Feuer später beendet werden kann
- **object**: OBJECT - Flak die schießen soll

Sollte am besten in einem `Server Only`-Trigger aufgerufen werden.

`handle_01` ist ein Identifikator mit dem die Funktion wieder beendet werden kann, indem der Per-Frame-Handler entfernt wird. Um das Flakfeuer wieder zu beenden, in einen weiteren Trigger folgendes in die Aktivierung schreiben:

```c++
[handle_01] call CBA_fnc_removePerFrameHandler;
```

#### Beispiel

```c++
handle_01 = [flak_01] call ttt_common_fnc_doFlakFire;
```

### `ttt_common_fnc_setAISkill`

```c++
[unit, general, courage, aimingAccuracy, aimingShake, aimingSpeed, commanding, spotDistance, spotTime, reloadSpeed] call ttt_common_fnc_setAISkill;
```

Wenn nur die `unit` angegeben wird, werden die Default Werte genutzt:

```c++
["_general",        0.75, [0.0]],
["_courage",        0.75, [0.0]],
["_aimingAccuracy", 0.65, [0.0]],
["_aimingShake",    0.65, [0.0]],
["_aimingSpeed",    0.65, [0.0]],
["_commanding",     0.75, [0.0]],
["_spotDistance",   0.85, [0.0]],
["_spotTime",       0.85, [0.0]],
["_reloadSpeed",    0.75, [0.0]]
```

#### Beispiel

```c++
//Make a rookie
[ai_01, 0.45, 0.45, 0.25, 0.25, 0.25, 0.45, 0.45, 0.45, 0.45] call ttt_common_fnc_setAISkill;
```

### `ttt_common_fnc_setAISkillLevel`

```c++
[unit, "Skill-Level"] call ttt_fnc_common_setAISkillLevel;
```

Mögliche Skill-Level sind:

- "Novice"
- "Rookie"
- "Recruit"
- "Veteran"
- "Expert"

Bei fehlender oder falscher Angabe wird "Veteran" ausgewählt. Die Werte innerhalb der Level sind alle gleich, aber zufällig aus der Spanne ausgewählt. `aiming`-Werte sind immer 0,2 Schlechter als alle anderen.

#### Beispiele

```c++
[ai_01, "Recruit"] call ttt_common_fnc_setAISkillLevel;
[_x, "Veteran"] call ttt_common_fnc_setAISkillLevel;
```

## Maintainer

- Andx
- EinStein
