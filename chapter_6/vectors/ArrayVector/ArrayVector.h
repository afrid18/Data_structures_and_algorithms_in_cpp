#ifndef ARRAYVECTOR_H
#define ARRAYVECTOR_H

#include "../VectorException.h"

template <typename E>
class ArrayVector {
    public:
        ArrayVector();
        int size() const;
        bool empty() const;
        E& operator[](int i);
        E& at(int i);
        void erase(int i);
        void insert(int i, const E& ele);
        void reserve(int i);


    private:
        int capacity;
        int n;
        E* A;

};

#endif
