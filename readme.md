# TTT Mod

[![CI](https://github.com/TacticalTrainingTeam/ttt_a3/actions/workflows/main.yml/badge.svg?branch=master)](https://github.com/TacticalTrainingTeam/ttt_a3/actions/workflows/main.yml)

Arma 3 Modifikation für das Tactical Training Team. Benötigt die aktuellste version von [CBA A3](https://github.com/CBATeam/CBA_A3/releases) und [ACE](https://github.com/acemod/ACE3/releases).

Du willst mitmachen? <http://www.tacticalteam.de/mitmachen>

## Die Mod bauen

1. Visual Studio Code installieren - <https://code.visualstudio.com> & git installieren <https://git-scm.com/downloads>
2. das Repo klonen - `git clone https://github.com/TacticalTrainingTeam/ttt_a3.git` in der Kommandozeile ausführen
3. vorgeschlagene Extensions in Visual Studio Code installieren
4. Arma 3 Tools über Steam installieren und einmal starten
5. `hemtt` installieren - dazu `winget install hemtt` in der Kommandozeile ausführen
   - Dokumentation: <https://hemtt.dev>
6. Folgende Mods im Steam-Workshop abonnieren:
    - CBA_A3 <https://steamcommunity.com/workshop/filedetails/?id=450814997>
    - ACE <https://steamcommunity.com/sharedfiles/filedetails/?id=463939057>
    - ACRE2 <https://steamcommunity.com/sharedfiles/filedetails/?id=751965892>
    - Advanced Developer Tools <https://steamcommunity.com/sharedfiles/filedetails/?id=2369477168>
    - 3DEN Attributes Fast Load <https://steamcommunity.com/sharedfiles/filedetails/?id=3023395342>
    - Zeus Enhanced <https://steamcommunity.com/sharedfiles/filedetails/?id=1779063631>
7. In der Kommandozeile `hemtt launch` ausführen, um Arma 3 mit dem Basismods zu starten

Für CUP, RHS, BWmod etc. sind zum Testen weitere Mods erforderlich, diese sind in der `.hemtt/launch.toml` angeben.

### Entwickeln mit lokalen Mods

Wenn es nicht möglich ist die Steam-Workshop Mods herunterzuladen (z.B. aus Platzgründen), kannst du folgendes in die `launch.toml` schreiben, den Pfad an passen, und damit deine lokalen Mods aus dem TTT-Repo nutzen. Diese Änderung der Datei **nicht** mit commiten.

```toml
[cup_local]
extends = "default"
parameters = [
    "-mod=C:\\Pfad\\zu\\deinen\\TTT\\mods\\@CUP_Units",
    "-mod=C:\\Pfad\\zu\\deinen\\TTT\\mods\\@CUP_Vehicles",
    "-mod=C:\\Pfad\\zu\\deinen\\TTT\\mods\\@CUP_Weapons",
    "-mod=C:\\Pfad\\zu\\deinen\\TTT\\mods\\@Community_Factions_Project_CFP"
]
```
