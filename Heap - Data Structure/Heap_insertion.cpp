#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

void insertHeap(vector<int> &arr, int key)  // TC = O(log n)
{
    // Step 1: Insert key at end
    arr.push_back(key);
    int i = arr.size() - 1;

    // Step 2: Heapify-up
    while (i > 0)
    {
        int parent = (i - 1) / 2;

        if (arr[parent] < arr[i])
        {
            swap(arr[parent], arr[i]);
            i = parent;     // child moves UPWARD in the heap. (HEART of heapify-up)
        }
        else
        {
            break;
        }
    }
}
int main()
{
    vector<int> arr = {70, 50, 40, 45, 35, 39, 16, 10};

    int key = 60;

    insertHeap(arr, key);

    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}

// _____________________________________________________________________________________________________________________________________
// | Term           | Meaning                                                                | Time Complexity                         |
// | -------------- | ---------------------------------------------------------------------- | --------------------------------------- |
// | `maxHeapify`   | Fixes heap property for **one node and its subtree**                   | **O(log n)** worst-case, O(1) best-case |
// | Build Max Heap | Uses `maxHeapify` repeatedly on **all non-leaf nodes** to build a heap | **O(n)**                                |
// | Heap Sort      | Uses `maxHeapify` both for building heap **and** for extracting max    | **O(n log n)**                          |
// |________________|________________________________________________________________________|_________________________________________|
