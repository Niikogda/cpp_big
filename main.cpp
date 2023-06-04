#include <iostream>
#include <windows.h>

using namespace std;

bool isPositive(int value) {
    return (value > 0);
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int value;
    cout << "¬вед≥ть число: ";
    cin >> value;

    if (isPositive(value)) {
        cout << "«наченн€ " << value << " Ї додатн≥м" << endl;
    }
    else {
        cout << "«наченн€ " << value << " Ї в≥д'Їмним або дор≥внюЇ нулю" << endl;
    }

    return 0;
}
