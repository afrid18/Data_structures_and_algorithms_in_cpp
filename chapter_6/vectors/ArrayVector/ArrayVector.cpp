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

