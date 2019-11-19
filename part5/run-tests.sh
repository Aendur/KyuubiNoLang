#!/bin/bash


for i in tests/*
do
	echo $i
	echo $i >> result.log
	./a.out $i >> result.log
done
