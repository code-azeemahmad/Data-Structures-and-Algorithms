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

class circularList
{
public:
    Node *head;
    Node *tail;
    circularList()
    {
        head = tail = NULL;
    }

    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);
        if (tail == NULL)
        {
            head = tail = newNode;
            tail->next = head;
        }
        else
        {
            newNode->next = head;
            head = newNode;
            tail->next = head;
        }
    }

    void insertAtTail(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = tail = newNode;
            tail->next = newNode;
        }
        else
        {
            newNode->next = head;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void deleteAtHead()
    {
        if (head == NULL) // empty LL
        {
            return;
        }
        else if (head == tail) // single node
        {
            delete head;
            head = tail = NULL;
        }
        else // two or more nodes
        {
            Node *temp = head;
            head = head->next;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void deleteAtTail()
    {
        if (head == NULL)
            return;
        else if (head == tail)
        {
            delete head;
            head = tail = NULL;
        }
        else
        {
            Node *temp = tail;
            Node *prev = head;
            while (prev->next != tail)
            {
                prev = prev->next;
            }
            tail = prev;
            tail->next = head;
            temp->next = NULL;
            delete temp;
        }
    }

    void printCLL()
    {
        if (head == NULL)
            return;
        cout << head->data << " -> ";

        Node *temp = head->next;

        while (temp != head) // these is no NULL
        {
            cout << temp->data << " -> ";
            temp = temp->next; // don't forget to update temp
        }

        // cout << head -> data << endl;
        cout << temp->data << endl;
    }
};

int main()
{
    circularList cLL;

    cLL.insertAtHead(1);
    cLL.insertAtHead(2);
    cLL.insertAtHead(3);

    cLL.printCLL();

    cLL.insertAtTail(4);
    cLL.insertAtTail(5);
    cLL.insertAtTail(6);

    cLL.printCLL();

    cLL.deleteAtHead();
    cLL.deleteAtHead();

    cLL.printCLL();

    cLL.deleteAtTail();
    cLL.deleteAtTail();

    cLL.printCLL();

    return 0;
}