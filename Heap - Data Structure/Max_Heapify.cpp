#include <iostream>
#include <algorithm>

using namespace std;

void maxHeapify(int arr[], int n, int i)    // TC = O(log n)
{
    int largest = i;       // Initialize largest as root
    int left = 2 * i + 1;  // left = 2*i + 1
    int right = 2 * i + 2; // right = 2*i + 2

    // If left child is larger than root
    if (left < n && arr[left] > arr[largest])
        largest = left;

    // If right child is larger than largest so far
    if (right < n && arr[right] > arr[largest])
        largest = right;

    // If largest is not root
    if (largest != i)
    {
        swap(arr[i], arr[largest]);

        // Recursively heapify the affected sub-tree
        maxHeapify(arr, n, largest);
    }
}

int main()
{
    int arr[7] = {15, 5, 20, 1, 17, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    int lastLeafNode = (n / 2) - 1;

    for (int i = lastLeafNode; i >= 0; i--)     // Tc = O(n)
    {
        maxHeapify(arr, n, i);
    }
    cout << "Max-Heap array: ";
    for (int i = 0; i < n; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}