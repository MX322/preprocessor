#include <iostream>
#include "function.h"
#define N 10
using namespace std;

int main() {

    #define INTEGER

    setlocale(0, "UKR");

    int arr[N];

    cout << "Массив #1:" << "\n";

    init(arr, N);
    show(arr, N);

    cout << "\n\n";

    cout << "Отсортированный масив: " << "\n";

    bSort(arr, N);
    show(arr, N);

    cout << "\n\n";

    findMin(arr, N);

    cout << "\n";

    findMaxInt(arr, N);

    cout << "\n";

    changeElInt(arr);

#undef INTEGER

#define FLOAT
#include "function.h"

    cout << "\n";

    float arr1[N];

    cout << "Массив #2:" << "\n";

    init(arr1, N);
    show(arr1, N);

    cout << "\n\n";

    cout << "Отсортированный масив: " << "\n";

    bSort(arr1, N);
    show(arr1, N);

    cout << "\n\n";

    findMin(arr1, N);

    cout << "\n";

    findMax(arr1, N);

    cout << "\n";

    changeEl(arr1);

#undef FLOAT

#define CHAR
#include "function.h"

    cout << "\n";

    char arr2[N];

    cout << "Массив #3:" << "\n";

    init(arr2, N);
    show(arr2, N);

    cout << "\n\n";

    cout << "Отсортированный масив: " << "\n";

    bSort(arr2, N);
    show(arr2, N);

    cout << "\n\n";

    findMin(arr2, N);

    cout << "\n";

    findMax(arr2, N);

    cout << "\n";

    changeEl(arr2);

#undef CHAR

    system("pause");
    return 0;
}