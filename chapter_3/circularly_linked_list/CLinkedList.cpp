// CLinkedList.h Implementations
//
//


#include <iostream>
#include "CLinkedList.h"


using namespace std;

CLinkedList::CLinkedList() {
    cursor = NULL;
}

CLinkedList::~CLinkedList() {
    while(!empty()) {
        remove();
    }
}

bool CLinkedList::empty() const {
    return cursor == NULL;
}

const Ele& CLinkedList::front() const {
    return cursor -> next -> ele;
}

const Ele& CLinkedList::back() const {
    return cursor -> ele;
}

void CLinkedList::advance() {
    cursor = cursor -> next;
}

void CLinkedList::add(const Ele& e) {
    CNode* newCNode = new CNode;
    newCNode -> ele = e;
    if (cursor == NULL) {
        newCNode -> next = newCNode;
        cursor = newCNode;
    }
    else {
        newCNode -> next = cursor -> next;
        cursor -> next = newCNode;
    }
}

void CLinkedList::remove() {
    CNode* old = cursor -> next;
    if (old == cursor) {
        cursor = NULL;
    }
    else {
        cursor -> next = old -> next;
    }
    delete old;
}
