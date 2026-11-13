---
title: Discord Rich Presence
description: Zeigt im Discord einige Informationen über die Mission, die wir spielen, an.
published: true
date: '2026-11-12T12:05:26.933Z'
tags:
  - arma3
  - referenz
  - ttt-mod
editor: markdown
dateCreated: '2026-11-06T15:01:29.000Z'
---

<div class="compat-box">
  <a href="/Wiki-Ampel-System" class="compat-label">Kompatibilität</a>
  <a href="/_tags?t=arma3"><span class="compat-badge compat-green">Arma 3</span></a>
  <a href="/_tags?t=armareforger"><span class="compat-badge compat-red">Reforger</span></a>
</div>

::block-infobox{name="Discord Rich Presence"}
```yaml
Ansprechpartner: "Andx (Discord: andx)"
```
::

Zeigt in Discord an, welche Mission gespielt wird, und verlinkt unsere Mitmachen-Seite und unseren Discord.

# Voraussetzungen

- [Discord Rich Presence](https://steamcommunity.com/sharedfiles/filedetails/?id=1493485159) - Erforderlich, ohne die Mod wird nichts angezeigt

# Benutzung

Läuft automatisch. Angezeigt werden:

- Missionsname und Karte
- eigener Slot (Rollenbeschreibung)
- Spielerzahl und maximale Spielerzahl
- TTT-Logo und die Buttons **Mitmachen** und **Discord**

Die Anzeige wird kurz nach dem Missionsstart gesetzt und nach 10 Minuten noch einmal aktualisiert.

# Einstellungen

Zu finden unter **Addon-Optionen > Tactical Training Team > Discord Rich Presence**. Jeder Spieler stellt das für sich selbst ein.

| Einstellung | Standard | Beschreibung |
| --- | --- | --- |
| `ttt_discord_richpresence_enableDRP` | `true` | Missionsname, Slot und Spielerzahl an Discord senden |

# Funktionen

## `ttt_discord_richpresence_fnc_updateRichPresence`

Aktualisiert die Anzeige sofort, z.B. nach einem Slotwechsel.

```sqf
[] call ttt_discord_richpresence_fnc_updateRichPresence;
```

Argumente: keine

Rückgabewert: keiner
