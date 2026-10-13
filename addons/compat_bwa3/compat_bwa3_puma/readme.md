# Compat BWA3 - Puma

Verbessert die Optiken und Bewaffnung des Puma (nur Config, ohne Skripte).

- Richtschützen- und Kommandantenoptik nutzen die Warrior-Optik für ein größeres Sichtfeld, ohne Nachtsicht.
- Richtschütze und Kommandant können die Nebelmittelwurfanlage abfeuern (Waffe aus `compat_bwa3_weapons`, Logik im Addon `smoke_launcher`). Die Anlage wandert dafür vom Kommandanten zum Richtschützen.
- Die Waffen und Magazine des Richtschützen: MK30 mit AP/HE-Mündungen, MG5 mit 1000-Schuss-Gurtkasten, Spike LR und Nebelmittelwurfanlage. Die Munitionsmengen stehen in `compat_bwa3_weapons`.
- Im Eden-Editor ist HE statt ABM als Standardmunition der MK30 vorausgewählt.
- Die Motorstartverzögerung beträgt 5 Sekunden.

Nicht enthalten sind u.a. Fahrzeugnummern, zusätzliche Kameras, das Raketenwarn-Radar und die Tastenbelegung zum Munitionswechsel.

## Abhängigkeiten

- BWmod <https://steamcommunity.com/sharedfiles/filedetails/?id=1200127537>

## Quellen

Teile dieses Addons stammen aus dem Mod PzGrenBtl402 (<https://github.com/PzGrenBtl-402/PzGrenBtl402>, Stand: Commit `e4d9ec8`) und wurden mit Erlaubnis eines Maintainers übernommen und angepasst. Der Mod steht unter der Arma Public License No Derivatives. Ganze übernommene Config-Dateien tragen einen entsprechenden Kommentar am Anfang.

Übernommen aus `addons/BwMod_Puma` (Autoren laut Original: Timi007, Mishkar): nur der Config-Teil (Optik, Waffen, Eden-Standard). Die ACRE-Konfiguration, HUD, Kameras, Radar und Fahrzeugnummern wurden nicht übernommen.

## Maintainer

- Andx
