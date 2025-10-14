#include <iostream>
#include <vector>
using namespace std;

class Stack
{
    vector<int> vec;

public:
    void push(int val)
    {
        vec.push_back(val);
    }

    void pop()
    {
        vec.pop_back();
    }

    int top()
    {
        return vec[vec.size() - 1];
    }

    bool isEmpty()
    {
        return vec.size() == 0;
    }

    void print()
    {
        // We make a copy because popping will destroy original stack
        vector<int> temp = vec;

        while (!temp.empty())
        {
            cout << temp.back() << "  ";
            temp.pop_back();
        }
        cout << endl;
    }
};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.print();

    s.pop();

    s.print();

    cout << s.top();



    return 0;
}

// top element = last index of vector
// push stack = push_back();
// pop stack = pop_back();