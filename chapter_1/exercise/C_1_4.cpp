 //C++ function that takes an STL vector of int values and prints all the odd values in the vector.
 //
#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    vector<int> list;
    list = {1, 212, 14, 51, 235, 43, 13, 62, 4, 31, 345};

    for (int value: list) {
        if (value % 2 == 1) cout << value << endl;
    }
    return EXIT_SUCCESS;
}
