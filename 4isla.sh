#!/bin/bash
read -p "pervoe 4islo: " num1
read -p "vtoroe 4islo: " num2
if [[ $num1 -eq $num2 ]] ;
then echo "$num1 ravno $num2"
else
echo "Ti ebanat?"
fi
