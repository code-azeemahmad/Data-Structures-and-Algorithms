#include <iostream>
#include <vector>
#include <stack>

using namespace std;

int main()
{
    stack<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    stack<int> temp = s;

    while (!temp.empty())
    {
        cout << temp.top() << "  ";
        temp.pop();
    }
    cout << endl;

    temp = s;

    temp.pop();

    cout << temp.top() << endl;

    while (!temp.empty())
    {
        cout << temp.top() << "  ";
        temp.pop();
    }
    cout << endl;

    return 0;
}

// #include <stack>;
// stack<int> s;
/*s.push(value);
  s.pop();
  s.top();*/