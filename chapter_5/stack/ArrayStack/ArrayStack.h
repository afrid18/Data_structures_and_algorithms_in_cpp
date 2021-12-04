#ifndef ARRAYSTACK_H
#define ARRAYSTACK_H

typedef int E;
class ArrayStack {
    public:
        ArrayStack(cap);
        int size() const;
        bool empty() const;
        const E& top() const throw(StackEmpty);
        void push(const E& ele);
        void pop() throw(StackEmpty);

    private:
        int TOTAL_CAPACITY;
};




#endif
