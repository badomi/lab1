#!/bin/bash

for i in 5 4 3 2 1
do
	j=0
	while [ $j -lt $i ]
	do
		echo -n "*"
		j=$((j+1))
	done
	echo
done
