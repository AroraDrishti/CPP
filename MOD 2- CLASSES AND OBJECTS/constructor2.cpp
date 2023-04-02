// Create a class Employee with appropriate data members and functions. The class should also have a data member document_verified and function verification. This function should initialize the value of verification to “completed and genuine”. Create appropriate objects and call the functions. Make use of public and private access specifier wherever required.

#include <iostream>
using namespace std;

class Employee
{
    int Id;
    string name;
    float salary;
    string document_verified;

public:
    void input()
    {
        cout << "Enter Employee Id: ";
        cin >> Id;
        cout << "Enter Employee Name: ";
        cin >> name;
        cout << "Enter Employee Salary: ";
        cin >> salary;
    }

    Employee(void)
    {
        document_verified = "completed and genuine";
        cout << "Documents are completed and genuine" << endl;
    }

    void display(void)
    {
        cout << "Name: " << name << endl;
        cout << "Id: " << Id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Employee emp1;
    emp1.input();
    emp1.display();
    Employee emp2;
    emp2.input();
    emp2.display();

    return 0;
}