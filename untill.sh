#!/bin/bash
read -p "Vashe 4islo: " n
until (( "$n" <= 0 ))
do
echo "$n"
((n--))
sleep 1
done
