CC      = g++
CFLAGS  = -Wall -O3 -std=c++0x -lgmp
RM      = rm -f

default: multiply

multiply: main.cpp
	$(CC) main.cpp -o main.o $(CFLAGS)
