#include <iostream>
using namespace std;

int main()
{
    string str = "Azeem Ahmad";     // contiguous manner  
    cout << str << endl;
    str = "Azeem Nadeem";
    cout << str << endl;    // dynamic in nature, can be modified at runtime

    string str1 = "Azeem";
    string str2 = "Code - ";
    string str3 = str2 + str1;      // concatenation
    cout << str3 << endl;
    
    string s1 = "Azeem";
    string s2 = "Azeem";
    cout << (s1 == s2) << endl;     // matching two strings

    string t1 = "azeem";
    string t2 = "nadeem";
    cout << (t2 < t1) << endl;      // matching size of strings

    cout << str.length() << endl;

    string strin;
    cout << "Enter any string: ";
    getline(cin, strin);

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
    }

    return 0;
}

// char arrays are static, can't be modified
// string concatenation is very difficult in char arrays
// to check two strings are equal or not, is also very difficult

