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

class List 
{
public:
    Node *head;
    Node *tail;

    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode -> next = head;
            head = newNode;
        }

    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
            return;
        }
        tail -> next = newNode;
        tail = newNode;
    }

    void insert(int val, int pos)       // TC = O(n)
    {
        if (pos < 0)
        {
            cout << "Invalid Position";
            return;
        }
        else if (pos == 0)
        {
            push_front(val);
            return;
        }

        Node *newNode = new Node(val);

        Node *temp = head;

        for (int i = 0; i < pos - 1; i++)
        {
            if (temp == NULL)
            {
                cout << "Invalid Position!\n";
                return;
            }
            temp = temp -> next;
        }
        newNode -> next = temp -> next;
        temp -> next = newNode;
    }

    void printLL()
    {
        Node *temp = head;
        while(temp != NULL)
        {
            cout << temp -> data << "   ";
            temp = temp -> next;
        }
    }

    int search(int key)         // TC = O(n)
    {
        Node *temp = head;
        int idx = 0;

        while (temp != NULL)
        {
            if  (temp -> data == key)
            {
                return idx;
            }
            temp = temp -> next;
            idx++;
        }
        return -1;  // for invalid
    }
};

int main()
{
    List LL;

    LL.push_front(2);
    LL.push_front(1);
    LL.push_back(3);

    LL.printLL();
    cout << endl;

    LL.insert(4, 1);
    LL.printLL();

    cout << endl;
    cout << LL.search(4);

    return 0;
}