#!/bin/bash

echo "for문 구구단"
for dan in 2 3 4 5 6 7 8 9
do
	for i in 1 2 3 4 5 6 7 8 9
	do
		echo "$dan X $i = $((dan*i))"
		i=$((i+1))
	done
done

echo "while문 구구단"
dan=2
while [ $dan -le 9 ]
do
	i=1
	while [ $i -le 9 ]
	do
		echo "$dan X $i = $((dan*i))"
		i=$((i+1))
	done
	dan=$((dan+1))
done

echo "until문 구구단"
dan=2
until [ $dan -gt 9 ]
do
	i=1
	until [ $i -gt 9 ]
	do
		echo "$dan X $i = $((dan*i))"
		i=$((i+1))
	done
	dan=$((dan+1))
done
