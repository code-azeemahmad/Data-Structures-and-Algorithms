#include <iostream>
#include <vector>
#include <climits>   // for INT_MIN
using namespace std;

// Kadane's Algorithm
int maxSubArray(vector<int>& nums) {
    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int value : nums) {
        currentSum += value;                 // add current element
        maxSum = max(currentSum, maxSum);    // update best sum so far

        if (currentSum < 0)                  // reset if sum goes negative
            currentSum = 0;
    }

    return maxSum;
}

int main() {
    // Example 1
    vector<int> nums1 = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << "Max Subarray Sum (Example 1): " << maxSubArray(nums1) << endl;

    // Example 2
    vector<int> nums2 = {1, 2, 3, 4, 5};
    cout << "Max Subarray Sum (Example 2): " << maxSubArray(nums2) << endl;

    // Example 3 (all negative numbers)
    vector<int> nums3 = {-5, -2, -8, -1, -6};
    cout << "Max Subarray Sum (Example 3): " << maxSubArray(nums3) << endl;

    return 0;
}
