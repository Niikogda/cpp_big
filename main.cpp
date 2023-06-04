#include <iostream>
#include <windows.h>

using namespace std;

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int x, y;
    cout << "Введіть перше число: ";
    cin >> x;
    cout << "Введіть друге число: ";
    cin >> y;

    cout << "Найбільше число: " << findMax(x, y) << endl;

    return 0;
}

