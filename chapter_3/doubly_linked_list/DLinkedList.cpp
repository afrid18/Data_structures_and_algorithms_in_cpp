#include <iostream>
#include "DLinkedList.h"

using namespace std;


DLinkedList::DLinkedList() {
    header = new DNode;
    trailer = new DNode;
    header -> next = trailer;
    trailer -> prev = header;
}

DLinkedList::~DLinkedList() {
    while(!empty() ) removeFront();
    delete header;
    delete trailer;
}


bool DLinkedList::empty() const {
    return (header -> next == trailer);
}

const Ele& DLinkedList::front() const {
    return header -> next -> ele;
}

const Ele& DLinkedList::back() const {
    return trailer -> prev -> ele;
}

void DLinkedList::add(DNode* v, const Ele& e) {
    DNode* u = new DNode;
    u -> ele = e;
    u -> next = v;
    u -> prev = v -> prev;
    v -> prev -> next = v -> prev = u;
}

void DLinkedList::addFront(const Ele& e) {
    add(header -> next, e);
}

void DLinkedList::addBack(const Ele& e) {
    add(trailer, e);
}

void DLinkedList::remove(const Ele& v) {
    DNode* u = v -> prev;
    DNode* w = v -> next;
    u -> next = w;
    w -> prev = u;
    delete v;
}

void DLinkedList::removeFront() {
    remove(header -> next);
}

void DLinkedList::removeBack() {
    remove(trailer -> prev);
}
