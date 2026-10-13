# Smoke Launcher

Erlaubt es Richtschütze und Kommandant eines Fahrzeugs, die Nebelmittelwurfanlage abzufeuern. Standardmäßig kann das nur der Kommandant (bzw. nur über das Waffenmenü), hier reicht die Taste für Gegenmaßnahmen (`launchCM`).

## Funktionsweise

Fahrzeuge werden über ein Config-Attribut in ihrer `CfgVehicles`-Klasse angemeldet: `ttt_smoke_launcher_muzzle = "<Waffenklasse>";` ist die Waffe der Nebelmittelwurfanlage. Der Richtschütze muss diese Waffe als Turret-Waffe haben (`weapons[]`/`magazines[]`), sie wird dort mit `showToPlayer = 0` ausgeblendet, damit sie nicht im Waffenmenü auftaucht. Fahrzeuge ohne dieses Attribut bleiben unverändert.

Der Spieler-Event `turret` (CBA) reagiert auf Sitzwechsel: Für Richtschütze und Kommandant (auch in der obersten Kommandantenposition `[2]`) werden `KeyDown`-, `KeyUp`-, `MouseButtonDown`- und `MouseButtonUp`-Handler auf dem Hauptdisplay registriert. Sie lösen nur aus, wenn `launchCM` von losgelassen auf gedrückt wechselt (Tastenwiederholung und andere Tasten werden ignoriert). Geschossen wird per `BIS_fnc_fire` über das CBA-Turm-Event `ttt_smoke_launcher_fire`, also auf dem Rechner, auf dem der Richtschützen-Turm lokal ist. Danach ist die Anlage für die `reloadTime` der Waffe gesperrt (Variable `ttt_smoke_launcher_reloading`, global gesetzt). Schießen kann nur, wer einen lebenden und nicht bewusstlosen Richtschützen im Fahrzeug hat.

Die Munitionsanzeige (`NbMWAnl: x`, rot wenn nicht schussbereit) wird über ein Intervall von 0,25 s aktualisiert, da sich Munition, Nachladezeit, Ausstieg, Pause-Menü, Zeus und ausgeblendetes HUD nicht per Event erkennen lassen. Das Intervall läuft nur, solange der Spieler auf einem unterstützten Sitz sitzt. Sie wird nur angezeigt, solange der Spieler nicht ausgestiegen ist.

## Verwendet von

- `compat_bwa3` (Leopard 2)
- `compat_rnt` (Marder)

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Die Herkunft jeder Funktion steht im Header der Datei (`Source:`), ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang.

Übernommen aus `addons/SmokeLauncher` (Autor laut Original: Timi007). Die Tastenerkennung und die Aktualisierung der Anzeige wurden überarbeitet: statt jedes Frame abzufragen, reagiert das Addon auf Tasten-Events und aktualisiert die Anzeige im 0,25-Sekunden-Takt. Der Schuss wird dort ausgelöst, wo der Turm lokal ist.

## Maintainer

- Andx
