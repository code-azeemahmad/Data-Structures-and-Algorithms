#include <iostream>
using namespace std;

int check(int arr[], int n, int size)
{
    bool isFound = false;
    int i;
    for (i = 0; i < size; i++)      // Time complexity of linear search = O(n)
    {
        if (arr[i] == n)
        {
            isFound = true;
            break;
        }
    }
    if (isFound)
    {
        return i;
    }
        return -1;
}
                                    // and of binary search = O(log n)
int main()
{
    int arr[] = {4, 2, 7, 8, 1, 2, 5};
    int n = 8;
    int size = (sizeof(arr) / sizeof(int));

    cout << check(arr, n, size);

    return 0;
}


/*
--> When you pass an array to a function like check(int arr[], int n),
    it decays into a pointer.
--> Inside the function, sizeof(arr) will not give you the full array size.
    It only gives the size of the pointer (usually 4 or 8 bytes depending on your system).
--> So (sizeof(arr) / sizeof(int)) is not the actual length of the array — it
    will almost always give 2 (on 64-bit systems) or 1 (on 32-bit systems).
*/