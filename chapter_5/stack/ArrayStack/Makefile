CC=g++-11

flags= -g -Wall

all: ArrayStackTest.o ArrayStack.o ArrayStack

ArrayStackTest.o: ArrayStackTest.cpp
	$(CC) -c ArrayStackTest.cpp


ArrayStack.o: ArrayStack.h ArrayStack.cpp
	$(CC) -c ArrayStack.cpp

ArrayStack: ArrayStackTest.o ArrayStack.o
	$(CC) $(flags) ArrayStackTest.o ArrayStack.o -o ArrayStack

clean:
	rm *.o
