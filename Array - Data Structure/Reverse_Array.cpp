#include <iostream>
using namespace std;        // Reverse an Array using 2 Pointer Approach

void reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{ 
    int arr[] = {5, 4, 3, 2, 1};
    int size = sizeof(arr) / sizeof(int);

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)  
    {
        cout << arr[i] << "  ";
    }

    return 0;
}

/*

            arr = {5, 4, 3, 2, 1}
size = 5
start = 0
end = 4

Indexes:   0   1   2   3   4
Array:    [5] [4] [3] [2] [1]
           ^               ^
         start            end
Condition: start < end → 0 < 4 ✅ → Swap arr[0] & arr[4]

Indexes:   0   1   2   3   4
Array:    [1] [4] [3] [2] [5]
               ^       ^
             start    end
Now start = 1, end = 3
Condition: 1 < 3 ✅ → Swap arr[1] & arr[3]

Indexes:   0   1   2   3   4
Array:    [1] [2] [3] [4] [5]
                   ^   
                 start 
                  end
Now start = 2, end = 2
Condition: 2 < 2 ❌ → Loop stops

Why start < end?
--> It ensures swaps happen only when start is before end.
--> When they meet in the middle, the array is already reversed → loop stops.
--> No extra swaps, no infinite loop.

*/