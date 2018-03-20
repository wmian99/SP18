#! /bin/bash

UNIX=(Debian 'Red Hat' Ubuntu Suse Fedora)
echo ${UNIX[*]}

echo ${#UNIX[*]}

echo ${#UNIX[2]}

echo ${UNIX[*]:3:2}

echo ${UNIX[*]/"Ubuntu"/"SCO Unix"}

UNIX=(${UNIX[*]} "AIX" "LOL")

echo ${UNIX[*]}

unset UNIX[2]

echo ${UNIX[*]}

LINUX=(${UNIX[*]})

echo ${LINUX[*]}

echo "NOw concetanating "

BASH=(${UNIX[*]} ${LINUX[*]})

echo ${BASH[*]}

unset LINUX

echo "displaying linux array" ${LINUX[*]}

unset UNIX

echo "displaying uniux array" ${LINUX[*]}


