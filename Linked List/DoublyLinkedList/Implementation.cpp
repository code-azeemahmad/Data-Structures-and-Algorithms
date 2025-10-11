#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node(int val)
    {
        data = val;
        next = prev = NULL;
    }
};

class doublyList
{
public:
    Node *head;
    Node *tail;

    doublyList()
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
            newNode->next = head;
            head->prev = newNode;
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
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop_front()
    {
        Node *temp = head;
        head = head->next;
        if (head != NULL)
        {
            head->prev = NULL;
        }
        temp->next = NULL;
        delete temp;
    }

    void pop_back()
    {
        if (head == NULL) // Case 1: Empty list
        {
            cout << "List is empty!\n";
            return;
        }
        if (head == tail) // Case 2: Only one node
        {
            delete head;
            head = tail = NULL;
            return;
        }
        else
        {
            Node *temp = tail;
            tail = tail->prev;
            if (tail != NULL)
            {
                tail -> next = NULL;
            }
            temp -> prev = NULL;
            delete temp;
        }
    }

    void printDLL()
    {
        Node *temp = head;

        while (temp != NULL)
        {
            cout << temp->data << " <->  ";
            temp = temp->next;
        }
        cout << "NULL\n";
    }
};

int main()
{
    doublyList dll;

    dll.push_front(2);
    dll.push_front(1);
    dll.printDLL();

    dll.push_back(3);
    dll.printDLL();

    dll.pop_front();
    dll.printDLL();

    dll.pop_back();
    dll.printDLL();

    return 0;
}