#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1, num2;
    int* ptr1 = &num1;
    int* ptr2 = &num2;

    cout << "Введіть перше число: ";
    cin >> *ptr1;

    cout << "Введіть друге число: ";
    cin >> *ptr2;

    if (*ptr1 > *ptr2) {
        cout << "Найбільше число: " << *ptr1 << endl;
    }
    else {
        cout << "Найбільше число: " << *ptr2 << endl;
    }

    return 0;
}
