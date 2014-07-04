#!/bin/sh
g++ ./CurlInterface.cpp -shared -o ./CurlInterface.ndll -I/usr/lib/haxe/lib/hxcpp/3,1,39/include/ -lcurl -fPIC