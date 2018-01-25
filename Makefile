CC=g++
CFLAGS=-pedantic -Wall -std=c++11
SOURCES= wstawianie.cpp

all:
	$(CC) $(CFLAGS) $(SOURCES)
