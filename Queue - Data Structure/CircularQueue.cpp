#include <iostream>
using namespace std;

int const capacity = 5;
int queue[capacity] = {};
int front = -1;
int rear = -1;

void enqueue(int val)
{
    if ((rear + 1) % capacity == front)
    {
        cout << "Overflow! The queue is full!" << endl;
        return;
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = val;
    }
    else
    {
        rear = (rear + 1) % capacity;
        queue[rear] = val;
    }
}

void dequeue()
{
    if (rear == -1 && front == -1)
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
        front = (front + 1) % capacity;
    }
}

int peek()
{
    if (rear == -1 && front == -1)
    {
        cout << "Queue is empty!";
        return -1;
    }
    else
    {
        return queue[front];
    }
}

void print()
{
    int i = front;
    if (rear == -1 && front == -1)
    {
        cout << "Queue is empty!";
        return;
    }
    else 
    {
        cout << "Queue elements are: ";
        int i = front;
        while (i != rear)
        {
            cout << queue[i] << "  ";
            i = (i + 1) % capacity;
        }
        cout << queue[rear] << endl;
    }
    
}

int main()
{
    enqueue(2);
    enqueue(-1);
    enqueue(5);
    enqueue(6);
    enqueue(7);
    print();
    dequeue();
    print();
    dequeue();
    print();
    enqueue(0);
    enqueue(10);
    print();
    enqueue(11);
    cout << peek();

    return 0;
}

/*
(rear + 1) % capacity == front - this is helpful only when rear is at last index
of arr. Otherwise, is has same effect as rear++
*/