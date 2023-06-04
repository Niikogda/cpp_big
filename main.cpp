#include <iostream>
#include <windows.h>

using namespace std;

int sumInRange(int a, int b) {
    int sum = 0;

    for (int i = a + 1; i < b; i++) {
        sum += i;
    }

    return sum;
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num1, num2;

    cout << "¬вед≥ть перше число: ";
    cin >> num1;
    cout << "¬вед≥ть друге число: ";
    cin >> num2;

    int result = sumInRange(num1, num2);

    cout << "—ума чисел у д≥апазон≥: " << result << endl;

    return 0;
}
