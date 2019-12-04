#!/bin/bash

valgrind -s --leak-check=full --track-origins=yes ./kyu $1
