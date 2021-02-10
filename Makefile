OUT = ./build/
CC = g++


all:
	g++ main.cpp

clean:
	rm ./a.out;

start:
	g++ main.cpp ./services/cliparser.cpp; ./a.out

