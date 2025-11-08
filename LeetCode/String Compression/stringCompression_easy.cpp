#include <iostream>
#include <string>
using namespace std;

string compressString(const string &s)
{
    string compressed = "";
    int n = s.length();
    int i = 0;

    while (i < n)
    {
        char current = s[i];
        int count = 0;

        // Count consecutive occurrences
        while (i < n && s[i] == current)
        {
            count++;
            i++;
        }

        // Append character and count
        compressed += current + to_string(count);
    }

    return compressed;
}

int main()
{
    string s = "aabbccc";
    cout << compressString(s); // Output: a2b2c3
    return 0;
}
