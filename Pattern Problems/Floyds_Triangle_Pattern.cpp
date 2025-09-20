#include <iostream>
using namespace std;        
                            //  Floyd's Triangle Pattern
int main()
{
    int n = 4;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j > 0; j--)
        {
            cout << num;
            num++;
        }
        cout << endl;
    }

    return 0;
}

// 1
// 23
// 456
// 78910


// int main()
// {
//     int n = 4;
//     int num = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         char ch = 'A' + num;
//         for (int j = i; j > 0; j--)
//         {
//             cout << ch;
//             num++;
//             ch++;
//         }
//         cout << endl;
//     }

//     return 0;
// }

// A
// BC
// DEF
// GHIJ