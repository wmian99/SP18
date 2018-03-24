# !/bin/bash

 filex=$1
 touch nodupfile
 
`sort $filex | uniq 1>>nodupfile`


