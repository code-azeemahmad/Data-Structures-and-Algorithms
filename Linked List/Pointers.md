## 🟩 1️⃣ Head pointer (in List class)

- Belongs to the List, not to any node.
- Points to the first node.
- It’s how we know where the list starts.
- Used in traversal (temp = head; while(temp != NULL)).
- So head is not inside any node — it just points to the first node.

## 🟦 2️⃣ Next pointer (in Node class)

- Belongs to each node.
- It tells where the next node is located in memory.
- Last node’s next is NULL (marks the end).
- So, inside the first node, next points to the second node.

## 🟨 3️⃣ Tail pointer (in List class)

- Also belongs to the List, not the node.
- Points to the last node.
- Used when we want to insert quickly at the end (push_back).
- The last node itself does not know it’s the last; we only know because its next == NULL.


### Comparison
```
____________________________________________________________
| Pointer | Belongs To          | Purpose                  |
| ------- | ------------------- | ------------------------ |
| `head`  | List (not any node) | Points to the first node |
| `next`  | Inside each Node    | Points to the next node  |
| `tail`  | List (not any node) | Points to the last node  |
|_________|_____________________|__________________________|
```

### Summary Diagram
```
List:
       head
        │
        ▼
       [ data=1 | next ] → [ data=2 | next ] → [ data=3 | NULL ]
                                                    ▲
                                                    │
                                                  tail
```


Let’s break down both lines — push_front() and push_back() — step by step with diagrams and reasoning 

### 🧩 First — Recall the structure

Each node in a singly linked list looks like:
```
[ data | next ]
```

and your List class has:
```
Node *head;
Node *tail;
```

## 🟢 Case 1: push_front()  
    When we insert at the front, we want the new node to become the new head.
```
newNode->next = head;
head = newNode;
```
Let’s see what happens in memory.

🧠 Step-by-step Visualization
Suppose our list initially looks like:
```
head → [10 | NULL]
tail → [10 | NULL]
```

Now we call:

push_front(5);

Step 1️⃣: Create a new node
```
Node* newNode = new Node(5);
```

In memory:
```
newNode → [5 | NULL]
head → [10 | NULL]
tail → [10 | NULL]
```
Step 2️⃣: Link new node to current head
```
newNode->next = head;
```

That means:
“Make newNode’s next point to whatever head is currently pointing to.”

Now memory becomes:
```
newNode → [5 | *-]──┐
                     │
head → [10 | NULL] ←┘
tail → [10 | NULL]
```

Now:

newNode->next points to the old head (node containing 10)

Step 3️⃣: Move head pointer to new node
```
head = newNode;
```

Now head points to the new node, so the list becomes:
```
head → [5 | *-] → [10 | NULL]
tail → [10 | NULL]
```

✅ Result: The new node (5) is inserted at the front.

🔁 Next insertion

If we call push_front(2) again:

Before:
```
head → [5 | *-] → [10 | NULL]
tail → [10 | NULL]
```

After:
```
head → [2 | *-] → [5 | *-] → [10 | NULL]
tail → [10 | NULL]
```
## 🔵 Case 2: push_back()

    When we insert at the end, we want the new node to be attached after the current tail.

```
tail->next = newNode;
tail = newNode;
```
🧠 Step-by-step Visualization

Suppose our list is:
```
head → [5 | *-] → [10 | NULL]
tail → [10 | NULL]
```

Now we call:

push_back(15);

Step 1️⃣: Create a new node
```
Node* newNode = new Node(15);

newNode → [15 | NULL]
```
Step 2️⃣: Link current tail’s next to this new node
tail->next = newNode;


Now we connect old tail (10) to new node (15):
```
head → [5 | *-] → [10 | *-] → [15 | NULL]
tail → [10 | *-]
```
Step 3️⃣: Move tail pointer to new node
```
tail = newNode;
```

Now:
```
head → [5 | *-] → [10 | *-] → [15 | NULL]
tail → [15 | NULL]
```

✅ Result: The new node (15) is inserted at the end.

💡 Intuitive Analogy

- Think of your linked list like a chain:
- Each link knows only about the next link (via next).
- head holds the first link.
- tail holds the last link.

When you do:
```
newNode->next = head; head = newNode;
```
➜ You hook the new link in front of the chain.
```
tail->next = newNode; tail = newNode;
```
➜ You attach the new link to the end of the chain.

🧩 Summary Table
```
_____________________________________________________________________________________________________________
| Operation        | Line                    | Meaning                          | Effect                    |
| ---------------- | ----------------------- | -------------------------------- | ------------------------- |
| **push_front()** | `newNode->next = head;` | Connect new node to current head | Prepares link to old list |
|                  | `head = newNode;`       | Move head to new node            | New node becomes first    |
| **push_back()**  | `tail->next = newNode;` | Connect old tail to new node     | Extends list              |
|                  | `tail = newNode;`       | Move tail to new node            | New node becomes last     |
|__________________|_________________________|__________________________________|___________________________|
```