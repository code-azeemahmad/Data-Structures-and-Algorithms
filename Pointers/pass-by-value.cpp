#include <iostream>
using namespace std;

int changeA(int a)
{
    return a = 20;
}
int main()
{
    int a = 10;

    cout << a << endl;
    cout << changeA(a) << endl;
    cout << a;

    return 0;
}