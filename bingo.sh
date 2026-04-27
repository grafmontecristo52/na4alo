#!/bin/bash
read -p "Sigraem v bingo?: " otvet
if [[ $otvet == "yes" || $otvet == "da" ]]; then
echo "Poexali!"
read -p "Vashe 4islo: " num1
    if [[ $num1 =~ ^[0-9]{3}$ ]]; then
    echo "Bingo!"
    else
    echo ":("
    fi
else 
  echo "Nu i ladno..."
fi
