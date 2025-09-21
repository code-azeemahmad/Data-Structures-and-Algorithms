#include <iostream>
using namespace std;

int sum(int arr[], int);
int product(int arr[], int);
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(int);
    cout << "The sum of all array elements is: " << sum(arr, size) << endl;
    cout << "The product of all array elements is: " << product(arr, size);

    return 0;
}

int sum(int arr[], int size)
{
    int s = 0;
    for (int i = 0; i < size; i++)
    {
        s += arr[i];
    }
    return s;
}
int product(int arr[], int size)
{
    int p = 1;
    for (int i = 0; i < size; i++)
    {
        p *= arr[i];
    }
    return p;
}