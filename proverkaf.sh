#!/bin/bash
read -p "imya poiska: "
if [[ -d $REPLY ]]
then
echo "$REPLY = directory" 
elif [[ -f $REPLY ]]
then
echo "$REPLY = file"
else
echo "Ebanat"
fi

