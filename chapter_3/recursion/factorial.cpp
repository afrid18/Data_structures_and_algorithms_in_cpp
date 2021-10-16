// To comiple and run this file just follow the below commands
// Make should be installed and is available in path
// commands
// $ make fact
#include <iostream>

using namespace std;

int factorial(int n);

int main(void) {
    int n; 
    cout << "Enter the number: ";
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
