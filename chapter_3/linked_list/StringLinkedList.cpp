// StringLinkedList class and member definitions
//
//
#include "StringLinkedList.h"
using namespace std;

StringLinkedList::StringLinkedList()
    :head(NULL) {}

StringLinkedList::~StringLinkedList() {
    while (!empty()) {
        removeFront();
    }
}

bool StringLinkedList::empty() const {
    return head == NULL;
}

const string& StringLinkedList::front() const {
    return head -> ele;
}


void StringLinkedList::addFront(const string& e) {
    StringNode* v = new StringNode;
    v -> ele = e;
    v -> next = head;
    head = v;
}

void StringLinkedList::removeFront() {
    StringNode* old = head;
    head = old -> next;
    delete old;
}

