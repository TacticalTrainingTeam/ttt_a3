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
- `items _unit` - geht in Support, außer ACE-Sanitätsitems
  (`ACE_isMedicalItem = 1` in `CfgWeapons`, deckt Verbandsmaterial, Medikamente,
  IV-Beutel, PAK, Nahtset, Leichensäcke etc. ab) - die haben mit den
  Sanitätskisten bereits eigene, dedizierte Kisten und würden Support sonst
  doppeln
- `weapons _unit` - Waffen, die in CBAs Disposable-Launcher-Framework
  (`CBA_DisposableLaunchers`, siehe `fnc_resolveDisposableLauncher`)
  registriert sind, gehen zusätzlich zu ihrer Munition in Panzerabwehr. Nötig
  für echte Einwegwaffen (z. B. die Panzerfaust-3 aus BWA3): dort wird beim
  Abfeuern die ganze Waffe verbraucht statt nur nachgeladen, eine reine
  Magazin-Kiste wäre also nutzlos ohne ein neues Rohr. Launcher, die nur per
  Missionskonvention mit einem Magazin ausgegeben werden (z. B. Vanilla-NLAW),
  bleiben auf Engine-Ebene nachladbar und werden hier bewusst nicht
  berücksichtigt - dort reicht die Munition allein.

## Kisten-Platzierung (`fnc_spawnCrate`)

Standardmäßig sucht `findEmptyPosition` einen freien Platz im Umkreis von
10 m um den übergebenen Referenzpunkt (Depot-Objekt bzw. Zeus-Modul-Position).

Steht zusätzlich ein `VR_Area_01_square_2x2_yellow_F`-Objekt im selben
Umkreis, wird dessen Position direkt übernommen (keine erneute
`findEmptyPosition`-Prüfung - ein Suchradius, der eng genug wäre, um exakt
diese eine Stelle zu bestätigen, ist meist zu klein für die Kollisionsprüfung
eines Kisten-Modells und würde nie etwas finden). Belegung wird stattdessen
direkt geprüft: Steht dort bereits eine Kiste (`ReammoBox_F`-Basisklasse,
gilt für alle hier gespawnten Kistentypen inkl. Sanitätskisten), wird
überhaupt keine Kiste gespawnt - kein Ausweichen auf eine zufällige Stelle,
da das den Sinn der festen Position wieder zunichtemachen würde. Kein
zusätzlicher State wird dafür gehalten: Die Prüfung läuft bei jedem Aufruf
frisch über `nearObjects`.

## Abhängigkeiten

- `ttt_common` (Sanitätskisten-Klassen + `fnc_crateFiller`)
- `ace_common` (strukturierter Bestätigungs-/Fehler-Text auf dem Bildschirm für die ACE-Aktion)
- `ace_interact_menu`
- `ace_zeus` (Zeus-Curator-Meldungsfeed zur Rückmeldung von Zeus-ausgelösten Spawns)
- `ttt_compat_kam` (optional; wird automatisch für Sanitätskisten verwendet, wenn `kat_main` geladen ist)

## Maintainer

- Andx
