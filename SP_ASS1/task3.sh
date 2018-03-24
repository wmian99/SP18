# !/bin/bash

isOwnerExist()
{
  own=$1
 grep $own /etc/passwd
 if [ $? -eq 0 ]
 then
  echo "owner exists"
 else
  echo "owner doesnot exist"
 fi
}

is_Root()
{
  rid=(`cut -d ":" -f 3 /etc/passwd`)
 cid=`id -u`
 if [ $rid -eq $cid ]
 then
  echo "script is executed by root"
 else
  echo "script isn't executed by root"
 fi
}

is_Lower()
{
 echo ${@,,}
}


  isOwnerExist $1
  is_Root
  is_Lower $@
