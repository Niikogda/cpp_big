#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1, num2;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    cout << "������ ����� �����: ";
    cin >> *ptr1;

    cout << "������ ����� �����: ";
    cin >> *ptr2;

    if (*ptr1 > *ptr2) {
        cout << "�������� �����: " << *ptr1 << endl;
    }
    else {
        cout << "�������� �����: " << *ptr2 << endl;
    }

    return 0;
}
