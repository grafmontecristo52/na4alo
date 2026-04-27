#!/bin/bash
while [[ ! -f "test.log" ]]
do
echo "Net faila , ya jdy!"
sleep 5
if [[ -f "test.log" ]]; then
echo "Vot on!"
fi
done
