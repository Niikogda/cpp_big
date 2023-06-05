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

    cout << "Введіть перше число: ";
    cin >> *ptr1;

    cout << "Введіть друге число: ";
    cin >> *ptr2;

    cout << "Введіть операцію (+, -, *, /): ";
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
        cout << "Неправильна операція!" << endl;
        return 0;
    }

    cout << "Результат: " << result << endl;

    return 0;
}
