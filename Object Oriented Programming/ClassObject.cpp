#include <iostream>
using namespace std;

class Teacher
{
    // properties (attributes)
    private: 
        double salary;      // hiding data (encapsulation)
    public:
        string name;
        string dep;
        string subject;
        

    // methods (member functions)
    void changeDep(int newDep)
    {
        dep = newDep;
    }

    double getSalary()
    {
        return salary;
    }
    void setSalary(double s)
    {
        salary = s;
    }

};

int main()
{
    Teacher t1;
    t1.name = "Azeem";
    t1.dep = "CS";
    t1.subject = "DSA";
    t1.setSalary(123126);

    cout << t1.name << endl;
    cout << t1.getSalary();

    return 0;
}