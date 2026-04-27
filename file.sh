#!/bin/bash
file="pizda.txt"
if rm "$file" ; then
echo "Ya nashel i udalil $file"
else
echo "Ya ne smog udalit $file"
fi
