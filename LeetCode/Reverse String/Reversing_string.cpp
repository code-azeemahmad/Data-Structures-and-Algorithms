#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    string str = "azeem";
    int n = str.length();

    int start = 0; int end = n - 1;     // two pointer approach
    while (start < end)
    {
        swap(str[start], str[end]);     // swap(str[start++], str[end--]);
        start++;
        end--;
    }
    cout << str;

    // reverse(str.begin(), str.end());     // algorithm header file
    // cout << str;

    return 0;
}

/*

#include <algorithm>

reverse(str.begin(), str.end());     // return iterators

*/