#!/bin/bash

p=$2
t=$1
q=`echo $t |cut -c1 |tr [:lower:] [:upper:]``echo ${t:1}`
echo "$p/$t"
echo "$p/$q"
mv $p/${t}.H tmp.H

git add .
git ci -m "Rename case $t."

mv tmp.H $p/${q}.H

git add .
git ci -m "Rename case return $q."

