#ifndef ARRAYWUEUE_H
#define ARRAYQUEUE_H


// Change the type to your required type
typedef int E;
enum { DEFAULT_CAPACITY = 100 }


class ArrayQueue {
    private:
        E* queue;
        int front = 0;
        int rear = 0;
        int TOTAL_CAPACITY;
        int CURRENT_CAPACITY;

    public:
        ArrayQueue(int queueSize);
        ~ArrayQueue();
        int size() const;
        bool empty() const;
        int front() const;
        void dequeue();
        void enqueue();
};

#endif
