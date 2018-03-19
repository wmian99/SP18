#!/bin/bash

array=(`cat file`)
echo ${array[*]}
echo ${#array[*]}
echo ${array[3]}
