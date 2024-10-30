# TTT Mod

Arma 3 Modifikation für das Tactical Training Team.

Du willst mitmachen? <http://www.tacticalteam.de/mitmachen>

## Die Mod bauen

1. Visual Studio Code installieren <https://code.visualstudio.com>
    - hemtt Extension installieren (brettmayson.hemtt)
    - SQF Language Extension installieren (Armitxes.sqf)
2. Arma 3 Tools installieren (über Steam)
3. hemtt installieren `winget install hemtt` in einer Kommandozeile <https://hemtt.dev>
4. das Repo Clonen `git clone https://github.com/TacticalTrainingTeam/ttt_a3.git` in der Kommandozeile
5. Folgende Mods im Steamworkshop abonnieren:
    - CBA <https://steamcommunity.com/workshop/filedetails/?id=450814997>
    - ACE <https://steamcommunity.com/sharedfiles/filedetails/?id=463939057>
    - ACRE <https://steamcommunity.com/sharedfiles/filedetails/?id=751965892>
    - Advanced Developer Tools <https://steamcommunity.com/sharedfiles/filedetails/?id=463939057>
    - 3DEN Attributes Fast Load <https://steamcommunity.com/sharedfiles/filedetails/?id=3023395342>
    - ZEN <https://steamcommunity.com/sharedfiles/filedetails/?id=1779063631>
5. In der Kommandozeile `hemtt launch` um Arma 3 mit dem Basismods zu starten

Für CUP, RHS, BWmod bzw. 3CB sind zum Testen weitere Mods erforderlich, diese sind in der launch.toml angeben.

## Guidelines

Wir versuchen den ACE Coding Guidelines zu folgen: <https://ace3.acemod.org/wiki/development/coding-guidelines>

## Pull Request Merging

Jeder Pull Request muss das CI ohne Fehler durchlaufen.
Jeder Pull Request muss von einem Reviewer bestätigt werden bevor er gemergt wird.