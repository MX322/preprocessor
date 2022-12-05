#include <iostream>
#include "function.h"
using namespace std;

void initInt(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}


void showInt(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


void findMinInt(int arr[], int n) 
{
    int min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            swap(arr[i], min);
        }
    }

    cout << "MinInt: " << min << "\n";
}


void findMaxInt(int arr[], int n) 
{
    int max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            swap(arr[i], max);
        }
    }

    cout << "MaxInt: " << max << "\n";
}


void bSortInt(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] > arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}


void changeElInt(int arr[])
{
    int d, val;

    cout << "El if array: " << "\n";

    cin >> d;

    cout << "value fo change: " << "\n";

    cin >> val;

    arr[d + 1] = val;
}

void initFl(float arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = float(((float)rand() / RAND_MAX));;
    }
}


void showFl(float arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


void findMinFl(float arr[], int n) 
{
    float min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            swap(arr[i], min);
        }
    }

    cout << "Min: " << min << "\n";
}


void findMaxFl(float arr[], int n) 
{
    float max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            swap(arr[i], max);
        }
    }

    cout << "Max: " << max << "\n";
}


void bSortFl(float arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}


void changeElFl(float arr[])
{
    int d;
    float val;

    cout << "El if array: " << "\n";

    cin >> d;

    cout << "value fo change: " << "\n";

    cin >> val;

    arr[d + 1] = val;
}


void initCh(char arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        arr[i] = rand() % 100;
    }
}


void showCh(char arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}


void findMinCh(char arr[], int n)
{
    char min = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            swap(arr[i], min);
        }
    }

    cout << "Min: " << min << "\n";
}


void findMaxCh(char arr[], int n)
{
    char max = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > max)
        {
            swap(arr[i], max);
        }
    }

    cout << "Max: " << max << "\n";
}


void bSortCh(char arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                swap(arr[i], arr[j]);
            }
        }
    }
}


void changeElCh(char arr[])
{
    int d;

    char val;

    cout << "El if array: " << "\n";

    cin >> d;

    cout << "value fo change: " << "\n";

    cin >> val;

    arr[d + 1] = val;
}