#include <iostream>
#include <windows.h>

using namespace std;

void reverseArray(int* arr, int size) {
    int* startPtr = arr;
    int* endPtr = arr + size - 1;

    while (startPtr < endPtr) {
        int temp = *startPtr;
        *startPtr = *endPtr;
        *endPtr = temp;

        startPtr++;
        endPtr--;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 5;
    int arr[SIZE] = { 1, 2, 3, 4, 5 };

    cout << "Початковий масив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    reverseArray(arr, SIZE);

    cout << "Змінений масив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
