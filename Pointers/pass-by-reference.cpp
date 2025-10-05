#include <iostream>
using namespace std;

// void changeA(int *a)        // pass by reference using pointers
// {
//     *a = 20;
// }

void changeA(int &b)           // pass by reference by alias(references)
{
    b = 20;
/*
    b is a reference to a — it’s an alias, not a copy
    References receive neither a copy of the value nor explicitly the address in code.
    They act as an alias for the original variable
    Any modification through the reference directly affects the original variable.
*/
}
int main()
{
    int a = 10;

    cout << a << endl;
    changeA(a);
    cout << a << endl;

    return 0;
}