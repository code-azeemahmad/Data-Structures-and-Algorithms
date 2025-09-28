#include <iostream>
using namespace std;

int fibo(int);

int main()
{
    int n = 6;
    cout << fibo(n);
    return 0;
}

int fibo(int n)
{
    if (n == 0 || n == 1) return n;
    return fibo(n - 1) +  fibo(n - 2);
}