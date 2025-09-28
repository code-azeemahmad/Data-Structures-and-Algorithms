#include <iostream>
#include <vector>
using namespace std;

bool isSorted(vector<int> arr, int);

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};

    cout << isSorted(arr, arr.size());

    return 0;
}
bool isSorted(vector<int> arr, int index)
{
    if (index == 0 || index == 1)
    {
        return true;
    }
    return arr[index - 1] >= arr[index - 2] && isSorted(arr, index - 1);        // time,space complexity = O(n)

}

/*

f (index == 0 || index == 1)
n == 1 is given base case because for 1, 1 - 2 = -1, which in invalid

arr[index - 1] >= arr[index - 2] && isSorted(arr, index - 1);
The logic behind comparison is checked first is that is if the last two elements ain't sorted then there is no need to call the function

*/
