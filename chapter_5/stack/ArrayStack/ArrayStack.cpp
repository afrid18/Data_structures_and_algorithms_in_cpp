#include <iostream>

#include "ArrayStack.h"

using namespace std;

ArrayStack::ArrayStack(int stackSize = DEFAULT_CAPACITY) {
    stack = new E[stackSize];
    TOTAL_CAPACITY = stackSize;
    CURRENT_CAPACITY = 0;
    t = -1;
}

ArrayStack::~ArrayStack() {
    delete[] stack;
}

int ArrayStack::size() const {
    return CURRENT_CAPACITY;
}

bool ArrayStack::empty() const {
    return CURRENT_CAPACITY == 0;
}

const E& ArrayStack::top() const {
    if( empty() )
        throw(StackEmpty("Stack is empty!"));
    return stack[t];
}

void ArrayStack::push(const E& ele) {
    if(CURRENT_CAPACITY == TOTAL_CAPACITY)
        throw(StackEmpty("Stack is Full!"));
    else {
        ++t;
        stack[t] = ele;
        ++CURRENT_CAPACITY;
    }
    return;
}

void ArrayStack::pop() {
    if (empty())
        throw (StackEmpty("Stack is Empty!"));

    --t;
    --CURRENT_CAPACITY;
}




