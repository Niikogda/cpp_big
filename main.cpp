#include <iostream>
#include <windows.h>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i <= number / 2; i++) {
        if (number % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    cout << "������ �����: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " � ������� ������" << endl;
    }
    else {
        cout << number << " �� � ������� ������" << endl;
    }

    return 0;
}
