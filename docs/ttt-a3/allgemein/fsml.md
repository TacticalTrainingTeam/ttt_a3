---
title: Full Screen Mission Loading
description: Zeigt das Missionsladebildschirm-Bild während des Ladevorgangs in Vollbild an.
published: true
date: '2026-11-11T12:57:51.330Z'
tags:
  - arma3
  - referenz
  - pruefung-noetig
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

Zeigt das Missionsladebildschirm-Bild während des Ladevorgangs in Vollbild an.

## Funktion

Wenn eine Mission ein Ladebild konfiguriert hat (`loadScreen` in der `description.ext`), wird dieses automatisch in Vollbild während des Ladevorgangs angezeigt. Das Addon nutzt das `Extended_DisplayLoad_EventHandlers` Event, um beim Öffnen des Standard-Ladebildschirms (`RscDisplayLoading`) ein eigenes, bildschirmfüllendes Overlay zu erstellen.

### Technische Details

- Das Addon prüft automatisch, ob ein Missionsladebildschirm konfiguriert ist
- Falls vorhanden, wird das Bild bildschirmfüllend dargestellt
- Der Hintergrund wird mit einer dunklen Farbe (`#(rgb,8,8,3)color(0.2,0.2,0.2,1)`) gefüllt
- Das Bild wird zentriert und unter Berücksichtigung des Seitenverhältnisses skaliert
- Die Darstellung respektiert die Safe Zones und unterschiedliche Bildschirmauflösungen

### Voraussetzungen

Die Mission muss in ihrer `description.ext` ein Ladebild definiert haben:

```cpp
loadScreen = "pfad\zum\bild.paa";
```

Wenn kein Ladebild konfiguriert ist, wird das Addon nicht aktiv und der Standard-Ladebildschirm von Arma 3 wird angezeigt.

## Maintainer

- Andx
