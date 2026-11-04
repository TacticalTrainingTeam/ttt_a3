# Performance

Verbessert die Leistung auf den Rechnern der Spieler, ohne dass sich das Verhalten der KI ändert.

## Remote-Sensoren

Normalerweise berechnet jeder Spielerrechner zusätzlich, was **jede** KI-Einheit in der Mission sehen kann - auch die KI, die gar nicht von ihm gesteuert wird. Diese Ergebnisse werden nie gebraucht, denn was die KI tatsächlich weiß und tut, entscheidet allein der Rechner, auf dem sie läuft:

- In **Zeus-Missionen** ist das der Rechner des Zeus.
- In **gescripteten Missionen** ist das der Server.

Mit dieser Funktion lassen die Spielerrechner diese überflüssige Arbeit weg. Je mehr KI in der Mission ist, desto größer ist die Ersparnis. Der Zeus und der Server rechnen für ihre eigene KI wie gewohnt weiter.

!!! warning "Hinweis für Missionsbauer"
    Skripte, die abfragen, was die KI über einen Spieler weiß (z.B. `knowsAbout` in einer Schleich-Mission), müssen auf dem **Server** laufen (bzw. beim Zeus für Zeus-KI) - nicht in `initPlayerLocal.sqf` oder anderen Skripten auf dem Spielerrechner. Dort liefern sie sonst veraltete Werte. Alternativ kann die Funktion für die Mission abgeschaltet werden (siehe unten).

## CBA-Einstellungen

Zu finden unter "Performance" (Kategorie "Tactical Training Team"), oder wie folgt per `cba_settings.sqf` setzbar:

- `ttt_performance_disableRemoteSensors`: Schaltet die Funktion ein/aus.

``` c++
force ttt_performance_disableRemoteSensors = false; //default: true
```

## Maintainer

- Andx
