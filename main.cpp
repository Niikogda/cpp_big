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

    cout << "¬вед≥ть початок д≥апазону: ";
    cin >> a;
    cout << "¬вед≥ть к≥нець д≥апазону: ";
    cin >> b;

    int sum = sumInRange(a, b);
    cout << "—ума чисел у д≥апазон≥: " << sum << endl;

    return 0;
}
