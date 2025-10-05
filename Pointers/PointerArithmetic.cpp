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

    int arr[] = {1, 2, 3, 4, 5};
    cout << *arr << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;
    cout << *(arr + 3) << endl;
    cout << *(arr + 4) << endl;

    // pointer addition is not allowed
    int *p1;
    int *p2 = p1 + 2;
    cout << p2 - p1 << endl;        // 2 = no. of blocks of type(int) --> 2 integars(4 bytes)

    cout << (p2 > p1) << endl;        // pointers can be compared
    return 0;
}

/*
ptr++ --> adds memory of 4 bytes = one integar for int variable to a pointer
0x61fe14 --> +4 bytes --> 0x61fe18
*/

/*
array memory address are contiguous
        1   2   3   4   5
       100 104 108 112 116
*/