OUT = ./build/
CC = g++


all:
	g++ ./src/main.cpp

clean:
	rm ./a.out;

start:
	g++ ./src/main.cpp ./src/services/cliparser.cpp; ./a.out

