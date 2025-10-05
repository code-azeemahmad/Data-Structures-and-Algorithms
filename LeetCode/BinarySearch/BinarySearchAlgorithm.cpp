#include <iostream>
using namespace std;

int binarySearch(int arr[],int size, int target)
{
    int start = 0, end = size - 1;
    while (start <= end)
    {
        int mid = (start + end)/ 2;

        if (target > arr[mid])
        {
            start = mid + 1;
        }
        else if (target < arr[mid])
        {
            end = mid - 1;
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
    int target = 12;

    cout << binarySearch(arr, size, target);

    return 0;
}

/*
Real life implementation - open a dictionary and 
randomly open a page and reject remaining first 
half or second half part of dictionary to search
a word based on that page
*/

/*
Linear search can be applied to any array
iterate through each element and return the index
TC = O(n)
__________________________________________________
Binary Search applies only to sorted arrays
search in first half or second half of array
more optimized - TC = O(log n)

*/