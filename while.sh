#!/bin/bash
read -p "blya blya blya: " num1
until [ $num1 -lt 15 ]
do
echo "4islo: $num1"
((num1++))
done
