# This is a basic Makefile built for CLion
#
#Variables
CC = g++
CFLAGS = -g -Wall -std=c++11

# all instance: necessary for clion
all: a.out

# main oupput
a.out: main.cpp
	$(CC) $(CFLAGS) main.cpp

# clean up created executable files
clean:
	rm -rf a.out