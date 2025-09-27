#include <iostream>
using namespace std;
bool checkInclusion(string, string);
bool isFreqSame(int, int);

int main()
{   
    string s1 = "ab";
    string s2 = "eidbaooo";

    bool check = checkInclusion(s1, s2);
    
    if (check)
    {
        cout << "Permutation found.";
    }
    else
    {
        cout << "Permutation not found!";
    }
    return 0;
}

bool isFreqSame(int frequency[], int windowFreq[])
{
    for (int i = 0; i < 26; i++)
    {
        if (frequency[i] != windowFreq[i])
        {
            return false;
        }
    }
    return true;
}

bool checkInclusion(string s1, string s2)
{
    int frequency[26] = {0};
    for (int i = 0; i < s1.length(); i++)
    {
        // int idx = s1[i] - 'a';       frequency[idx]++;
        frequency[s1[i] - 'a']++;
        // frequency[0] = frequency[0] + 1;
    }

    int windowSize = s1.length();

    for (int i = 0; i < s2.length(); i++)
    {
        int windIdx = 0, idx = i;
        int windowFreq[26] = {0};
        
        while (windIdx < windowSize && idx < s2.length())
        {
            windowFreq[s2[idx] - 'a']++;
            windIdx++;
            idx++;
        }
        if (isFreqSame(frequency, windowFreq))      // found
        {
            return true;
        }
    }
    return false;
}


/*

Optimal Approach (Sliding Window + Frequency Array)
    Use frequency counting of characters (since only lowercase letters → array of size 26 works).
Steps:
    --> Count frequency of each char in s1.
    --> Use a sliding window of size len(s1) over s2.
    --> Keep frequency of current window.
    --> If frequency matches s1’s frequency → return true.
    --> Slide window (remove one char, add next char) until end.

Time: O(n) (linear).
Space: O(1) (fixed 26 arrays).

*/

/*

    index:   0  1  2  3  ... 25
    letter:  a  b  c  d      z
    count:   2  2  1  0  ... 0

    frequency[s1[i] - 'a']++;
    It increments the count at that index

    In C++ characters are stored as ASCII values.

    'a' = 97
    'b' = 98
    'c' = 99
    …
    'z' = 122

    So:
    'a' - 'a' = 97 - 97 = 0
    'b' - 'a' = 98 - 97 = 1
    'c' - 'a' = 99 - 97 = 2
    …
    'z' - 'a' = 122 - 97 = 25
*/