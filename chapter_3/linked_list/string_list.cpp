#include <iostream>
#include "StringLinkedList.h"

using namespace std;

int main(void) {
    StringLinkedList root;
    //cout << "Root node has been created!" << endl;
    //cout << "1. Add front\n2. Remove Front\n3. Print Front Element4. Is Empty\n5. Print whole List" << endl;
    root.addFront("Arshad");
    root.addFront("Asifa");
    root.addFront("Afrid");

    root.printList();
    return 0;
}
