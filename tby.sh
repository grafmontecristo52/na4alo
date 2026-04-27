#!/bin/bash
i=1
while ((i <= 10 && i != 0))
do
echo "7 x $i = $(( 7 * i ))"
((i++))
done
