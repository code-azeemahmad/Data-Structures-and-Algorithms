#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    float *cgpaPtr;

    Student(string name, float cgpa)
    {
        this->name = name;
        cgpaPtr = new float;            // allocate new memory on the heap
        *cgpaPtr = cgpa;                // store value at that memory
    }

    Student(Student &orgObj)
    {
        this->name = orgObj.name;       // copy string (deep by default)
        cgpaPtr = new float;            // allocate new memory on heap
        *cgpaPtr = *orgObj.cgpaPtr;     // copy the VALUE, not the pointer address
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }

    // Add a destructor to clean up heap memory safely:
    
};

int main()
{
    Student s1("Azeem", 3.2);
    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 3.9;
    s2.getInfo();

    s2.name = "Bilal";
    s2.getInfo();

    return 0;
}
