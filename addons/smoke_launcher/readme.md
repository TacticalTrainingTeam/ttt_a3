# Smoke Launcher

Erlaubt es Richtschütze und Kommandant eines Fahrzeugs, die Nebelmittelwurfanlage abzufeuern. Standardmäßig kann das nur der Kommandant (bzw. nur über das Waffenmenü), hier reicht die Taste für Gegenmaßnahmen (`launchCM`).

## Funktionsweise

Fahrzeuge werden über zwei Config-Attribute in ihrer `CfgVehicles`-Klasse angemeldet:

- `ttt_smoke_launcher_gunnerAndCommanderCanSmoke = 1;` aktiviert die Funktion für das Fahrzeug.
- `ttt_smoke_launcher_muzzle = "<Waffenklasse>";` ist die Waffe der Nebelmittelwurfanlage. Der Richtschütze muss diese Waffe als Turret-Waffe haben (`weapons[]`/`magazines[]`), sie wird dort mit `showToPlayer = 0` ausgeblendet, damit sie nicht im Waffenmenü auftaucht.

Der Spieler-Event `turret` (CBA) reagiert auf Sitzwechsel: Für Richtschütze und Kommandant (auch in der obersten Kommandantenposition `[2]`) wird ein Tasten- und Maus-Handler auf dem Hauptdisplay registriert, der bei `launchCM` die Waffe per `BIS_fnc_fire` abfeuert, sowie ein Fired-Handler für die Munitionsanzeige. Nach dem Schuss ist die Anlage für die `reloadTime` der Waffe gesperrt (Variable `ttt_smoke_launcher_reloading`, global gesetzt).

Die Munitionsanzeige (`NbMWAnl: x`, rot wenn nicht schussbereit) wird über ein Intervall von 0,25 s aktualisiert, da sich Ausstieg, Pause-Menü, Zeus und ausgeblendetes HUD nicht per Event erkennen lassen. Sie wird nur angezeigt, solange der Spieler nicht ausgestiegen ist.

## Verwendet von

- `compat_bwa3` (Leopard 2)
- `compat_rnt` (Marder)

## Maintainer

- Andx
