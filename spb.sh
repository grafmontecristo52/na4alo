#!/bin/bash
read -p "Nazovi cifry: " num1
read -p "Eshe raz: " num2
if [[ $num1 = 50 && $num2 = 2 ]]; then
echo "spb!"
elif [[ $num1 =~ ^1[0-9]$ || $num2 =~ ^1[0-9]$ ]]; then
echo "ogo!"
else
echo "ne spb((("
fi
