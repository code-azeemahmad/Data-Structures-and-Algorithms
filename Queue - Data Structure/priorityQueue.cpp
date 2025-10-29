#include <iostream>
using namespace std;

const int size = 5;
int queue[size] = {};
int priority[size] = {};
int front = -1;
int rear = -1;

void enqueue(int val, int pri)          // // Insert logic: ❌ FIFO, ✅ Insert by priority   
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = val;
        priority[rear] = pri;
    }
    else if (rear == size - 1)
    {
        cout << "Overflow! The queue is full!";
        return;
    }
    else            
    {
        // Find correct position based on priority
        int i;
        for (i = rear; i >= front && priority[i] > pri; i--)
        {
            queue[i + 1] = queue[i];
            priority[i + 1] = priority[i];
        }
        queue[i + 1] = val;
        priority[i + 1] = pri;
        rear++;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        cout << "The queue is empty!";
        return;
    }
    else if (front == rear) // only one element left
    {
        front = rear = -1;
    }
    else 
    {
        front++;
    }
}

int peek()
{
    if (front == -1 && rear == -1)
    {
        cout << "The queue is empty!";
        return -1;
    }
    return queue[front];
}

void print()
{
    int i = front;
    while (i != rear)
    {
        cout << queue[i] << "   ";
        i++;
    }
    cout << queue[rear] << endl;
}

int main()
{
    enqueue(10, 3);
    enqueue(20, 2);
    enqueue(30, 1);
    enqueue(40, 1);
    print();
    dequeue();
    print();
    cout << peek();


    return 0;
}

/*
Smaller priority number = higher priority
(so 1 is processed before 2, and 2 before 3).

enqueue(10, 3);
enqueue(5, 1);
enqueue(8, 2);

🧩 Step 1 — First insertion
enqueue(10, 3);

Queue is empty, so:

queue:    [10]
priority: [3]
front = rear = 0

✅ Nothing special yet.

🧩 Step 2 — Second insertion
enqueue(5, 1);

Now we must insert (5,1) in correct position.

Before insertion:

Index:     0
queue:    [10]
priority: [3]
rear = 0

We run the loop:

for (i = rear; i >= front && priority[i] > pri; i--)

That means:

Step	i	priority[i]	pri (new)	Comparison (priority[i] > pri)	Action
1	    0	    3	     1	         ✅ true	                       Shift right: queue[1] = queue[0]; priority[1] = priority[0]; i--

Now arrays temporarily look like:

queue:    [10, 10]
priority: [3, 3]

Loop stops (since i = -1).
Now insert new element at position i + 1 = 0:

queue[0] = 5;
priority[0] = 1;
rear++;

✅ Final after step 2:

queue:    [5, 10]
priority: [1, 3]

🧩 Step 3 — Third insertion
enqueue(8, 2);

Before:

Index:     0    1
queue:    [5, 10]
priority: [1, 3]
front = 0, rear = 1

Run the loop for (val=8, pri=2):

Step	i	priority[i]	pri (new)	Comparison (priority[i] > pri)?	   Action
1     	1	    3	       2   	            ✅ true	                 Shift right: queue[2] = queue[1]; priority[2] = priority[1]
2     	0	    1	       2   	            ❌ false                	 Stop loop

Now arrays temporarily:

queue:    [5, 10, 10]
priority: [1, 3, 3]


Insert at i + 1 = 1:

queue[1] = 8;
priority[1] = 2;
rear++;


✅ Final arrays:

queue:    [5, 8, 10]
priority: [1, 2, 3]


The for-loop moves backward from rear to front.

It shifts elements one step right while the existing element’s priority is greater than the new one’s.

The insertion point is where this condition becomes false.

This ensures the queue is always sorted by priority (ascending).

*/











