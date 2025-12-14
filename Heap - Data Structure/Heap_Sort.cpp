#include <iostream>
using namespace std;

void maxHeapify(int arr[], int n, int i)    // TC = O(n)
{
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i)
    {
        swap(arr[i], arr[largest]);
        maxHeapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n)     // TC = O(n log n)
{
    // 1️⃣ Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        maxHeapify(arr, n, i);

    // 2️⃣ Extract max one by one
    for (int i = n - 1; i >= 1; i--)
    {
        swap(arr[0], arr[i]);  // Move max to end
        maxHeapify(arr, i, 0); // Heapify reduced heap
        // arr[0] is always the root of the heap.
    }
}

int main()
{
    int arr[] = {15, 5, 20, 1, 17, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);

    heapSort(arr, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
