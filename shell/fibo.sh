#!/bin/bash

echo "let 피보나치"
a=0
b=1
for i in 1 2 3 4 5 6 7 8 9 10
do
	echo -n "$a "
	let c=a+b
	a=$b
	b=$c
done
echo
echo "expr 피보나치"
a=0
b=1
for i in 1 2 3 4 5 6 7 8 9 10
do
	echo -n "$a "
	c=`expr $a + $b`
	a=$b
	b=$c
done
echo

