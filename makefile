CC=gcc
CFLAGS=-I.

factorialmake: main.o Factorial.o
     $(CC) -o factorialmake main.o Factorial.o -I.