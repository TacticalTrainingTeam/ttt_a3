# Compat FPV

Fixes für Ukraine FPV Drone (`FPV_UA`). Lädt nur mit dem Mod, unabhängig davon, ob er mit RHS
oder CUP genutzt wird - deshalb getrennt von `drone_crafting`, das zusätzlich RHS braucht.

## Inventarbilder der FPV-Items

`FPV_UA` setzt bei allen `UA_Item_*`-Magazinen `picture = ""`. Die Engine sucht dann
`equip\m\m_<classname>.paa`, das es nicht gibt - jedes Inventar mit solchen Items schreibt
`Picture ... not found` ins RPT. `CfgMagazines.hpp` gibt den Drohnen-Items (Rahmen, fertige
Drohnen inkl. LWL-Varianten) die Bilder, die der Mod für seine Drohnen-Fahrzeuge mitbringt
(`fpv_pic_ca.paa` / `fpv_fiber_pic_ca.paa`). Nutzlast-, Akku- und Spulen-Items bleiben ohne
Bild, dafür hat der Mod nichts Passendes. Jede Unterklasse setzt `picture = ""` selbst und
muss deshalb einzeln überschrieben werden.

## Abhängigkeiten

- `FPV_UA` (Ukraine FPV Drone, Workshop 3475006113)

## Maintainer

- Andx
