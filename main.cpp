#include <iostream>
#include <windows.h>

using namespace std;

void reverseCopyArray(int* source, int* destination, int size) {
    int* sourcePtr = source + size - 1;
    int* destinationPtr = destination;

    for (int i = 0; i < size; i++) {
        *(destinationPtr + i) = *(sourcePtr - i);
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

    reverseCopyArray(sourcePtr, destinationPtr, SIZE);

    cout << "Масив-джерело: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(sourcePtr + i) << " ";
    }
    cout << endl;

    cout << "Зворотній скопійований масив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(destinationPtr + i) << " ";
    }
    cout << endl;

    return 0;
}
