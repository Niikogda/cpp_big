#include <iostream>
#include <windows.h>

using namespace std;

int findMax(int arr[], int size)
{
    int maxVal = arr[0];
    for (int i = 1; i < size; i++)
    {
        if (arr[i] > maxVal)
            maxVal = arr[i];
    }
    return maxVal;
}

int findMax(int arr[][3], int rows, int cols)
{
    int maxVal = arr[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (arr[i][j] > maxVal)
                maxVal = arr[i][j];
        }
    }
    return maxVal;
}

int findMax(int arr[][3][2], int dim1, int dim2, int dim3)
{
    int maxVal = arr[0][0][0];
    for (int i = 0; i < dim1; i++)
    {
        for (int j = 0; j < dim2; j++)
        {
            for (int k = 0; k < dim3; k++)
            {
                if (arr[i][j][k] > maxVal)
                    maxVal = arr[i][j][k];
            }
        }
    }
    return maxVal;
}

int findMax(int a, int b)
{
    return (a > b) ? a : b;
}

int findMax(int a, int b, int c)
{
    return findMax(a, findMax(b, c));
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int arr1[] = { 5, 2, 9, 1, 7 };
    int maxVal1 = findMax(arr1, 5);
    cout << "Максимальне значення в одновимірному масиві: " << maxVal1 << endl;

    int arr2[][3] = { {1, 5, 3}, {2, 4, 9}, {6, 7, 8} };
    int maxVal2 = findMax(arr2, 3, 3);
    cout << "Максимальне значення в двовимірному масиві: " << maxVal2 << endl;

    int arr3[][3][2] = {
        {{1, 5}, {3, 2}, {4, 8}},
        {{7, 9}, {6, 2}, {5, 3}},
        {{8, 1}, {4, 6}, {2, 7}}
    };
    int maxVal3 = findMax(arr3, 3, 3, 2);
    cout << "Максимальне значення в тривимірному масиві: " << maxVal3 << endl;

    int a = 5, b = 3, c = 7;
    int maxVal4 = findMax(a, b);
    cout << "Максимальне значення між " << a << " і " << b << ": " << maxVal4 << endl;

    int maxVal5 = findMax(a, b, c);
    cout << "Максимальне значення між " << a << ", " << b << " і " << c << ": " << maxVal5 << endl;

    return 0;
}
