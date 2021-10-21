#ifndef STACK_H
#define STACK_H


class StackEmpty : RunTimeException {  // StackEmpty exception handling class implementation
    public:
        StackEmpty(const string& err) : RunTimeException(err) {}
};

template <typename E>
class Stack {
    public:
        int size() const;
        bool empty() const;
        const E& top() const throw(StackEmpty);
        void push(const E& ele);
        void pop() throw(StackEmpty);
}



#endif
