#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    cout << *arr << endl;

    int a = 10;
    // arr = &a;        // error

    return 0;
}

/*
array name is a pointer
pointer that points to the address of element at 0th index
array name pointer is a constant pointer
can't assign other variable address to array pointer address
*/

/*
strings and arrays are mutable in c++
list are mutable but tuples are immutable in python
strings are immutable in python
*/