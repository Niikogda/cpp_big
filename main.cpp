#include <iostream>
#include <windows.h>

using namespace std;

double power(double base, int exponent) {
    double result = 1.0;

    for (int i = 0; i < exponent; i++) {
        result *= base;
    }

    return result;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double base;
    int exponent;

    cout << "������ ������ �������: ";
    cin >> base;
    cout << "������ �������� �������: ";
    cin >> exponent;

    double result = power(base, exponent);

    cout << "���������: " << result << endl;

    return 0;
}
