#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    float *cgpaPtr;
    
    Student(string name, float cgpa)
    {
        this -> name = name;
        cgpaPtr = new float;        // allocate new memory to pointer
        *cgpaPtr = cgpa;            // dereferencing cpgaPtr to store cgpa
    }

    Student(Student &orgObj)
    {
        this -> name = orgObj.name;
        this -> cgpaPtr = orgObj.cgpaPtr;       // just copying the pointer address
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main()
{
    Student s1("Azeem", 3.2);
    Student s2(s1);             // Both s1 and s2 now point to the same memory location on the heap.

    s1.getInfo();
    *(s2.cgpaPtr) = 3.9;
    s2.getInfo();
    
    return 0;
}

/*
Shallow Copy:
    Both s1 and s2 share the same pointer (cgpaPtr).
    There’s only one copy of the actual data in memory.
    Any change through one object affects the other.
*/