#include <iostream>
#include "SLinkedList.h"

using namespace std;

int main(void) {
    SLinkedList<int> intList;
    intList.addFront(10);
    intList.addFront(12);
    intList.addFront(13);

    intList.printList();
    return 0;
}
