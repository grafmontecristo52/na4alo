#!/bin/bash
summa=0
for number in $@
do 
  (( summa += number ))
done
echo $summa
