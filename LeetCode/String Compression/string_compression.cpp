#include <iostream>
#include <vector>
using namespace std;

int compress(vector<char>& chars);

int main()
{
    vector<char> chars = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};

    int idx = compress(chars);

    for (char c : chars) {
        cout << c;   // print compressed result
    }
    cout << "\nLength: " << idx << endl;

    return 0;
}

int compress(vector<char>& chars) {
    int n = chars.size();
    int idx = 0;   // write pointer
    
    for (int i = 0; i < n; i++) {
        char ch = chars[i];      // current char
        int count = 0;

        // count how many same chars
        while (i < n && chars[i] == ch) {
            count++;
            i++;
        }

        // write char
        if (count == 1) {
            chars[idx++] = ch;
        } else {
            chars[idx++] = ch;
            string str = to_string(count);
            for (char digit : str) {
                chars[idx++] = digit;
            }
        }

        i--; // because for loop will do i++ again
    }
    chars.resize(idx);
    return idx;
}
