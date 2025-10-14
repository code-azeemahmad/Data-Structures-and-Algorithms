#include <iostream>
#include <vector>
#include <list>

using namespace std;

class Stack
{
    list<int> ll;

public:
    void push(int val)      // O(1)
    {
        ll.push_front(val);
    }

    void pop()      // O(1)
    {
        ll.pop_front();
    }

    int top()       // O(1)       
    {
        return ll.front();
    }

    bool isEmpty()
    {
        return ll.size() == 0;
    }

    void print()
    {
        // We make a copy because popping will destroy original stack
        list<int> temp = ll;

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

// #include <list>;
// top element = head of linked list = ll.front();
// push stack = push_front();
// pop stack = pop_front();