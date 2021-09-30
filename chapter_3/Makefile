# G++ as the c++ compilers
CC = g++-11

# C++ compiler flags 
# -g 		-> This flag adds debugging information to the executable file
#  -Wall	-> This flag turns on the most compiler warnings
#
CFLAGS = -g -Wall

# The build target
#TARGET = GameEntryTest

#all: $(TARGET).o GameEntry.o Score.o
#    $(CC) $(FLAGS) -o $(TARGET) GameEntry.o Score.o $(TARGET).o

#$(TARGET).o : $(TARGET).cpp GameEntry.h Scores.h
#    $(CC) $(FLAGS) -c $(TARGET).cpp 

#GameEntry.o: GameEntry.cpp GameEntry.h
#    $(CC) -c GameEntry


#clean:
#    $(RM) $(TARGET)
#
#

GameEntryTest: GameEntryTest.o GameEntry.o Score.o
	g++ GameEntryTest.o GameEntry.o Score.o -o GameEntryTest


GameEntryTest.o: GameEntryTest.cpp GameEntry.h Scores.h
	g++ -c GameEntryTest.cpp

GameEntry.o: GameEntry.cpp GameEntry.h
	g++ -c GameEntry.cpp

Scores.o: Scores.cpp Scores.h
	g++ -c Scores.cpp
