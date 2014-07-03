#!/bin/sh
haxe build.hxml
res=$?
echo "state is: $res"
if [ $res -eq 0 ]
then

    FILE="out/index.php"

    if [ -f $FILE ]
    then
	echo "running..."
	php $FILE
    fi
fi
