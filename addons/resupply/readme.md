# TTT Nachschub

Scannt bei Missionsstart die Ausrüstung aller Spieler und baut daraus pro
Kategorie eine Item-Datenbank auf (gemittelt pro Gruppe mit Spielern). Darauf
aufbauend können Missionsbauer typisierte Nachschubkisten anfordern lassen -
über eine ACE-Aktion an vorplatzierten Depot-Objekten oder über Zeus-Module.

Siehe die [Nutzerdokumentation](https://docs.tacticalteam.de/addons/resupply/)
für Kistentypen, Einstellungen und die Nutzung durch Missionsbauer.

## Item-Klassifizierung

Die Items werden bei Missionsstart aus der Ausrüstung der Spieler klassifiziert:

- `magazines _unit` - Einordnung anhand der CfgAmmo-Hierarchie der Munition:
  - `RocketBase` / `MissileBase` → Panzerabwehr
  - `MineBase` / `BombCore` → Sprengstoff
  - `GrenadeBase` / `SmokeShell` / `FlareBase` → Granaten
  - alles andere → Munition
- `items _unit` - alles davon geht in Support
- `weapons _unit` - Waffen, die in CBAs Disposable-Launcher-Framework
  (`CBA_DisposableLaunchers`, siehe `fnc_resolveDisposableLauncher`)
  registriert sind, gehen zusätzlich zu ihrer Munition in Panzerabwehr. Nötig
  für echte Einwegwaffen (z. B. die Panzerfaust-3 aus BWA3): dort wird
  beim Abfeuern die ganze Waffe verbraucht statt nur nachgeladen, eine reine
  Magazin-Kiste wäre also nutzlos ohne ein neues Rohr. Launcher, die nur per
  Missionskonvention mit einem Magazin ausgegeben werden, bleiben auf Engine-Ebene nachladbar und werden bewusst nicht mit
  aufgenommen - dort reicht die Munition allein.

## Abhängigkeiten

- `ttt_common` (Sanitätskisten-Klassen + `fnc_crateFiller`)
- `ace_common` (strukturierter Bestätigungs-/Fehler-Text auf dem Bildschirm für die ACE-Aktion)
- `ace_interact_menu`
- `ace_zeus` (Zeus-Curator-Meldungsfeed zur Rückmeldung von Zeus-ausgelösten Spawns)
- `ttt_compat_kam` (optional; wird automatisch für Sanitätskisten verwendet, wenn `kat_main` geladen ist)

## Maintainer

- Andx
