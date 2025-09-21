#include <iostream>
using namespace std;

void changeArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)      // change in function arr reflects in main function arr
    {
        arr[i] = 2 * arr[i];
    }
    
}

int main()
{
    int size = 3;
    int arr[] = {1, 2, 3};

    changeArray(arr, size);     // name of array is passed (address is passed)

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

// Arrays are always implicitly passed by reference
// Array name is a pointer which stores the address of array
// cout << arr;     // 0x61fe0c