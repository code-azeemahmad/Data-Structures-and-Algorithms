#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int> &arr, int st, int end, int mid)
{
    vector<int> temp;

    int i = st, j = mid + 1;
    while (i <= mid && j <= end)        // compare and store in temp
    {
        if (arr[i] < arr[j])
        {
            temp.push_back(arr[i]);
            i++;
        }
        else 
        {
            temp.push_back(arr[j]);
            j++;
        }
    }
    
    while (i <= mid)        // left half - remaining sorted elements 
    {
        temp.push_back(arr[i]);
        i++;
    }
    while (j <= end)        // right half - remaining sorted elements
    {
        temp.push_back(arr[j]);
        j++;
    }

    for (int idx = 0; idx < temp.size(); idx++)     // copy and paste from temp to arr
    {
        arr[idx + st] = temp[idx];
    }
}

void mergeSort(vector<int> &arr, int st, int end)
{
    if (st < end)
    {
        int mid = st + (end - st) / 2;

        mergeSort(arr, st, mid);        // left half
        mergeSort(arr, mid + 1, end);   // right half 

        merge(arr, st, end, mid);
    }
}

int main()
{
    vector<int> arr = {12, 31, 35, 8, 32, 17};

    mergeSort(arr, 0, arr.size() - 1);

    for (int i : arr)
    {
        cout << i << "  ";
    }
    
    return 0;
}