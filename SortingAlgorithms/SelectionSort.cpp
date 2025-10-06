#include <iostream>
using namespace std;

int main()
{
    int arr[] = {4, 1, 5, 2, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n - 1; i++)         // O(n^2)
    {
        int smallestIdx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[smallestIdx])
            {
                smallestIdx = j;
            }
        }
        swap(arr[i], arr[smallestIdx]); 
    }

    for (int i : arr)
    {
        cout << i << "  ";
    }

    return 0;   
}