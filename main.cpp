#include <iostream>
#include <windows.h>

using namespace std;

bool isLuckyNumber(int number) {
    int sum1 = 0;
    int sum2 = 0;
    int digitCount = 0;
    int digit;

    while (number > 0) {
        digit = number % 10;

        if (digitCount < 3) {
            sum1 += digit;
        }
        else {
            sum2 += digit;
        }

        digitCount++;
        number /= 10;
    }

    return (sum1 == sum2);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;

    cout << "¬вед≥ть шестизначне число: ";
    cin >> number;

    if (isLuckyNumber(number)) {
        cout << "÷е щасливе число!" << endl;
    }
    else {
        cout << "÷е не щасливе число." << endl;
    }

    return 0;
}
