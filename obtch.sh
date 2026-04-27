#!/bin/bash
read -p "Vashe 4islo!: " num
while (($num <= 10 && $num >= 0))
do
echo "4islo = $num"
((num--))
sleep 1
done
