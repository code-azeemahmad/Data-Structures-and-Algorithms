#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

class Queue
{
public:
    Node *head;
    Node *tail;
    Queue()
    {
        head = tail = NULL;
    }

    void push(int val)          // TC = O(1)
    {
        Node *newNode = new Node(val);
        if (isEmpty())
        {
            head = tail = newNode;
        }
        else if (!isEmpty())
        {
            tail -> next = newNode;
            tail = newNode;
        }
    }

    void pop()          // TC = O(1)
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!";
            return;
        }
        Node *temp = head;
        head = head -> next;
        delete temp;
    }

    int front()         // TC = O(1)
    {
        if (isEmpty())
        {
            cout << "Queue is Empty!";
            return -1;
        }
        return head -> data;
    }

    bool isEmpty()
    {
        return head == NULL;
    }

};

int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);

    while (!q.isEmpty())
    {
        cout << q.front() << "  ";
        q.pop();
    }
    cout << endl;

    return 0;
}