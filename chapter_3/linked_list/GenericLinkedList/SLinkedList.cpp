#include "SLinkedList.h"
#include <iostream>

using namespace std;


template <class E>
SLinkedList<E>::SLinkedList()
    :head(NULL) {}

template <class E>
SLinkedList<E>::~SLinkedList() {
    while(!empty()) removeFront();
}


template <class E>
bool SLinkedList::empty() const {
    return head == NULL;
}


template <class E>
const E& SLinkedList::front() const {
    return head -> ele;
}

template <class E>
void SLinkedList::addFront(const E& e) {
    SNode*<E> v = new SNode;
    v -> ele = e;
    v -> next = head;
    head = v;
}


template <class E>
void removeFront() {
    SNode*<E> old = head;
    head = head -> next;
    delete old;
}

template <class E>
void printList() {
    SNode<E>* temp = new SNode;
    temp = head;
    while(temp != NULL) {
        cout << temp -> ele << "\n";
        temp = temp -> next;
    }
}
