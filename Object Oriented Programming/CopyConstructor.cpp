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

    Teacher(string name, string dep, string subject)  
    {
        this -> name = name;
        this -> dep = dep;
        this -> subject = subject;
    }

    // custom copy constructor
    Teacher(Teacher &orgObj)
    {
        cout << "I am a Custom Copy Constructor\n"; 
        this -> name = orgObj.name;
        this -> dep = orgObj.dep;
        this -> subject = orgObj.subject;
    }

    void getInfo()
    {
        cout << name << "   " << dep << "   " << subject << endl;
    }
};

int main()
{
    Teacher t1; 
    Teacher t2("Bilal Ibrahim", "Comp Science", "DSA");
//  Teacher t3(t2);     // invoke default copy constructor
    Teacher t3(t2);     // invoke custom copy constructor

    t1.name = "Azeem";
    t1.subject = "DSA";

    t1.getInfo();
    t2.getInfo();
    t3.getInfo();

    return 0;
}