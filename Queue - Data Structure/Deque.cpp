#include <iostream>
#include <deque>

using namespace std;

int main()
{
    deque <int> dq;     // Double ended queue
    dq.push_front(1);
    dq.push_back(2);
    dq.push_back(3);

    while (!dq.empty())     // while loop prints and pops from front to rear — i.e., left to right in the deque.
    {
        cout << dq.front() << "  "; 
        dq.pop_front();
    }
    cout << endl;

    return 0;
}

/*
_______________________________________________________
| Function used             | Direction of processing |
| ------------------------- | ----------------------- |
| `front()` + `pop_front()` | Front → Rear            |
|  `back()` + `pop_back()`  | Rear → Front            |
|___________________________|_________________________|


*/