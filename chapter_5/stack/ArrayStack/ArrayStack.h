#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

#include "../stackEmptyException.h"

enum {DEFAULT_CAPACITY = 100};

typedef int E;
class ArrayStack {
    public:
        int size() const;
        bool empty() const;
        const E& top() const;
        void push(const E& ele);
        void pop();
        ArrayStack(int stackSize);
        ~ArrayStack();

    private:
        int CURRENT_CAPACITY;
        int TOTAL_CAPACITY;
        E* stack;
        int t;
};




#endif
