# !/bin/bash

 usr=$1

cd ~/

for i in `ls`
do
  set ` ls -li $i `
if [ -f $i ]
then
 if [ $usr = $4 ]
 then 
	 echo $i " | " $4
 fi
fi
done
