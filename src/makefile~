#author : 	Alexandre St-Onge
#date 	: 	23/05/2013
CC = g++
LIBS = -lsfml-graphics -lsfml-window -lsfml-system
RM = rm -f
TARGET = MindWriter

all: $(TARGET)

%.o: %.cpp
	$(CC) -c $< -o $@

%.o: %.hpp
	$(CC) -c $< -o $@

MindWriter: main.o
	$(CC) -o MindWriter main.o $(LIBS)

clean:
	$(RM) MindWriter *.o


