#include <iostream>
using namespace std;

class Teacher
{
public:

    // non parameterized
    Teacher() 
    {
        dep = "Computer Science";
    }

    // parameterized constructor
    Teacher(string n, string nDep, string nSub)     
    {
        name = n;
        dep = nDep;
        subject = nSub;
    }

    /*
    constructor overloading (same constructors with 
    different no. of parameters and paramenter datatypes)
    */

public:
    string name;
    string dep;
    string subject;

};

int main()
{
    Teacher t1;     // constructor is called, allocates memory
    Teacher t2("Bilal Ibrahim", "Comp Science", "DSA");
    t1.name = "Azeem";
    // t1.dep = "CS";
    t1.subject = "DSA";

    cout << t1.name << endl;
    cout << t1.dep << endl;
    cout << t2.name << "    " << t2.dep << "    " << t2.subject << endl;
    

    return 0;
}