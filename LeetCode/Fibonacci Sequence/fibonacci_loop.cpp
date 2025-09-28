#include <iostream>
using namespace std;

int main()
{
    int n = 7;

    int first = 0, second = 1;
    int next;
    for (int i = 1; i <= n;  i++)
    {
        cout << first << "  ";
        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}