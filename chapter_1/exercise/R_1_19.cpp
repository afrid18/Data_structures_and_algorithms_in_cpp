//Write a short C++ function, isTwoPower, that takes an int i and returns true if and only if i is a power of 2. Do not use multiplication or division, however.
//

#include <iostream>
#include <cmath>
using namespace std;

bool isTwoPower(int num);

int main(void) {
    int num = 0;
    cout << "Enter any positive integer: ";
    cin >> num;

    isTwoPower(num) ? cout << "Yes, It is" : cout << "No it is not!";
    return EXIT_SUCCESS;
}

bool isTwoPower(int num) {
    if (floor(log2(num)) == ceil(log2(num)))
        return true;
    return false;
}
