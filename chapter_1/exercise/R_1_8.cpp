#include <iostream>
using namespace std;

bool isMultiple(int num1, int num2) {
    if (num1 % num2 == 0) {
        return true;
    }
    return false;

}

//Program to test the function.
int main() {
    int num1;
    int num2;

    cout << "Enter a whole number: ";
    cin >> num1;

    cout << "Enter another whole number: ";
    cin >> num2;

    bool value = isMultiple(num1, num2);
    cout << value;

    return 0;
}
