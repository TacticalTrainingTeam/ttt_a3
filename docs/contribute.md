# Zur TTT-Mod beitragen

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
    - Advanced Developer Tools <https://steamcommunity.com/sharedfiles/filedetails/?id=3499977893>
    - 3DEN Attributes Fast Load <https://steamcommunity.com/sharedfiles/filedetails/?id=3023395342>
    - Zeus Enhanced <https://steamcommunity.com/sharedfiles/filedetails/?id=1779063631>
7. In der Kommandozeile `hemtt launch` ausführen, um Arma 3 mit dem Basismods zu starten

Für CUP, RHS, BWmod etc. sind zum Testen weitere Mods erforderlich, diese sind in der [.hemtt/launch.toml](.hemtt/launch.toml) angeben.

## Entwickeln mit lokalen Mods

Falls es nicht möglich ist, die Steam-Workshop-Mods herunterzuladen (zum Beispiel aus Platzgründen), kannst du folgendes in die `launch.toml` eintragen, den Pfad entsprechend anpassen und so deine lokalen Mods aus dem TTT-Repo verwenden. Diese Änderung der Datei darf **nicht** committet werden.

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

## Zum Projekt beitragen

Wir heißen jeden willkommen, der zu diesem Repository beiträgt. Themen, für die wir aktiv Hilfe suchen, sind als [„Hilfe gesucht“](https://github.com/TacticalTrainingTeam/ttt_a3/issues?q=is%3Aissue+state%3Aopen+label%3A%22hilfe+gesucht%22) gekennzeichnet.

## Pull Request Prozess

Wenn Du zu diesem Projekt beitragen möchtest, bespreche bitte zuerst die Änderung, die du vornehmen möchtest, per [Issue](https://github.com/TacticalTrainingTeam/ttt_a3/issues) oder [Discord](https://discord.tacticalteam.de/) mit den TTT-Mod-Projektbetreuern, bevor du eine Änderung vornimmst. Dies ist nicht unbedingt notwendig, wenn du etwas beitragen möchtest, für das es bereits ein Issue in unserem Repository gibt.

1. Bitte erstelle deinen [Pull Request](https://github.com/TacticalTrainingTeam/ttt_a3/pulls) (PR) so früh wie möglich. Dies ermöglicht es uns, dir bei der Entwicklung zu helfen. Wenn du einen Pull-Request eröffnest, verwende ggf. die Draft-Funktion von GitHub. Dadurch wird der PR als in Arbeit markiert und kann nicht zusammengeführt werden, bis du ihn als reif für die Überprüfung markiers.

2. Beschreibe in der Beschreibung deines PRs, was dieser Pull Request tun wird und wie er das Problem löst. Eine klare Absicht und Beschreibung der Art und Weise, wie das Problem gelöst wird, wird uns helfen, den PR effizienter zu prüfen.

3. Bitte beachte die [Entwicklungsrichtlinien von (ACE3)](https://ace3.acemod.org/wiki/development/coding-guidelines).

### Pull Request Merging

- Jeder Pull Request muss das [CI](https://github.com/TacticalTrainingTeam/ttt_a3/actions) ohne Fehler durchlaufen bevor er gemergt werden kann.
- Jeder Pull Request muss von mindestens einem Reviewer freigegeben werden bevor er gemergt wird.

## Anmerkungen

Bitte beachte, dass alle Mitwirkenden an diesem Projekt Freiwillige sind und dies in ihrer eigenen Zeit tun. Das bedeutet, dass Probleme und/oder PRs lange Zeit offen sein können, bevor sie aufgegriffen und überprüft werden. Wir versuchen, diese Zeit so kurz wie möglich zu halten, aber manchmal kann es vorkommen, dass dies nicht gelingt. Wenn du der Meinung sind, dass ein Problem oder eine PR nicht beachtet wurde, teilen Sie dies bitte im Discord mit.

Im Code wird Tactical Training Team immer klein geschrieben, also `ttt`, im Interface immer groß `TTT`.

Als `author` wird in der `config.cpp` aus konsistenzgründen immer `ECSTRING(main,TactiaclTrainingTeam)` angegeben. In `authors[]`-Array können sich alle, die an der jeweiligen Component mitgearbeitet haben selbst eintragen.
