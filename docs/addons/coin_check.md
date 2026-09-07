# Coin Check

Bildet den militärischen Brauch des "Coin Check" ab: Spieler mit eigener Challenge Coin erhalten sie automatisch zu Missionsbeginn und können jederzeit per ACE-Selbstinteraktion einen Coin Check starten. Alle anderen teilnehmenden Spieler mit Münze müssen danach innerhalb einer festen Zeit und Reichweite ebenfalls ihre Münze vorzeigen - wer das nicht schafft, hat verloren und muss zur Strafe eine Übung absolvieren.

## Benutzung

1. Ein Spieler mit eigener Münze startet über die ACE-Selbstinteraktion (`Coin Check`) einen Check.
2. Alle anderen Spieler mit Münze in Reichweite werden benachrichtigt und haben ab dann eine feste Zeit, ihrerseits per Selbstinteraktion ihre eigene Münze vorzuzeigen.
3. Beim Vorzeigen wird eine Ablege-Animation gespielt, die Münze wandert aus dem Inventar in einen gemeinsamen Bodenwaffenhalter am Ort des Checks - von dort kann sie anhand des Anzeigenamens wieder herausgesucht werden.
4. Wer die Zeit verstreichen lässt, ohne seine Münze abzulegen, hat den Check verloren.

!!! info "Hinweis"
    Es kann immer nur ein Coin Check gleichzeitig laufen. Solange einer aktiv ist, muss er erst ablaufen, bevor ein neuer gestartet werden kann.

## Strafe

Wer einen Coin Check verliert (auch mehrere Spieler gleichzeitig möglich), muss auf seiner eigenen Position eine Übung vorführen - Kniebeugen oder Liegestütze, je nach persönlicher Einstellung. Welche Übung das ist, entscheidet jeder Spieler selbst über die Einstellung **Punishment** (siehe unten).

## Einstellungen

- **Enable Coin Check**: Persönliche Einstellung. Legt fest, ob ein Spieler überhaupt an Coin Checks teilnimmt - ohne diese Einstellung wird auch keine Münze automatisch verteilt und die Selbstinteraktion bleibt inaktiv.
- **Enable Coin Distribution**: Globale Einstellung für Missionsbauer. Deaktiviert die automatische Münzausgabe für die gesamte Mission - ohne Münzen kann niemand an einem Coin Check teilnehmen, das Feature ist damit faktisch für die Mission ausgeschaltet.
- **Punishment**: Persönliche Einstellung. Legt fest, welche Übung ein Spieler nach einem verlorenen Coin Check machen muss: Kniebeugen, Liegestütze, oder zufällig (Standard).

### CBA-Einstellungen

```c++
force ttt_coin_check_enabled = true;               //default: true, persönlich, ob der Spieler teilnimmt
force ttt_coin_check_distributionEnabled = true;   //default: true, global, schaltet das Feature für die Mission ab wenn false
force ttt_coin_check_punishment = 0;               //default: 0, persönlich, 0 = Zufällig, 1 = Kniebeugen, 2 = Liegestütze
```

### Für Missionsbauer

Um Coin Checks für eine Mission komplett auszuschalten, reicht es, `ttt_coin_check_distributionEnabled` per `force` in der `cba_settings.sqf` auf `false` zu setzen - dann wird nie eine Münze verteilt und das Feature bleibt für alle Spieler inaktiv, unabhängig von ihren persönlichen Einstellungen.

## Münz-Datenbank

Wer eine eigene Münze bekommt, ist in `db.hpp` des Addons hinterlegt (ein Eintrag pro Steam-UID). Diese Liste wird über [tools/sync_coin_db.py](https://github.com/TacticalTrainingTeam/ttt_a3/blob/master/tools/sync_coin_db.py) automatisch gegen die aktuelle Squad-Mitgliederliste synchronisiert und läuft bei jedem veröffentlichten Release mit.

## Maintainer

- Andx
