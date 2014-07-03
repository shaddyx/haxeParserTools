#!/bin/sh
haxe build.hxml

FILE="out/index.php"

if [ -f $FILE ]
then
	php $FILE
fi
