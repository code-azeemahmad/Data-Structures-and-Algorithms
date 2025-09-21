// Vector:
//     Array like structure
//     Dynamic in nature, not fixed size

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    vector<int> vec;

    for (int i : vec)       // the iterator i in for each loop interates the stored value on each index
    {
        cout << i << endl;
    }

    cout << "Size: " << vec.size() << endl;

    vec.push_back(25);      // adds value on last index
    vec.push_back(35);
    vec.push_back(45);
    cout << "Size after push_back(): " << vec.size() << endl;
    
    vec.pop_back();     // deletes value stored on last index
    cout << "Size after pop_back(): " << vec.size() << endl;

    cout << vec.front() << endl;        // returns first value
    cout << vec.back() << endl;         // returns last value
    cout << vec.at(0);                  // access a specific value

    return 0;
}

// vector<int> vec;
// vector<int> vec = {1, 2, 3};
// vector<int> vec(3, 0);   --> where 3 = size and 0 = indexvalue



/*
    vector<int> vec;

    cout << vec[0];     // segmentation fault
*/

/*
Vector Functions
• Size
• push_back
• pop_back
• front
• back
• at
*/