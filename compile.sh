#!/bin/bash

echo "Which file would you like to compile and run?"
read file

echo "--compiling C code"
gcc $file

echo "--executing compiled code"
./a.out