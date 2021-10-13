CC=g++-11

flags= -g -Wall

Target=DLinkedListTest

$(Target): DLinkedList.o DLinkedListTest.o
	$(CC) $(flags) DLinkedList.o DLinkedListTest.o -o DLinkedListTest


DLinkedList.o : DLinkedList.h DLinkedList.cpp
	$(CC) -c DLinkedList.cpp

DLinkedListTest.o : DLinkedList.h DLinkedListTest.cpp
	$(CC) -c DLinkedListTest.cpp
