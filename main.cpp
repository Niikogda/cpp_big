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
    cout << "������ ����� �����: ";
    cin >> x;
    cout << "������ ����� �����: ";
    cin >> y;

    cout << "�������� �����: " << findMax(x, y) << endl;

    return 0;
}

