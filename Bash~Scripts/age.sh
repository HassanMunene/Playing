#!/bin/bash

if [ $1 -ge 18 ]
then
	echo "You may go to the party"
elif [ $2 == 'yes' ]
then
	echo "You may go to the party but be back by midnight"
else
	echo "You are not allowed to go to the party"
fi
