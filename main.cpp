#include <iostream>
#include <windows.h>

using namespace std;

bool isPositive(int value) {
    return (value > 0);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int value;
    cout << "������ �����: ";
    cin >> value;

    if (isPositive(value)) {
        cout << "�������� " << value << " � �������" << endl;
    }
    else {
        cout << "�������� " << value << " � ��'����� ��� ������� ����" << endl;
    }

    return 0;
}
