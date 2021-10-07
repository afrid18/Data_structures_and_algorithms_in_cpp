#include <iostream>
#include "StringLinkedList.h"

using namespace std;


class StringNode {
Private:
    string ele;
    StringNode* next;

    friend class StringLinkedList;
}


