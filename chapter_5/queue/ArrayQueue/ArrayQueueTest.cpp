#include <iostream>
#include "ArrayQueue.h"

using namespace std;

int main(void) {

    cout << "Creating a new queue: " << endl;

    ArrayQueue queue1 = ArrayQueue(10);

    queue1.enqueue(1);
    cout << queue1.frontEle() << endl;
    queue1.dequeue();
    queue1.enqueue(2);
    cout << queue1.frontEle() << endl;
    queue1.dequeue();
    try {
        queue1.dequeue();
    }catch(QueueEmpty e) {
        cerr << e.getMessage() << endl;
    }
    return 0;
}
