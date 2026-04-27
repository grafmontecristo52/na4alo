#!/bin/bash
n=$(( $RANDOM % 10 + 1 ))
until [[ "$n" -gt 8 ]]; do
echo "$n"
n=$(( $RANDOM % 10 + 1 ))
sleep 1
done
echo "Pobeda!"
