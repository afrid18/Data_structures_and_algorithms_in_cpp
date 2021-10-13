#include <iostream>
#include "DLinkedList.h"

using namespace std;


DLinkedList::DLinkedList() {
    header = new DNode;
    trailer = new DNode;
    header -> right = trailer;
    trailer -> left = header;
}

DLinkedList::~DLinkedList() {
    while(!empty() ) removeFront();
    delete header;
    delete trailer;
}


bool DLinkedList::empty() const {
    return (header -> right == trailer) && (trailer -> left == header);
}

const Ele& DLinkedList::front() const {
    return header -> right -> ele;
}

const Ele& DLinkedList::back() const {
    return trailer -> left -> ele;
}

void DLinkedList::add(DNode* v, const Ele& e) {
    DNode* u = new DNode;
    u -> ele = e;
    u -> right = v;
    u -> left = v -> left;
    v -> left -> right = u;
    v -> left = u;
}

void DLinkedList::addFront(const Ele& e) {
    add(header -> right, e);
}

void DLinkedList::addBack(const Ele& e) {
    add(trailer, e);
}

void DLinkedList::remove(DNode* v) {
    DNode* u = v -> left;
    DNode* w = v -> right;
    u -> right = w;
    w -> left = u;
    delete v;
}

void DLinkedList::removeFront() {
    remove(header -> right);
}

void DLinkedList::removeBack() {
    remove(trailer -> left);
}

void DLinkedList::printList() const {
    DNode* temp = new DNode;
    temp = header -> right;
    if (temp == NULL) {
        cout << "List is empty" << endl;
    }

    while(temp != NULL) {
        cout << temp -> ele << endl;
        temp = temp -> right;
    }
    return;
}

void DLinkedList::rprintList() const {
    DNode* temp = new DNode;
    temp = trailer;

    if (temp == NULL) {
        cout << "List is empty" << endl;
    }

    while(temp != NULL) {
        cout << temp -> ele << endl;
        temp = temp -> left;
    }
}
