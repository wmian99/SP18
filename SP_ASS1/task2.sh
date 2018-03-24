# !/bin/bash
 count=1
 file1=$1
 IFS=$'\n' arr=(`cat $file1`)
 for i in ${arr[*]}
 do
 touch evenfile
 touch oddfile
 res=`expr $count % 2`
 if [ $res -eq 0 ]
 then
 echo $i 1>>evenfile
 
 else
 echo $i 1>>oddfile
 fi
 count=`expr $count + 1`
 done

