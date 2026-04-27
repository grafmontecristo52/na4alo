#!/bin/bash
read -p "Vash vozvrast :  " num1
if [[ $num1 -lt 13 ]]
then
echo "Rebenok"
elif [[ $num1 -le 18 ]]
then
echo "Podrostok"
elif [[ $num1 -gt 18 ]]
then
echo "Vsroslii"
fi
