#!/bin/bash

usage(){
	echo "help"
}

ARGS=`getopt -q -o g: --long get: -n "t.sh" -- "$@"`

if [ $? != 0 ]; then
	usage
	exit 1
fi

eval set -- "${ARGS}"

while [ -n "$1" ]
do
	case "$1" in
		-g|--get)
			echo Get PKG $2
			shift 2
			;;
		--)
			shift
			break
			;;
		*)
			echo "$1 is not option"
			usage
			exit 1
			;;
	esac

done
