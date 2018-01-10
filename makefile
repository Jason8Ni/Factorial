CC=g++
CFLAGS=-I.

clean: *.o factorialmake

all: /bin/false

factorialmake: main.cpp Factorial.cpp
	$(CC) -o factorialmake main.cpp Factorial.cpp -I.
