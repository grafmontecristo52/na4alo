#!/bin/bash
read -p "napishi 4islo:" num1
read -p "napishi 4islo:" num2
read -p "napishi 4islo:" num3
if [[ "$num3" == "plus" ]]; then
result=$(($num1 + $num2))
echo "Resultat: $result"
elif [[ "$num3" == "minus" ]]; then
result=$(($num1 - $num2))
echo "Resultat: $result"
else
echo "4mo"
fi
