#include <iostream>
using namespace std;

class Employee
{
    int id;
    string name;
    float salary;
    
public: 
    Employee(int eid, string ename, float esalary)
    {
        id = eid;
        name = ename;
        salary = esalary;
    }   

    void display()
    {
        cout << "Id of the employee is " << id << endl;
        cout << "Name of the employee is " << name << endl;
        cout << "Salary of the employee is " << salary << endl;
    } 
};

int main()
{
    Employee e[3] = {Employee(1, "drishti", 2500.25), Employee(2, "sahil", 200.23), Employee(3, "bubby", 250.21)};
    for(int i=0; i<3; i++)
    {
        e[i].display();
    }
    return 0;
}