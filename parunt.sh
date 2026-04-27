#!/bin/bash
read -p "Vash parol: " p
until [[ "$p" != "secret" ]]
do
echo "Yspex!"
exit 0
done
echo "Wrong!"
