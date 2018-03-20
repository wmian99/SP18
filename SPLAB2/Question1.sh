# !/bin/bash

if [ $# -eq 0 ]
then
 echo "NO arguments passed "
 exit
elif [ $# -eq 1 ]
then
 echo "Printing table of : " $1
 x=1
 while [ $x -ne 11 ]
 do
  res=$(( $x * $1))
  echo $res
  x=$(( $x + 1)) 
 done
elif [ $# -eq 3 ]
then
 echo " Printing table of " $1 " starting from " $3
 y=$3
 while [ $y -ne 11 ]
 do
  res2=$(( $y * $1))
  echo $res2
  y=$(( $y + 1)) 
 done 
elif [ $# -eq 5 ]
then
 echo " Printing table of " $1 " starting from " $3 " ending at " $5
 y=$3
 while [ $y -ne $(($5+1)) ]
 do
  res2=$(( $y * $1))
  echo $res2
  y=$(( $y + 1)) 
 done     
    
fi 
 

