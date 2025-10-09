#include <iostream>
using namespace std;

class Teacher
{
public:
    string name;
    string dep;
    string subject;

    Teacher() 
    {
        dep = "Computer Science";
    }

    Teacher(string name, string dep, string sub)        //  need is to name parameters as same as of objects    
    {
        this -> name = name;
        this -> dep = dep;
        this -> subject = subject;
    }

    /*
    this -> pointer points to the memory allocated to object on heap
    Because parameter names (name, dep, subject) are the same as class data members.
    If we didn’t use this, the compiler would get confused:
    */
};

int main()
{
    Teacher t1; 
    Teacher t2("Bilal Ibrahim", "Comp Science", "DSA");
    t1.name = "Azeem";
    t1.subject = "DSA";

    cout << t1.name << endl;
    cout << t1.dep << endl;
    cout << t2.name << "    " << t2.dep << "    " << t2.subject << endl;

    return 0;
}