#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

// Class templates

template <typename T>
class BasicVector {
    public:
        BasicVector(int capc = 10);
        T& operator[] (int i) {
            return a[i];
        }
    private:
        T* a;
        int capacity;
};

template <typename T>
BasicVector<T>::BasicVector(int capc) {
    capacity = capc;
    a = new T[capacity];
}

int main(void) {
    BasicVector<int> iv(5);
    iv[1] = 1;
    iv[2] = 2;
    iv[3] = 3;
    iv[4] = 4;
    iv[5] = 5;
    cout << iv[0] << "\t"
        << iv[1] << "\t"
        << iv[2] << "\t"
        << iv[3] << "\t"
        << iv[4] << endl;
}
