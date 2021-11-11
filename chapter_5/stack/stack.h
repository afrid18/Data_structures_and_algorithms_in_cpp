#ifndef STACK_H
#define STACK_H

#include "./../../RuntimeException.h"


class StackEmpty : RunTimeException {  // StackEmpty exception handling class implementation
    public:
        StackEmpty(const string& err) : RunTimeException(err) {}
};

typedef int E;
class Stack {
    public:
 :q
 ls


        int size() const;
        bool empty() const;
        const E& top() const throw(StackEmpty);
        void push(const E& ele);
        void pop() throw(StackEmpty);
};



#endif
