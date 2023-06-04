#include <iostream>
#include <windows.h>

using namespace std;

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int number;
    cout << "¬вед≥ть число: ";
    cin >> number;

    cout << "‘актор≥ал " << number << " = " << factorial(number) << endl;

    return 0;
}
