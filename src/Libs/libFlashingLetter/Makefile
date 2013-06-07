#author : 	Julien Aymong
#date 	: 	05/06/2013
#modified : 06/06/2013

#Makefile for the FlashingLetter library.

CC = g++
AR = ar
#LIBS = -lsfml-graphics -lsfml-window -lsfml-system
RM = rm -f
#TARGET = FlashingLetter

all:
	$(CC) -Wall -c FlashingLetter.cpp
	$(AR) -rcs ../libFlashingLetter.a FlashingLetter.o

clean:
	$(RM) FlashingLetter *.o