/*
Array

Notes:
- same type
- contiguous in memory + linear


Array of 4 integers (int):

 Index:   [0]     [1]     [2]     [3]
 Value:   48       4       1       1

Memory layout (contiguous):

 Address: 100    104    108    112    116   (bytes)
          +------+-----+-----+-----+-----+
          |  48  |  4  |  1  |  1  |     |           4 + 4 + 4 + 4 + 4 = 20
          +------+-----+-----+-----+-----+
            int    int   int   int   int


   --> Stored in one variable (array)
   --> Each `int` takes 4 bytes
*/

#include <iostream>
using namespace std;

int main()
{
    int marks[5] = {67, 89, 93, 79, 98};

    int sizeMemory = sizeof(marks);                       // total bytes
    int sizeArray = sizeof(marks) / sizeof(int);    // number of elements

    cout << sizeMemory << endl;
    cout << sizeArray << endl;

    cout << endl;
    for (int i = 0;  i < sizeArray; i++)
    {
        cout << marks[i] << endl;
    }

    return 0;
}