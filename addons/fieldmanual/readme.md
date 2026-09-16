# Handbuch

## Referenzen

<https://community.bistudio.com/wiki/Arma_3:_Advanced_Hints_(Field_Manual)>

## Bekannte Stolperfallen

`description` und `tip` in `CfgHints` werden von der Engine per SQF `format` verarbeitet (`fn_advHintFormat.sqf`). Das hat zwei Konsequenzen:

- **Keine Umlaute direkt/als HTML-Entity in Links verwenden.** Ein literales `ä`/`ü`/`ö` im Quelltext wird beim Rapify falsch interpretiert (Mojibake). HTML-Entities wie `&uuml;` werden zwar korrekt zu Unicode dekodiert, aber beim Öffnen im externen Browser auf ASCII verengt (`?` statt `ü`). Einzige funktionierende Variante: URL-encodete UTF-8-Bytes (`%C3%BC` für `ü`), aber **jedes `%` muss verdoppelt werden** (`%%C3%%BC`), da `format` (vor Arma 3 v2.18 ohne Fallback, seither mit `%%`-Escape) ein einzelnes `%` sonst als (ungültigen) Platzhalter verschluckt.
- **`%2`/`%3`/`%4`/`%11` (Bullet/Highlight/Indent, siehe Kommentar in `CfgHints.hpp`) dürfen nie direkt von einer Ziffer gefolgt werden**, z. B. `%370m` wird von `format` als Platzhalter `%370` gelesen. Ist die Zahl klein, wird sie kommentarlos verschluckt (Zahl fehlt im Hint); ist sie groß genug, wirft `format` einen Laufzeitfehler ("X elements provided, Y expected") und der ganze Hint bricht ab. Abhilfe: immer ein Wort zwischen Token und Zahl setzen (z. B. `%3about 70m%4` statt `%370m%4`).

Zusätzlich muss jede externe Domain, die aus einem Hint-Link erreichbar sein soll, in `CfgCommands.hpp` (`allowedHTMLLoadURIs`) whitelisted werden – **immer mit führendem Wildcard** (`*.example.com`), eine reine Domain ohne `*.`-Präfix hat in der Praxis nicht funktioniert.

## Maintainer

- Andx
