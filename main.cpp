#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;
    int* ptr = &num;

    cout << "������ �����: ";
    cin >> *ptr;

    if (*ptr > 0) {
        cout << "����� � �������" << endl;
    }
    else if (*ptr < 0) {
        cout << "����� � ��'�����" << endl;
    }
    else {
        cout << "����� � �����" << endl;
    }

    return 0;
}
