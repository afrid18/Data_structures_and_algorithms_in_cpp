CC=g++-11

flags= -g -wall

Target=string_list

Target: string_list.o StringLinkedList.o
	$(CC) $(flags) string_list.o StringLinkedList.o -o string_list


string_list.o: string_list.cpp
	$(CC) -c string_list.cpp


StringLinkedList.o: StringLinkedList.h StringLinkedList.cpp
	$(CC) -c StringLinkedList.cpp
