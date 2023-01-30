#!/bin/bash
#declare an array

ColorList=("Blue Green Pink White Red")

#define loop that iterate the arrays values

for color in $ColorList
do
	if [ $color == 'Pink' ]
	then
		echo "my favourite color is $color"
	fi
done

