#!/bin/bash
shopt -s nocasematch
echo "Privet , ya pomogy opredelitb rashirenie faila! Napishi nazvanie!"
read rs
case $rs in
jpg|png|gif)
echo "Eto kartinka!"
;;
mp3|wav)
echo "Eto music!"
;;
*)
echo "Ne znay(("
;;
esac
shopt -u nocasematch
