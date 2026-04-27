#!/bin/bash
echo "Hello! Please,verify yourself!: "
read -p "Name: " N
read -p "Age: " A
if [[ $N = "admin" ||=~[$A -gt ^18] ]]; then
echo "Welcome!"
else
echo "Wrong!"
fi
