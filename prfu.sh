#!/bin/bash
until [[ -f test.txt ]]
do
echo "Ne nashel!"
sleep 1
done
echo "Vot on!"
