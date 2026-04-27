#!/bin/bash
space=10
while (( space >= 10 && space <= 100 ))
do
echo "Mesta dostatochno: $space%"
sleep 1
(( space += 20 ))
done
echo "Mesta malo!"
