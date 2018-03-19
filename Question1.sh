#!/bin/bash
x=0
y=0
expr $1 + 0 2>/dev/null
if [ $? -eq 0 ]
then 
    echo "first input" $1
    x=1

fi

expr $2 + 0 2>/dev/null
if [ $? -eq 0 ]
then 
  if [ $2 -ne 0 ]
   then
   echo "second input" $2
   y=1
   else
    echo "second arg is 0"
  fi		

fi


if [ $x -eq 1 ]
then
 if [ $y -eq 1 ]
 then
  echo "addition : " `expr $1 + $2` 
  echo "subtraction :"  `expr $1 - $2`
  echo "multiplication :" `expr $1 \* $2`
  echo "division :" `expr $1 / $2`
	 	
 fi

fi
   

 
