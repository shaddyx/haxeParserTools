#!/bin/sh
PHPFILE="out/index.php"
CPPFILE="out/Tests"
rm $PHPFILE 2>/dev/null
rm $CPPFILE 2>/dev/null



tryToRun(){
    if [ -f $1 ]
    then
	echo "running... ($2 $1)"
	$2 $1
    fi
}

red='\e[0;31m'
NC='\e[0m' # No Color
haxe build.hxml
res=$?
if [ $res -eq 0 ]
then
	tryToRun $PHPFILE "php"
	tryToRun $CPPFILE
else
    echo -e "${red}Compilation error${NC}"
fi



