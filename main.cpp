#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    const int SIZE = 5;
    int numbers[SIZE] = { 1, 2, 3, 4, 5 };
    int sum = 0;

    int* ptr = numbers;

    for (int i = 0; i < SIZE; i++) {
        sum += *ptr;
        ptr++;
    }

    cout << "Сума елементів масиву: " << sum << endl;

    return 0;
}
