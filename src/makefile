#author : 	Alexandre St-Onge
#date 	: 	23/05/2013
#modified : 06/06/2013

# Main makefile for the MindWriter program.

CC = g++
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
RM = rm -f
TARGET = MindWriter

all: $(TARGET)

%.o: %.cpp
	$(CC) -c $< -o $@

#%.o: %.hpp
#	$(CC) -c $< -o $@

MindWriter: main.o
	# Use the standard library path of SFML
	$(CC) -o MindWriter main.o -L./Libs -lFlashingLetter -L/usr/local/lib $(LIBS)

clean:
	$(RM) MindWriter *.o


