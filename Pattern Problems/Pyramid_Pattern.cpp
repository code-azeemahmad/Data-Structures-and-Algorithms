#include <iostream>
using namespace std;

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        // spaces: n - i - 1
        for  (int j = 0; j < n - i -1; j++)
        {
            cout << " ";
        }
        // first triangle numbers:  n + 1
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        // second triangle numbers
        for (int j = i; j > 0; j--)
        {
            cout << j;
        }
        cout << endl;
    }

    return 0;
}


/*            
            _  _  _  1 |                - spaces (n - i - 1 times) -->  "  "
            _  _  1  2 | 1              - nums1 j = (1 to i + 1)  --> cout << j
            _  1  2  3 | 2  1           - nums2 j (i to 1) --> cout << j (backwards)
            1  2  3  4 | 3  2  1


*/









