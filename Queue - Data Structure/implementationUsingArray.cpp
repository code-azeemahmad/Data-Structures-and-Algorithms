#include <iostream>
using namespace std;

const int n = 5;
int queue[n] = {};
int front = -1;
int rear = -1;

void enqueue(int val)
{
    if (rear == n - 1) // full queue
    {
        cout << "Overflow - Queue is full!";
        return;
    }

    else if (rear == -1 && front == -1) // empty queue
    {
        front = rear = 0;
        queue[rear] = val;
        return;
    }

    else // normal cases
    {
        rear++;
        queue[rear] = val;
    }
}

void dequeue()
{
    if (rear == -1 && front == -1) // empty queue
    {
        cout << "Queue is empty!";
        return;
    }
    else if (front == rear)
    {
        front = rear = -1;
        return;
    }
    else 
    {
        // cout << queue[front];       // print the dequeued element
        queue[front] = 0;           // optional cleanup
        front++;                    // the previous element is left behind in memory.
        // it’s outside the active queue window — and 
        // will never be accessed again until the queue resets.
    }
}

void print()
{
    if (rear == -1 && front == -1)
    {
        cout << "Queue is empty!";
        return;
    }

    cout << "Queue elements: ";
    for (int i = front; i <= rear; i++)
    {
        cout << queue[i] << "   ";
    }
    cout << endl;
}

int peek()
{
    if (rear == -1 && front == -1)
    {
        cout << "Queue is empty!";
        return -1;
    }
    return queue[front];
    
}

int main()
{
    enqueue(4);
    enqueue(1);
    enqueue(2);
    enqueue(3);
    print();
    dequeue();
    print();
    cout << peek() << "\n";
    dequeue();
    cout << peek() << "\n";
    enqueue(5);
    print();
    enqueue(6);
    return 0;
}