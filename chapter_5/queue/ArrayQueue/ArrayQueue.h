#ifndef ARRAYWUEUE_H
#define ARRAYQUEUE_H

#include "../QueueException.h"

// Change the type to your required type
typedef int E;

enum {DEFAULT_CAPACITY = 100};

class ArrayQueue {
    private:
        E* queue;
        int front;
        int rear;
        int TOTAL_CAPACITY;
        int CURRENT_CAPACITY;

    public:
        ArrayQueue(int queueSize);
        ~ArrayQueue();
        int size() const;
        bool empty() const;
        const E& frontEle() const;
        void dequeue();
        void enqueue(const E& ele);
};

#endif
