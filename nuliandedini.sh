#!/bin/bash
s="1110001101"
echo ${s//"1"/""} #udalit vse nuli
echo ${s//"1"/"0"} #zamenit vse 1 na 0
echo ${s//"0"/""} #udalit vse nuli
echo ${s//"0"/"1"} #zamenit vse 0 na 1
