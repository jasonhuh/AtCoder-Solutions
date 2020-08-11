#!/bin/bash
PROG_NAME=$1
g++ -std=c++17 -Wall -Wextra $PROG_NAME -o main; ./main