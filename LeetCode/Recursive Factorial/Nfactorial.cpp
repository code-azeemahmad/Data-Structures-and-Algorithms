#include <iostream>
using namespace std;

int factorial(int);
int main()
{
    int n = 4;

    cout << factorial(n);

    return 0;
}

int factorial(int n)
{
    if (n == 0 || n == 1)       // base call
    {
        return 1;
    }
    return n * factorial(n - 1);    // recursive call
}

/*

factorial(n = 4) = 4 * factorial(n = 3)

                       3 * factorial(n = 2)

                           2 * factorial(n = 1)

                               1 * factorial(n = 0) --> 1
 */
