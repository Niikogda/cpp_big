#include <iostream>
#include <windows.h>

using namespace std;

void copyArray(int* source, int* destination, int size) {
    for (int i = 0; i < size; i++) {
        *(destination + i) = *(source + i);
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 5;
    int sourceArray[SIZE] = { 1, 2, 3, 4, 5 };
    int destinationArray[SIZE];

    int* sourcePtr = sourceArray;
    int* destinationPtr = destinationArray;

    copyArray(sourcePtr, destinationPtr, SIZE);

    cout << "Скопійований масив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(destinationPtr + i) << " ";
    }
    cout << endl;

    return 0;
}
