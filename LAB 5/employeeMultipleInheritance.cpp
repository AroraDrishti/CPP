#include <iostream>
using namespace std;

class Details
{
protected:
    string name;
    int EmpId;

public:
    Details()
    {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter employee id: " << endl;
        cin >> EmpId;
    }
};

class Salary
{
protected:
    float salary;

public:
    Salary()
    {
        cout << "Enter salary: " << endl;
        cin >> salary;
    }
};

class Employee : protected Details, protected Salary
{
protected:
    string designation;

public: 
    Employee()
    {
        cout << "Enter designation: " << endl;
        cin >> designation;
    }

    void display()
    {
        cout << "Name: " << name << endl;
        cout << "Employee Id: " << EmpId << endl;
        cout << "Designation: " << designation << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee e1;
    e1.display();
    return 0;
}