# Coin Check

Bildet den militärischen Brauch des "Coin Check" ab: Ein Spieler mit eigener Münze kann per ACE-Selbstinteraktion einen Coin Check starten. Alle anderen Spieler mit Münze und aktivierter Einstellung haben danach eine einstellbare Zeit (Standard 30s) und Reichweite (Standard 10m), um ebenfalls ihre Münze per Selbstinteraktion vorzuzeigen. Beim Vorzeigen wird eine Ablege-Animation gespielt und die Münze aus dem Inventar in einen gemeinsamen Bodenwaffenhalter am Ort des Checks gelegt.

## Konfiguration

- **Münz-Datenbank (`db.hpp`)**: Ein Eintrag pro Spieler, fortlaufend nummeriert ohne Lücken: `class GVAR(coin_1): GVAR(coin_base) { uid = "76561198000000000"; displayName = "..."; };`. Die `uid` bestimmt die Zuordnung zum Spieler, der `displayName` sollte den Besitzer erkennbar machen (z.B. `"Coin (Andx)"`) - so lässt sich die eigene Münze auch nach einem Check wieder aus dem Haufen im Bodenwaffenhalter heraussuchen. Die Zuordnung UID → Item wird einmalig beim Laden des Addons in eine HashMap eingelesen.
  **Wichtig:** Jede neue Münzklasse aus `db.hpp` muss zusätzlich in `weapons[]` in `config.cpp` (CfgPatches) eingetragen werden. Ohne diesen Eintrag existiert die Klasse zwar im Config (sichtbar per `isClass`/Config Viewer), wird von der Engine aber nicht als echter Inhalt erkannt - `addItem` schlägt dann mit "not found" fehl.
- **Enable Coin Check**: Persönliche (Client-)Einstellung. Jeder Spieler entscheidet selbst, ob er an Coin Checks teilnimmt.
- **Response Radius / Response Time**: Server-Einstellungen für Reichweite und Reaktionszeit eines Checks.

Die Münzen werden einmalig pro Mission automatisch verteilt, sobald ein in der Datenbank gelisteter Spieler einsatzbereit ist (kein erneutes Verteilen nach dem Verlieren der Münze bei einem Check).

Es können mehrere unabhängige Coin Checks gleichzeitig an unterschiedlichen Orten laufen, ohne sich gegenseitig zu überschreiben - jeder Check wird über den NetID seines Bodenwaffenhalters eigenständig verfolgt.

## Maintainer

- Andx
