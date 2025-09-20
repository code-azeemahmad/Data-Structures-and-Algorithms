#include <iostream>
using namespace std;

int main()
{
    int size = 6;
    int arr[size] = {5, 15, 22, 1, -15, 24};

    int largest = arr[0];
    int smallest = arr[0];

    for (int i = 0; i < size; i++)
    {
        if (largest < arr[i])
        {
            largest = arr[i];
        }
        if (smallest > arr[i])
        {
            smallest = arr[i];
        }
    }
    cout << "The largest value in Array: " << largest << endl;
    cout << "The smallest value in Array: " << smallest;

    return 0;
}