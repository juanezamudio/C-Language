#
# Simple Makefile to build the programs
#
# Rett Bull
# Pomona College
# May 17, 2017
#
CC = gcc

all:
	echo "no default action; specify a program"

arrays: arrays.c
	$(CC) -o arrays arrays.c

lists: lists.c
	$(CC) -o lists lists.c

strings: strings.c
	$(CC) -o strings strings.c

strings_solver: strings_solver.c
	$(CC) -o strings_solver strings_solver.c

clean:
	rm -rf arrays lists strings strings_solver
