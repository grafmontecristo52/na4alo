#!/bin/bash
s="gbilsgdbnkjkj45321"
echo ${s#"g"} #ydalit g v na4ale
echo ${s%"21"} #ydalit 21 v konce
echo ${s/"g"/"a"} #zamenit g v na4ale na a
echo ${s//"g"/"e"} #zamenit vse g na e
echo ${s//"j"/""} #udalit vse j 
