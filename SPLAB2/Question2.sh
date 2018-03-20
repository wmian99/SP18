# !/bin/bash

if [ $# -eq 0 ]
then
 echo "Invalid args"
fi

if [ $# -gt 1 ]
then
 echo "INvalid args"
fi

if [ $# -eq 1 ]
then
 myvar=$1
 set `ps -all -A | grep $myvar`
 echo "PID :" $4
 echo "PPID :" $5
 echo "STATE IS : RUNNIG"
 shift
 shift
 shift
 shift
 shift
 echo "NAME :" $9
fi

