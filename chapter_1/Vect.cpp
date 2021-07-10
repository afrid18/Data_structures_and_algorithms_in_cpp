class Vect {
    public:
        Vect(int n);
        ~Vect();
        Vect(const Vect& original);
        Vect& operator=(const Vect& original);
    private:
        int* data;
        int size;
};

Vect::Vect(int n) {
     size = n;
     data = new int[n];
}

Vect::~Vect() {
    delete [] data;
}

Vect::Vect(const Vect& original) {
    size = original.size;
    data = new int[size];

    for (int i = 0; i < size; ++i) {
        data[i] = original.data[i];
    }
}

Vect& Vect::operator=(const Vect& original) {
    if (this != &original) {
        delete [] data;
        size = original.size;
        data = new int[size];
        for (int i = 0; i < size; ++i) {
            data[i] = original.data[i];
        }
    }
    return *this;
}


#include <bits/stdc++.h>

using namespace std;

int main(void) {
    Vect a(100);
    Vect b = a;
    Vect c;
    c = a;
    return 0;
}

