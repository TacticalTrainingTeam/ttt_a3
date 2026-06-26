#!/usr/bin/env bash
set -euo pipefail

# Paths
FULL_ZIP="releases/ttt-latest.zip"
TEMP_DIR="releases/ttt-temp"
MINIMAL_ZIP="releases/ttt-minimal.zip"
ADDON_LIST=".github/minimal-addons.txt"

echo "Reading minimal addon list..."
KEEP_ADDONS=$(sed '/^$/d' "$ADDON_LIST")

echo "Extracting full build..."
rm -rf "$TEMP_DIR"
unzip -q "$FULL_ZIP" -d "$TEMP_DIR"

# Navigate to addons directory (HEMTT uses @modname/addons)
ADDONS_DIR=$(find "$TEMP_DIR" -type d -path "*/addons" | head -n 1)
cd "$ADDONS_DIR"

echo "Processing addons in: $ADDONS_DIR"

for pbo_file in *.pbo; do
    addon_name="${pbo_file#ttt_}"
    addon_name="${addon_name%.pbo}"

    if ! echo "$KEEP_ADDONS" | grep -qx "$addon_name"; then
        echo "Removing: $pbo_file and ${pbo_file}.${addon_name}.bisign"
        rm -f "$pbo_file"
        rm -f "${pbo_file}.${addon_name}.bisign"
    else
        echo "Keeping: $pbo_file"
    fi
done

echo "Creating minimal ZIP..."
cd "$TEMP_DIR"
zip -r -q "../ttt-minimal.zip" .

echo "Cleaning up..."
cd ..
rm -rf "$TEMP_DIR"

echo "Minimal version created at: $MINIMAL_ZIP"
