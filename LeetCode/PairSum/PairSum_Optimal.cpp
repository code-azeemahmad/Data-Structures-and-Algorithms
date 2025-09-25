#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 7, 11, 15};

    int n = sizeof(arr) / sizeof(int);
    int target = 26;


    int i = 0, j = n - 1;       // Two Pointer Approach

    while (i < j)       // i can't cross j, and i != j because pair is needed
    {
        int pairSum = arr[i] + arr[j];
        if (pairSum > target)
        {
            j--;
        }
        else if (pairSum < target)
        {
            i++;
        }
        else if (pairSum == target)
        {
            cout << "Pair Sum is: " << i << "  "<< j;
            break;
        }
    }
    return 0;
}

/*

 Loop Working

The loop runs until i < j.

First Iteration

i = 0, j = 3 → arr[i] = 2, arr[j] = 15

pairSum = 2 + 15 = 17

17 < 26 → sum too small → move i++
(Now i = 1, j = 3)

Second Iteration

i = 1, j = 3 → arr[i] = 7, arr[j] = 15

pairSum = 7 + 15 = 22

22 < 26 → still too small → move i++
(Now i = 2, j = 3)

Third Iteration

i = 2, j = 3 → arr[i] = 11, arr[j] = 15

pairSum = 11 + 15 = 26

Match found 

→ Print:

Pair Sum is: 2  3


(2 and 3 are indices of the numbers 11 and 15)

→ break ends the loop.

*/