#include <iostream>
#include <windows.h>

using namespace std;

void printStars(int n)
{
    if (n > 0)
    {
        cout << "* ";
        printStars(n - 1);
    }
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int n;

    cout << "������ ������� ����: ";
    cin >> n;

    printStars(n);
    cout << endl;

    return 0;
}
