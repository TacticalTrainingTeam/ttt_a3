---
title: Full Screen Mission Loading
description: Zeigt das Missionsladebildschirm-Bild während des Ladevorgangs in Vollbild an.
published: true
tags:
  - arma3
  - referenz
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

::block-infobox{name="Full Screen Mission Loading"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
Kompatibilität: "Arma 3 ✅ · Reforger ❌"
```
::

Zeigt das Ladebild einer Mission während des Ladens bildschirmfüllend an.

# Benutzung

Das Ladebild in der `description.ext` der Mission eintragen:

```cpp
loadScreen = "pfad\zum\bild.paa";
```

Das Bild wird zentriert, im richtigen Seitenverhältnis und auf dunklem Hintergrund angezeigt. Ohne `loadScreen` bleibt der normale Ladebildschirm von Arma 3.
