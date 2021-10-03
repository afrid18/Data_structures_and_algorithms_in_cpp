#include <iostream>

using namespace std;

int main(void) {
    int m, n;
    cin >> "Enter number of rows: " >> n;
    cin >> "Enter number of coloumns" >> m;
    int** M = new int*[n];
    for (int i = 0; i < n; ++i) 
        M[i] = new int[m];

    cout << "Matrix created: " << endl;
    return 0;
}

