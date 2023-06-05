#include <iostream>
#include <windows.h>

using namespace std;

int sumInRange(int a, int b)
{
    if (a > b)
        return 0;
    else
        return a + sumInRange(a + 1, b);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b;

    cout << "������ ������� ��������: ";
    cin >> a;
    cout << "������ ����� ��������: ";
    cin >> b;

    int sum = sumInRange(a, b);
    cout << "���� ����� � �������: " << sum << endl;

    return 0;
}
