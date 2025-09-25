#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // moore's voting algorithm

    int frequency = 0;
    int ans = 0;
    vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
    for (int i = 0; i < nums.size(); i++)
    {
        if (frequency == 0)
        {
            ans = nums[i];      // pick new candidate
        }
        if (ans == nums[i])
        {
            frequency++;        // same as candidate → count up
        }
        else
        {
            frequency--;        // different → cancel one
        }
    }
    cout << ans;

    return 0;
}

/*

Candidate Selection:
Keep a counter and a candidate.
Start with count = 0.
    Traverse the array:
    If count == 0, pick the current element as the new candidate.
    If current element == candidate → increment count.
    Else → decrement count.
At the end, the candidate is the potential majority element.

Verification:
Count the candidate’s actual frequency in the array.
If frequency > n/2 → return it.
Else → no majority element.

Think of it as a vote system:
Each time the candidate meets the same number, it gains support (frequency++).
Each time it meets a different number, it loses support (frequency--).
If support goes to 0, the candidate is dropped, and a new one is chosen.

*/