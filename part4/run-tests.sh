#!/bin/bash


for i in tests/*
do
	echo $i
	echo $i >> tests.log
	./a.out $i >> tests.log
done
