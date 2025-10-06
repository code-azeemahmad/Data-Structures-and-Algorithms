#include <iostream>
using namespace std;
int main()
{
    int arr[] = {4, 1, 5, 2, 3};

    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 1; i < n; i++)     // O(n^2)
    {
        int curr = arr[i];
        int prev = i - 1;
        while (prev >= 0 && arr[prev] > curr)
        {
            arr[prev + 1] = arr[prev];
            prev--;
        }
        arr[prev + 1] = curr;       // placing the current element in its correct position
    }

    for (int i : arr)
    {
        cout << i << "  ";      // to sort in descending order, reverse the condition 
    }

    return 0; 
}


/*
  - Insertion Sort works the same way you might 
    sort playing cards in your hand.
  - You take one card at a time (from the unsorted pile) 
    and insert it into its correct position among the cards 
    you’ve already sorted.

We’ll imagine dividing the array into two parts:
Left part: Sorted section
Right part: Unsorted section

At the start:
The first element (5) is considered 
sorted (a single element is always sorted).
Then, we take one element at a time from 
the unsorted part and insert it into the 
correct place in the sorted part — just 
like placing a card in order in your hand.
*/

/*
Start from the second element (i = 1), since the first is “sorted”.
Store the current element as key = arr[i].
Compare key with elements on its left (arr[j] where j = i - 1).
While arr[j] > key, shift arr[j] one position to the right.
When you find the right spot, insert the key.
*/