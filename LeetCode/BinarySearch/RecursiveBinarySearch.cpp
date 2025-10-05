#include <iostream>
using namespace std;

int recbinarySearch(int arr[], int target, int start, int end)
{
    if (start <= end)
    {
        int mid = (start + end)/ 2;

        if (target > arr[mid])
        {
            return recbinarySearch(arr, target, mid + 1, end);
        }
        else if (target < arr[mid])
        {
            return recbinarySearch(arr, target, start, mid - 1);
        }
        else
        {
            return mid;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {-1, 0, 3, 4, 5, 9, 12};
    int size = sizeof(arr)/ sizeof(int);
    int target = 9;

    int start = 0, end = size - 1;
    cout << recbinarySearch(arr, target, start, end);

    return 0;
}