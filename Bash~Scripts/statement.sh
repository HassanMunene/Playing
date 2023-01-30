#!/bin/bash

comand=htop

if command -v  $comand
then
	echo "$comand is available, let's run it ..."
else
	echo "$comand is NOT available, installing it..."
	sudo apt update && sudo apt install -y $comand
fi
$comand
