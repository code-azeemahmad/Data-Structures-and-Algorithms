#include <iostream>
using namespace std;

class Node // represents one element (node) of the linked list
{
public:
    int data;
    Node *next; // next (the address of the next node)   // Node *next;   pointer to another Node object
    Node(int value)
    {
        data = value;
        next = NULL;
    }
};

class List // represents the entire linked list structure that manages all the nodes
{
    // List itself needs to remember where its nodes start and end.

    Node *head;
    Node *tail; // List has Node* pointers because List is composed of Nodes
public:
    List()
    {
        head = tail = NULL;
    }

    void push_front(int val)
    {
        Node *newNode = new Node(val); // dynamic object - persists after function call finishes        // Stores that returned address in a pointer variable newNode
        if (head == NULL)              // means LL is empty, not even a single node
        {
            head = tail = newNode;
            return;
        }
        else
        {
            newNode->next = head; // *(newNode).next = head;
            head = newNode;
        }
    }

    void push_back(int val)
    {
        Node *newNode = new Node(val);
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        if (head == NULL)
        {
            cout << "LL is Empty!";
            return;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            temp->next = NULL;
            delete temp;
        }
    }

    void pop_back()
    {
        if (head == NULL)
        {
            return;
        }

        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
            return;
        }
        Node *temp = head;
        while (temp->next != tail)
        {
            temp = temp->next;
        }

        delete tail;       // delete last node
        tail = temp;       // update tail
        tail->next = NULL; // mark new end of list
    }

public:
    void printLL()
    {
        Node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "   ";
            temp = temp->next;
        }
    }
};

int main()
{
    List LL;
    LL.push_front(1);
    LL.push_front(2);
    LL.push_front(3);

    LL.push_back(4);
    LL.push_back(5);
    LL.push_back(6);

    LL.printLL();
    cout << endl;
    LL.pop_front();
    LL.printLL();

    cout << endl;
    LL.pop_back();
    LL.printLL();

    return 0;
}