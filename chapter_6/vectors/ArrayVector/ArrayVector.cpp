#include <iostream>
#include "ArrayVector.h"


using namespace std;

ArrayVector::ArrayVector() {
    CAPACITY = 4;
    int CURRENT_ELEMENTS = 0;
    E* a = new E[capacity];
}

int ArrayVector::size() const {
    return CURRENT_ELEMENTS;
}

bool ArrayVector::empty() const {
    return CURRENT_ELEMENTS == 0;
}

E& ArrayVector::operator[](int i) {
    return a[i];
}

void ArrayVector::erase(int i) {
    if (i > size()) throw(IndexOutOfBonds);
    for(int head = i; head < size(); ++head) {
        a[head] = a[++head];
    }
}



