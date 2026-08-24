# W-Shields

## Buildingsshield

Macht ein Gebäude unzerstörbar, aber die Fenster-Scheiben können weiterhin zerstört werden.

### Benutzung: 3DEN-Modul

Das Modul ist ausschließlich für Gebäude gedacht, die bereits Teil der Karte selbst sind (also keine im Editor platzierten Objekte) - diese lassen sich nicht direkt auswählen, weshalb es das Modul zum "Anzapfen" braucht. Platziert dazu im Editor unter `Module` - `W-Framework` - `Building Shield` ein Modul auf das gewünschte Gebäude; es schnappt automatisch zum nächstgelegenen Gebäude. Das Modul wirkt nur im 3DEN-Editor zur Design-Zeit, hat mit Zeus nichts zu tun und löscht sich selbst, sobald seine Einstellungen beim Missionsstart einmalig auf das Gebäude angewendet wurden.

In den Attributen des Moduls kann das Schild eingeschalten werden und alle Fenster des Gebäudes kaputt gemacht werden. Außerdem kann, wie im `EditTerrainObject` Modul von Bohemia, ein Variablenname für das Gebäude vergeben werden.

Zusätzlich stehen bis zu 8 Dropdown-Attribute (`Door 1` bis `Door 8`) zur Verfügung, mit denen sich der Zustand der einzelnen Türen des Gebäudes einzeln auf `Geschlossen`, `Verriegelt` oder `Offen` setzen lässt (Standard: `Geschlossen`). Hat das Gebäude weniger Türen, bleiben die überzähligen Dropdowns wirkungslos. Wird das Schild über das 3DEN-Attribut des Gebäudes wieder entfernt, werden alle so gesetzten Türen wieder auf `Geschlossen` zurückgesetzt.

### Benutzung: 3DEN-Attribut

Für Gebäude, die ihr selbst im Editor platziert habt (also eigene Objekte, keine Teile der Karte), findet ihr die Option um das Schild zu aktivieren direkt in den Attributen des Gebäudes im Abschnitt `W-Framework` - ein separates Modul ist hier nicht nötig. Dort lassen sich über eine eigene Checkbox (`Fenster entglasen`) ebenso die Fenster zerstören - im Gegensatz zum Schild selbst ist das ein echter Umschalter: wird die Checkbox wieder entfernt, werden die Fenster repariert. Auch dieser Weg wirkt nur im 3DEN-Editor und hat mit Zeus nichts zu tun. Wird das Häkchen des Schilds wieder entfernt, wird das Schild ebenfalls wieder entfernt (bereits zerstörte Fenster bleiben davon unberührt).

!["3DEN-Editor-Attribute mit den Optionen für das Building-Shield"](https://i.imgur.com/Iw1i6Ou.jpeg)

### Benutzung: ZEN Kontextmenü

Ist [ZEN](https://zen-mod.github.io/ZEN/) geladen, findet ihr im Zeus-Kontextmenü unter `W-Shields` den Eintrag `Buildingshield hinzufügen`, wenn ihr ein Gebäude anvisiert, das noch kein Schild besitzt. Nach erfolgreicher Anwendung erscheint eine Zeus-Bestätigung.

## Vehicleshield

Macht Fahrzeuge unzerstörbar. Einzelne Module sind aber weiterhin zerstörbar.

3DEN-Attribut, Zeus-Modul und ZEN Kontextmenü wenden dabei dieselben Standardeinstellungen an (Haupt- und Heckrotor geschützt, Motor stirbt beim Erreichen des Schadenslimits) und funktionieren zuverlässig unabhängig davon, welcher Rechner (Server oder Client) im Mehrspieler die Berechnungshoheit über das Fahrzeug hat.

### Benutzung: 3DEN-Attribut

Bei platzierten Fahrzeugen findet ihr die Option um das Schild zu aktivieren in den Attributen des Fahrzeugs im Abschnitt `W-Framework`. Wird das Häkchen wieder entfernt, wird das Schild ebenfalls wieder entfernt (bereits erlittener Schaden bleibt bestehen).

!["3DEN-Editor-Attribute mit dem W-Vehicle-Shield"](https://i.imgur.com/c9Irw2F.jpeg)

### Benutzung: Zeus Modul

Während einer Mission könnt ihr das Zeusmodul nutzen um Fahrzeuge zu schützen. Zieht dazu einfach das Modul (Kategorie: W-Framework) auf das zu schützende Fahrzeug.

### Benutzung: ZEN Kontextmenü

Ist [ZEN](https://zen-mod.github.io/ZEN/) geladen, findet ihr im Zeus-Kontextmenü unter `W-Shields` den Eintrag `Vehicleshield hinzufügen`, wenn ihr ein Fahrzeug anvisiert, das noch kein Schild besitzt. Nach erfolgreicher Anwendung erscheint eine Zeus-Bestätigung.

### Benutzung: Funktionsaufruf (nicht empfohlen)

Schreibt in die Init des Fahrzeugs folgendes:

``` c++
[this, true, [false,false], true] call ttt_w_shields_fnc_addVehicleShield;
```

Argumente:

| # | Argument                                                      | Typ     | Optional | Default         |
| - | ------------------------------------------------------------- | ------- | -------- | --------------- |
| 0 | Ziel auf das das Schild angewandt werden soll                 | OBJECT  | Nein     | -               |
| 1 | Verhindere Treibstoffverlust durch Schaden?                   | BOOLEAN | Ja       | `false`         |
| 2 | Verhindere das Haupt- bzw. Heckrotor zerstört wird?           | BOOLEAN | Ja       | `[true, true]`  |
| 3 | Zerstöre den Motor wenn der Hüllenschaden ausgeschöpft ist?   | BOOLEAN | Ja       | `true`          |
| 4 | HandleDamage-Handler anderer Mods zuerst entfernen? (z.B. ACE)| BOOLEAN | Ja       | `true`          |

Rückgabe-Wert:

Keiner

## Events

| Eventname                                   | Beschreibung                                                      | Parameter                                 | Lokalität |
| ------------------------------------------- | ----------------------------------------------------------------- | ----------------------------------------- | --------- |
| `ttt_w_shields_API_buildingShieldTriggered` | Gebäude hat Schaden genommen, aber das Schild hat ihn verhindert  | `_unit, _source, _instigator, _directHit` | lokal     |
| `ttt_w_shields_API_vehicleShieldTriggered`  | Fahrzeug hat Schaden genommen, aber das Schild hat ihn verhindert | `_unit, _source, _instigator`             | lokal     |

## Maintainer

* Andx
