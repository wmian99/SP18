#!/bin/bash

owner=$2
file1=$1

owner2=$4
file2=$2

set `ls -li $1`

echo $4

if [ $owner == $owner2 ]
then 
   cheating=1
else
   cheating=0
fi

if [ $4 == $owner ]
then 
  cheating=0
else
  cheating=1
fi

echo "CHEATING:" $cheating 

 diff -c $file1 $file2 
