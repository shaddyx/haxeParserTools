#!/bin/sh
haxe build.hxml

FILE="out/index.php"

if [ -f $FILE ]
then
	echo "running..."
	php $FILE
fi
