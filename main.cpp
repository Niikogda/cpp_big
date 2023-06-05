#include <iostream>
#include <windows.h>

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int num;
    int* ptr = &num;

    cout << "Введіть число: ";
    cin >> *ptr;

    if (*ptr > 0) {
        cout << "Число є додатнім" << endl;
    }
    else if (*ptr < 0) {
        cout << "Число є від'ємним" << endl;
    }
    else {
        cout << "Число є нулем" << endl;
    }

    return 0;
}
