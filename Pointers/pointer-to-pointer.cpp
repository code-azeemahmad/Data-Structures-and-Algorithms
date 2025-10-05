#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p1 = &a;
    int **p2 = &p1;

    cout << &p1 << endl;
    cout << p2;

    return 0;
}


/*

& - bitwise operation
&& - AND Operator
& - Address of a variable

*/