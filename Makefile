CC = g++
FLAGS = -std=c++14 -Wall -g
OBJS = sortingAlgorithm.o #object code not executable file
# OUT_EXE = .exe file name

all: sortingWar
sortingWar: driver.cpp sortingAlgorithm.o
	$(CC)	$(FLAGS)	driver.cpp	-o	sortingWar	$(OBJS)

sortingAlgorithm.o: sortingAlgorithm.cpp sortingAlgorithm.h
	$(CC)	$(FLAGS)	-c	sortingAlgorithm.cpp	-o	sortingAlgorithm.o

clean:
	rm	*.o	sortingWar	sortingWar.scr	sortingWar.tar

tar:
	tar	cf	sortingWar.tar	sortingWar.scr	Makefile	driver.cpp	sortingAlgorithm.h	sortingAlgorithm.cpp numbers.txt
