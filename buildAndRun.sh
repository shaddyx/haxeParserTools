#!/bin/sh
haxe build.hxml
res=$?

red='\e[0;31m'
NC='\e[0m' # No Color
if [ $res -eq 0 ]
then

    FILE="out/index.php"

    if [ -f $FILE ]
    then
	echo "running..."
	php $FILE
    fi
else
    echo -e "${red}Compilation error${NC}"
fi
