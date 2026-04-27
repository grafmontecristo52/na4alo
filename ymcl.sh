#!/bin/bash
read -p "pervoe 4islo: " n1
read -p "vtoroe 4islo: " n2
while (("$n1" > 0 && "n2" > 0))
do
echo "sum = $((n1 + n2))"
break
done
