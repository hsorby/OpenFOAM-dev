#!/bin/bash

t=$1
q=`echo $t |cut -c1 |tr [:lower:] [:upper:]``echo ${t:1}`
echo $t
echo $q
mv OpenFOAM/includePrivate/${t}.H tmp.H

git add .
git ci -m "Rename case $t."

mv tmp.H OpenFOAM/includePrivate/${q}.H

git add .
git ci -m "Rename case return $q."

