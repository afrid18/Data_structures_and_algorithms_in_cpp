#include <iostream>
#include "ArrayStack.h"

using namespace std;


int main(void) {
    ArrayStack afrid(10);
    cout << afrid.empty() << endl;
    cout << afrid.size() << endl;
    afrid.push(10);
    cout << afrid.top() << endl;
    afrid.push(11);
    cout << afrid.top() << endl;
    afrid.push(12);
    cout << afrid.top() << endl;
    afrid.push(13);
    cout << afrid.top() << endl;
    afrid.push(14);
    cout << afrid.top() << endl;
    afrid.push(15);
    cout << afrid.top() << endl;
    afrid.push(16);
    cout << afrid.top() << endl;
    afrid.push(17);
    cout << afrid.top() << endl;
    afrid.push(18);
    cout << afrid.top() << endl;
    try {
        afrid.push(19);
    }catch(StackEmpty& e) {
        cout << "Entered here! 1" << endl;
        cerr << e.getMessage() << endl;
    }
    cout << afrid.top() << endl;
    try {
        afrid.push(20);
    }catch(StackEmpty& e) {
        cout << "Entered here! 2" << endl;
        cerr << e.getMessage() << endl;
    }
    cout << afrid.size() << endl;

    if (afrid.size() == 10) {
        cout << "Popping an element to make room for an element :) " << endl;
        cout << "The element being popped is: " << afrid.top() << endl;
        afrid.pop();
    }

    cout << afrid.size() << endl;

    cout << "Now, the top element is: ";

    cout << afrid.top() << endl;
    return 0;
}
