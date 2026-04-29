#!/bin/bash
nameuser=$(whoami)
data=$(date)
clp=$(users | wc -w)
echo "Hello $nameuser!Its $data and some users online $clp"
