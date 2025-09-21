#include <iostream>
using namespace std;

int swapMinMax(int arr[], int);
int main()
{
    int arr[] = {3, 5, 1, 8, 9};
    int size = sizeof(arr)  / sizeof(int);

    swapMinMax(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << "  ";
    }

    return 0;
}

int swapMinMax(int arr[], int size)
{
    int maxIndex = 0;
    int minIndex = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < arr[maxIndex])
        {
            maxIndex = i;
        }
        if (arr[i] > arr[minIndex])
        {
            minIndex = i;
        }
    }

    int temp = arr[maxIndex];
    arr[maxIndex] = arr[minIndex];
    arr[minIndex] = temp;
}