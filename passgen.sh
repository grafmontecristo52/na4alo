#!/bin/bash
PASS=$(date | sha256sum | head -c 12)
echo "$PASS"
