CC=g++-11

flags= -g -Wall

all: ArrayQueueTest.o ArrayQueue.o ArrayQueue

ArrayQueueTest.o: ArrayQueueTest.cpp
	$(CC) -c ArrayQueueTest.cpp


ArrayQueue.o: ArrayQueue.h ArrayQueue.cpp
	$(CC) -c ArrayQueue.cpp

ArrayQueue: ArrayQueueTest.o ArrayQueue.o
	$(CC) $(flags) ArrayQueueTest.o ArrayQueue.o -o ArrayQueue

clean:
	rm *.o
