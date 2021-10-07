#include <iostream>
#include <string.h>

using namespace std;

void insertionSort(char*, int);

int main(void) {
    char arr[] = "Afrid Hussain";
    int n = strlen(arr);
    insertionSort(arr, n);
    cout << arr << endl;
    return 0;
}

void insertionSort(char arr[], int n) {
    for(int i = 1; i < n; ++i) {
        int j = i - 1;
        char current = arr[i];
        while((j >= 0) && (arr[j] > current)) {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = current;
    }
    return;
}
