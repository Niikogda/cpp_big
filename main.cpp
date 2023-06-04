#include <iostream>
#include <windows.h>

using namespace std;

bool isPerfectNumber(int number) {
    int sum = 0;

    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return (sum == number);
}

void findPerfectNumbers(int start, int end) {
    cout << "Досконалі числа у діапазоні " << start << " - " << end << ":\n";

    for (int i = start; i <= end; i++) {
        if (isPerfectNumber(i)) {
            cout << i << endl;
        }
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int start, end;

    cout << "Введіть початок діапазону: ";
    cin >> start;
    cout << "Введіть кінець діапазону: ";
    cin >> end;

    findPerfectNumbers(start, end);

    return 0;
}
