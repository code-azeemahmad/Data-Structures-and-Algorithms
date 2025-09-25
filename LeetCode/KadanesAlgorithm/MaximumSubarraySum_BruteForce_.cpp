#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int maxSum = INT_MIN;       // even if all numbers are negative, the logic still works
    for (int start = 0; start < n; start++)
    {
        int currentSum = 0;
        for (int end = start; end < n; end++)
        {
            currentSum += arr[end];
            maxSum = max(currentSum, maxSum);
        }
    }

    cout << "Max subArray Sum: " << maxSum;

    return 0;
}

// Complexity: O(n²) (because of double loop)