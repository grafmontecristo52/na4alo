#!/bin/bash
read -p "Vashe 4islo: " num
if [[ ! -z "$num" && "$num" =~ ^[0-9]{3} ]]; then
echo "yspex"
else
echo "oshibka vvoda"
fi


