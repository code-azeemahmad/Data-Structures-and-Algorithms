#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    float cgpa;
    
    Student(string name, float cgpa)
    {
        this -> name = name;
        this -> cgpa  = cgpa;
    }

    Student(Student &orgObj)
    {
        this -> name = orgObj.name;
        this -> cgpa = orgObj.cgpa;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s1("Azeem", 3.9);
    Student s2(s1); 

    s1.getInfo();
    s2.getInfo();
    
    return 0;
}

/*
Shallow Copy:
    Default constructors and copy constructors make shallow copy
    Issue Occurs in dynamic memory allocation using "new" keyword
    Statically allocated on stack
*/