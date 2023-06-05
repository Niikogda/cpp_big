#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double num1, num2;
    double* ptr1 = &num1;
    double* ptr2 = &num2;
    char operation;

    cout << "������ ����� �����: ";
    cin >> *ptr1;

    cout << "������ ����� �����: ";
    cin >> *ptr2;

    cout << "������ �������� (+, -, *, /): ";
    cin >> operation;

    double result;

    switch (operation) {
    case '+':
        result = *ptr1 + *ptr2;
        break;
    case '-':
        result = *ptr1 - *ptr2;
        break;
    case '*':
        result = *ptr1 * *ptr2;
        break;
    case '/':
        result = *ptr1 / *ptr2;
        break;
    default:
        cout << "����������� ��������!" << endl;
        return 0;
    }

    cout << "���������: " << result << endl;

    return 0;
}
