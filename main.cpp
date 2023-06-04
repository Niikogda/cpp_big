#include <iostream>
#include <windows.h>

using namespace std;

int cube(int number) {
    return number * number * number;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    cout << "¬вед≥ть число: ";
    cin >> number;

    cout << " уб числа " << number << " = " << cube(number) << endl;

    return 0;
}
