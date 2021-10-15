CC=g++-11

flags= -g -Wall

Target=CLinkedListTest

$(Target): CLinkedList.o CLinkedListTest.o
	$(CC) $(flags) CLinkedList.o CLinkedListTest.o -o $(Target)

CLinkedList.o: CLinkedList.h CLinkedList.cpp
	$(CC) -c CLinkedList.cpp

CLinkedListTest.o : CLinkedList.h CLinkedListTest.cpp
	$(CC) -c CLinkedListTest.cpp
