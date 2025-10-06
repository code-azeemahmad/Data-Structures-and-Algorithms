#include <iostream>
#include <algorithm>
using namespace std;

void bubbleSort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)     // n
    {
        bool isSwapped = false;
        for (int j = 0; j < n - i - 1; j++)     // n*n = n^2
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                bool isSwapped = true;
            }
        }
        if (!isSwapped)
        {
            return;
        }
    }
}

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << "  ";
    }
}

int main()
{
    int arr[] = {4, 1, 5, 2, 3};

    int n = sizeof(arr)/ sizeof(arr[0]);

    bubbleSort(arr, n);
    printArr(arr, n);

    // TC = O(n^2)
}

/*
if outer loop runs 1 times, inner loop runs n times
if outer loop runs n times, inner loop runs n*n times
*/

/*
Bubble sort continues to iterate even on sorted arrays,
so to make it optimized, use a bool variable isSwap
*/

/*

int arr[] = {4, 1, 5, 2, 3};

    int n = sizeof(arr)/ sizeof(arr[0]);

for (int i = 0; i < n - 1; i++)     // n
    {
        for (int j = 0; j < n - i - 1; j++)     // n*n = n^2
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }

for (int i : arr)
    {
        cout << i << "  ";
    }
    return 0;
*/