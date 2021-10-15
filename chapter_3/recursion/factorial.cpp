#include <iostream>

using namespace std;

int factorial(int n);

int main(void) {
    int n; 
    cin >> n;
    cout << "The factorial of " << n << " is " << factorial(n) << endl;
    return 0;
}


int factorial(int n) {
    if (n < 2) {
        return 1;
    }
    else
        return n * factorial(n - 1);
}
