#include <iostream>
#include <windows.h>

using namespace std;

const int ARRAY_SIZE = 100;

int findMinSumPosition(int arr[], int start)
{
    if (start > ARRAY_SIZE - 10)
        return -1;

    int minSumPos = findMinSumPosition(arr, start + 1);
    int currentSum = 0;
    for (int i = start; i < start + 10; i++)
        currentSum += arr[i];

    if (minSumPos == -1 || currentSum < minSumPos)
        return start;
    else
        return minSumPos;
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr[ARRAY_SIZE];
    for (int i = 0; i < ARRAY_SIZE; i++)
        arr[i] = rand() % 100;

    int minSumPos = findMinSumPosition(arr, 0);
    cout << "Початкова позиція послідовності з мінімальною сумою: " << minSumPos << endl;

    return 0;
}
