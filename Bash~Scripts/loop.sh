#!/bin/bash

myvar=1

while [ $myvar -le 100000 ]
do
	echo $myvar
	myvar=$(( $myvar +1 ))
	sleep 2
done
echo "we are done"
