#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *p1 = &a;
    int **parPtr = &p1;

    cout << *(&a) << endl;
    cout << *(p1) << endl;
    cout << **(parPtr);
    return 0;
}
/*
dereference --> value at address
*/



