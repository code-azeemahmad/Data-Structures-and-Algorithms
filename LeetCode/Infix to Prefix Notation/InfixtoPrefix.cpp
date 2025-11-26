#include <bits/stdc++.h>
using namespace std;

int precedence(char op)
{
    if (op == '^')
        return 3;
    if (op == '*' || op == '/')
        return 2;
    if (op == '+' || op == '-')
        return 1;
    return -1;
}

string infixToPrefix(string s)
{
    // Step 1: Reverse and swap brackets
    reverse(s.begin(), s.end());
    for (auto &ch : s)
    {
        if (ch == '(')
            ch = ')';
        else if (ch == ')')
            ch = '(';
    }

    stack<char> st;
    string result = "";

    // Step 2: Convert to postfix of reversed expression
    for (char c : s)
    {
        if (isalnum(c))
            result += c;
        else if (c == '(')
            st.push(c);
        else if (c == ')')
        {
            while (!st.empty() && st.top() != '(')
            {
                result += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        { // operator
            while (!st.empty() && precedence(st.top()) > precedence(c))
            {
                result += st.top();
                st.pop();
            }
            st.push(c);
        }
    }

    while (!st.empty())
    {
        result += st.top();
        st.pop();
    }

    // Step 3: Reverse result to get prefix
    reverse(result.begin(), result.end());
    return result;
}

int main()
{
    string infix = "(A+B)*(C-D)";
    cout << "Infix:   " << infix << endl;
    cout << "Prefix:  " << infixToPrefix(infix) << endl;
}
