# TTT Mod

[![CI](https://github.com/TacticalTrainingTeam/ttt_a3/actions/workflows/main.yml/badge.svg?branch=master)](https://github.com/TacticalTrainingTeam/ttt_a3/actions/workflows/main.yml)

Arma 3 Modifikation für das Tactical Training Team. Benötigt die aktuellste version von [CBA A3](https://github.com/CBATeam/CBA_A3/releases) und [ACE](https://github.com/acemod/ACE3/releases).

Du willst mitmachen? <http://www.tacticalteam.de/mitmachen>

## Die Mod bauen

1. Visual Studio Code installieren - <https://code.visualstudio.com>
    - hemtt Extension installieren - <https://marketplace.visualstudio.com/items?itemName=brettmayson.hemtt>
2. Arma 3 Tools über Steam installieren und einmal starten
3. `hemtt` installieren - `winget install hemtt` in der Kommandozeile ausführen
   - Dokumentation: <https://hemtt.dev>
4. das Repo Clonen - `git clone https://github.com/TacticalTrainingTeam/ttt_a3.git` in der Kommandozeile ausführen
5. Folgende Mods im Steamworkshop abonnieren:
    - CBA <https://steamcommunity.com/workshop/filedetails/?id=450814997>
    - ACE <https://steamcommunity.com/sharedfiles/filedetails/?id=463939057>
    - ACRE <https://steamcommunity.com/sharedfiles/filedetails/?id=751965892>
    - Advanced Developer Tools <https://steamcommunity.com/sharedfiles/filedetails/?id=2369477168>
    - 3DEN Attributes Fast Load <https://steamcommunity.com/sharedfiles/filedetails/?id=3023395342>
    - ZEN <https://steamcommunity.com/sharedfiles/filedetails/?id=1779063631>
6. In der Kommandozeile `hemtt launch` ausführen, um Arma 3 mit dem Basismods zu starten

Für CUP, RHS, BWmod etc. sind zum Testen weitere Mods erforderlich, diese sind in der `.hemtt/launch.toml` angeben.
