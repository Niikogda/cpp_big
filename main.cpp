#include <iostream>
#include <windows.h>

using namespace std;

void drawRectangle(int height, int width) {
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < width; j++) {
            cout << "* ";
        }
        cout << endl;
    }
}

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int height, width;
    cout << "Введіть висоту прямокутника: ";
    cin >> height;
    cout << "Введіть ширину прямокутника: ";
    cin >> width;

    cout << "Прямокутник:\n";
    drawRectangle(height, width);

    return 0;
}
