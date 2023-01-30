#!/bin/bash

package=htop
sudo apt install $package >> package_install_results.log

if [ $? -eq 0 ]
then
	echo "The package has been succefully installed"
	echo "The new package location is: "
	which $package
else
	echo "The new package was not installed please try to connect your laptop to WIFI and try again"
fi


