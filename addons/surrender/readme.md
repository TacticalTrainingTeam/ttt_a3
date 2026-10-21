# Surrender

Adds a 3DEN module that periodically checks a configured area and forces units on the selected enemy side to surrender through ACE Captives once they are sufficiently outnumbered by the configured friendly side. The addon is intentionally small: the module attributes define the sides, surrender chance, and outnumber ratio, and the runtime logic is handled by a single CBA per-frame handler.

## Runtime notes

- The module runs server-only (`isGlobal = 0`). The PFH ID is stored on the logic as `ttt_surrender_pfhID`. A deactivation call removes it, and the PFH also removes itself once the logic is null (e.g. deleted by Zeus without a deactivation call).
- Units chosen to surrender get a public `Surrendered` flag so later ticks skip them. The surrender is sent via the `ace_captives_setSurrendered` target event because `ace_captives_fnc_setSurrendered` only works where the unit is local (AI may be on a headless client).
- ACE refuses some units (mounted, handcuffed, …). `SURRENDER_VERIFY_DELAY` seconds later the flag is cleared again unless `ace_captives_isSurrendering` is set, so the unit can be retried instead of being skipped forever. The delay must stay below the 10 s PFH interval.

## Maintainer

- Andx
