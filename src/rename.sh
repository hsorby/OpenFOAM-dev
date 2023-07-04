#!/bin/bash

t=$1
q=`echo $t |cut -c1 |tr [:upper:] [:lower:]``echo ${t:1}`
echo $t
echo $q
mv OpenFOAM/includePrivate/${q}.H tmp.H

git add .
git ci -m "Rename case $t."

mv tmp.H OpenFOAM/includePrivate/${t}.H

git add .
git ci -m "Rename case return $t."

