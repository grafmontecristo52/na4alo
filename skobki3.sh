#!/bin/bash
s="text))"
len=${#s}
k1=0
k2=0
for ((i=0;i < len;i++))
do
char1=${s:$i:1}
char2=${s:$i:1}
if [[ $char1 == "(" ]]
then
((k1++))
fi
if [[ $char2 == ")" ]]
then
((k2++))
fi
done
echo "$k2" "$k1"
