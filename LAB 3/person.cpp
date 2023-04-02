// Create a class Person which includes: character array name of size 64, age in numeric, character array address of size 64, and total salary in real numbers (divide salary in different components, if required). Make an array of objects of class Person of size 10.
// Write inline function that obtains the youngest and eldest age of a person from a class person using arrays.
// Write a program to develop the salary slip and display result by using constructors.

#include <iostream>
using namespace std;

class Person
{
    char name[64];
    char address[64];
    float salary;

public:
    int age;

    void getData(void)
    {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter address: ";
        cin >> address;
        cout << "Enter salary: ";
        cin >> salary;
    }

    void salarySlip(void)
    {
        cout << "The salary is " << salary << endl;
    }

    void display(void)
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Address: " << address << endl;
    }
};

int main()
{
    Person p[10];
    for (int i = 0; i < 10; i++)
    {
        cout << "For person " << i + 1 << endl;
        p[i].getData();
        p[i].display();
        p[i].salarySlip();
    }
    return 0;
}