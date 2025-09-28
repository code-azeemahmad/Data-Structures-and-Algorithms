#include <iostream>
using namespace std;

int sumN(int);

int main()
{
    int n = 4;
    int sum = sumN(n);
    cout << sum;
    
    return 0;
}

int sumN(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n + sumN(n - 1);
}

// time complexity: O(n)
// space complexity: O(n)