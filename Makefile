# Setting up g++ compiler
CC=g++

# Setting up compilation flags
CFLAGS= -Wall

all:
		$(CC) $(CFLAGS) main.cpp -o ledz

clean:
		rm ledz

