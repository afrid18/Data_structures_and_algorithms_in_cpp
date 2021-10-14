#include <iostream>
#include "CLinkedList.h"

using namespace std;

int main(void) {
    CLinkedList clist;
    // Is Clist empty() ?
    cout << "Is list empty: " << (clist.empty() ? "True" : "False") << endl;

    // adding elements in list
    clist.add("Afrid");
    clist.add("Bhavana");
    clist.add("AB");

    //print first and last elements
    cout << clist.front() << endl;
    cout << clist.back() << endl;

    // Is list empty?
    cout << "Is list empty: " << (clist.empty() ? "True" : "False") << endl;

    return 0;
}
