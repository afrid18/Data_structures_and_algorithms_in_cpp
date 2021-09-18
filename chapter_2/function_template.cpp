#include <iostream>

using namespace std;
template <typename T>
    T genericMin(T a, T b) {
        if(a > b) return b;
        else if (a < b) return a;
        else return a;
    }

int main(void) {
    int a = 10;
    int b = 12;
    float c = 1.1;
    float d = 11.1;

    cout << genericMin(a, b) << endl;
    cout << genericMin(c, d) << endl;
    cout << genericMin(a, d) << endl;
    return 0;
}
