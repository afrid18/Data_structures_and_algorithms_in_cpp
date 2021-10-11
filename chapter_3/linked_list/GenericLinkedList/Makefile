CC=g++-11

flags= -g -Wall

Target=SLinkedListTest

$(Target): SLinkedList.o SLinkedListTest.o
	$(CC) $(flags) SLinkedList.o SlinkedListTest.o -o $(Target)


SLinnkedList.o: SLinkedList.h SLinkedList.cpp
	$(CC) -c SlinkedList.cpp

SlinkedListTest.o: SLinkedListTest.cpp
	$(CC) -c SLinkedListTest.cpp
