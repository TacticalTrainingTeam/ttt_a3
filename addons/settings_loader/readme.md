# Settings Loader

Loads different CBA settings files based on a mission parameter.

## How It Works

- Mission parameter "TTT Settings Profile" with two options: Profile A (default) or Profile B
- `XEH_postInit.sqf` calls `fnc_loadSettings` which reads the parameter and loads the corresponding file
- Profile A → loads `cba_settings_a.sqf`
- Profile B → loads `cba_settings_b.sqf`

## Files

- `cba_settings_a.sqf` - CBA settings for Profile A (populate with exported settings)
- `cba_settings_b.sqf` - CBA settings for Profile B (populate with exported settings)
- `functions/fnc_loadSettings.sqf` - Main loader function
