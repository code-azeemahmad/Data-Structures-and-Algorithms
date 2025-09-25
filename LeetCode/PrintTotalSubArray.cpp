#include <iostream>
#include <vector>
using namespace std;
                            // brute force method
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5};
    int size = nums.size();

    for (int start = 0; start < size; start++)
    {
        for (int end = start; end < size; end++)
        {
            for (int i = start; i <= end; i++)
            {
                cout << nums[i];
            }
            cout << "  ";
        }
        cout << endl;
    }

    return 0;
}