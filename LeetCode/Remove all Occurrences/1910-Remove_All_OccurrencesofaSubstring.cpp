#include <iostream>
#include <string>
using namespace std;
                        // remove all occurences
int main()
{
    string s = "daabcbaabcbc";
    string part = "abc";

    while (s.length() > 0 && s.find(part) < s.length())     // we will iterate our loop untill our string length > 0 and our substring exists in string
    // s.length() > 0: ensures the string isn’t empty
    {
        s = s.erase(s.find(part), part.length());
    }
    cout << s;
    

    return 0;
}

// string.find(substring)       // returns starting index of substring if found
// returns string::npos (which is a huge number, like 18446744073709551615) if not found
// string.erase(start, end)      // deletes substring
// start = string.find(substring), end = substring.length()

