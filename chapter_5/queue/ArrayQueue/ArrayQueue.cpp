#include <iostream>
#include "ArrayQueue.h"

using namespace std;

ArrayQueue::ArrayQueue(int queueSize = DEFAULT_CAPACITY) {
    TOTAL_CAPACITY = queueSize;
    CURRENT_CAPACITY = 0;
    front = -1;
    rear = -1;
    queue = new E[queueSize];
}

ArrayQueue::~ArrayQueue() {delete[] queue;}

int ArrayQueue::size() const {
    return CURRENT_CAPACITY;
}

bool ArrayQueue::empty() const {
    return CURRENT_CAPACITY == 0;
}

const E& ArrayQueue::frontEle() const {
    if (empty()) 
        throw QueueEmpty("Queue is Empty!");
    return queue[front];
}

void ArrayQueue::enqueue(const E& ele) {
    if(empty()) 
        throw QueueEmpty("Queue is Empty!");
    if 

}
