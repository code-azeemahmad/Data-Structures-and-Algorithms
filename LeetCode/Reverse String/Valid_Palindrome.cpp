#include <iostream>
#include <cctype>
#include <string>
using namespace std;

bool isValidPalindrome(string str, int n)
{
    int start = 0;  int end = n - 1;        // Two Pointer Approach
    
    while (start < end)
    {
        if (!isalnum(str[start]))
        {
            start++;
            continue;
        }
        if (!isalnum(str[end]))
        {
            end--;
            continue;
        }
        if (str[start] != str[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
}

int main()
{
    string str;
    cout  << "Enter a string: ";
    getline(cin, str);

    for (char &ch : str)
    {
        ch = tolower(ch);
    }

    int n = str.length();

    bool isValid = isValidPalindrome(str, n);

    if (isValid)
    {
        cout << "Valid Palindrome";
    }
    else 
    {
        cout << "Invalid Palindrome";
    }

    return 0;
}

/*

for (char &ch : str)    // &ch means ch is a reference to the actual character in the string.
{
    ch = tolower(ch);   // So when you modify ch, you are directly modifying the character inside str itself, not a copy.
}

*/
/*

int i = 0;   // index tracker
    for (char ch : str)   // ch is a copy
    {
        ch = tolower(ch);     // modifies only the copy
        str[i] = ch;          // assign back into the original string
        i++;
    }

*/

// bool isAlphaNum(char ch)
// {
//     if ((ch >= 0 && ch <= 9) || (ch >= 'a' && ch <= 'z'))
//     {
//         return true;
//     }
//     return false;
// }
