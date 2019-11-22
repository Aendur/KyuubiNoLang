#!/bin/bash


for i in tests/*
do
	echo $i
	echo $i >> result.log
	./kyu $i >> result.log
done
