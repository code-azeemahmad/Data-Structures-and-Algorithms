#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 1, 1};

    int n = arr.size();

    for (int val : arr)
    {
        int frequency = 0;
        for (int ele : arr)
        {
            if (val == ele)
            {
                frequency++;
            }
        }
        if (frequency > n / 2)      // majority element > n / 2 --> element must appear in more than half size of array
        {
            cout << val;
            break;
        }
    }

    return 0;       // time complexity: O(n^2)
}

/*
for (int i = 0; i < n; i++)
    {
        int frequency = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                frequency++;
            }
        }
        if (frequency > (n / 2))
        {
            cout << arr[i];
            break;
        }
    }
*/