#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(0);
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    // vec.push_back(4);

    cout << vec.size() << endl;
    cout << vec.capacity();
    
    return 0;
}

// solving a problem is not important
// how to solve a problem? That logic building behind it is important

                                                