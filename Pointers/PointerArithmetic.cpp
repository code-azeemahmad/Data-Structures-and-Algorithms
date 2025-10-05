#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;
    cout << ptr << endl;
    *ptr++;                 // increment or decrement
    cout << ptr << endl;

    ptr = ptr + 2;          // store 8 bytes more
    
    cout << ptr << endl;

    return 0;
}

/*
ptr++ --> adds memory of 4 bytes = one integar for int variable to a pointer
0x61fe14 --> +4 bytes --> 0x61fe18
*/