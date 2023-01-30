#!/bin/bash

if [ $1 -gt 100 ]
then
	echo "Hey that's a large number!"
	if (( $1 % 2 == 0 ))
	then 
		echo "and it's an even number dude"
	fi
	pwd
fi

date
