#!/bin/bash
TARGET=$1
echo "Cha yznay pro $TARGET"
if ping -c 1 -W 2 "$TARGET" &> /dev/null; then
echo "OK"
else
echo "ALARM"
fi
