#!bin/bash
read -p "Are you sure?(y/n): " res
until [[ "$res" == "y" ]]
do
rm file.txt
exit 0
done
echo "Ne ydalil"
