#include <iostream>
using namespace std;

void printNums(int n)
{
    if (n == 0)     return;     // base case usually written first
    cout << n << "  ";
    printNums(n - 1);           // recursive call
}

int main()
{
    int n = 5;

    printNums(n);

    return 0;
}



/*
Recursion: 
        is when a function calls itself directly or indirectly until it reaches a base case (stopping condition).

Every recursive function has two main parts:
~~~> Base Case → condition where recursion stops.
~~~> Recursive Case → function calls itself with smaller input.

*/