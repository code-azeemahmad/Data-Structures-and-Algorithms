#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<int> arr = {0, 0, 1, 1, 2, 2, 2, 2, 2, 3};
    int n = arr.size();

    sort(arr.begin(), arr.end());

    int frequency = 1;
    int ans = arr[0];

    for (int i = 1; i < n; i++)
    {
        if (arr[i] == arr[i - 1])
        {
            frequency++;
        }
        else  
        {
            frequency = 1;
            ans = arr[i];       // always prints something (whatever ans holds at the end)
        }
        if (frequency >= n / 2)
        {
            ans = arr[i];
            break;
        }

    }

    cout << ans;

    return 0;       // Time complexity = O(n log n) (due to sorting)
}

/*

for, {0, 0, 1, 1, 2, 2, 2, 2}

n = 8 
frequency = 4 !> n / 2

ans = 2 (last updated in the loop)

But since the condition frequency > n/2 was never satisfied, the code just prints the last ans.
 */