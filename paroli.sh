#!/bin/bash
read -p "Vvedite vash parol: " num1
if [[ -z $num1 ]]
then
echo "Vi ni4ego ne napisali"
elif [[ $num1 == admin123 ]]
then
echo "Welcome!"
else
echo "Idi naxui , 4mo"
fi

