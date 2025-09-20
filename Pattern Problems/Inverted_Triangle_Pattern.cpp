#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i; j++)
        {
            cout << i + 1;
        }
        cout << endl;
    }

    return 0;
}

//                              Space    Number
// i = 1       1  1  1  1         0         4     =  n - i             
// i = 2       _  2  2  2         1         3     =  n - i    
// i = 3       _  _  3  3         2         2     =  n - i
// i = 4       _  _  _  4         3         1     =  n - i


