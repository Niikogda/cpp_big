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
    cout << "������ �����: ";
    cin >> number;

    cout << "��� ����� " << number << " = " << cube(number) << endl;

    return 0;
}
