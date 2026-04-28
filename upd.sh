#!/bin/bash
s1="4urki"
read s2
if [[ "$s2" == "up" || "$s2" == "UP" ]]
then
echo ${s1^^}
elif [[ "$s2" == "down" || "$s2" == "DOWN" ]]
then
echo ${s1,,}
else
echo "invalid command"
fi


