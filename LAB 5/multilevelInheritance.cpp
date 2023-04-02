#include <iostream>
#include <string.h>
using namespace std;

class Student
{
protected:
    int roll_no;
    string name;

public:
    Student()
    {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter roll number: " << endl;
        cin >> roll_no;
    }

    void get_data()
    {
        cout << "Name of the student is" << name << endl; 
        cout << "Roll number is " << roll_no << endl;
    }
};

class Test : protected Student
{
protected:
    int phymarks, mathsmarks, chemmarks;

public:
    Test()
    {
        cout << "Enter physics marks: " << endl;
        cin >> phymarks;
        cout << "Enter maths marks: " << endl;
        cin >> mathsmarks;
        cout << "Enter chemistry marks: " << endl;
        cin >> chemmarks;
    }

    void get_marks()
    {
        cout << "Physics Marks : " << phymarks << endl;
        cout << "Maths Marks : " << mathsmarks << endl;
        cout << "Chemistry Marks : " << chemmarks << endl;
    }
};

class Result : protected Test
{
    float percentage;

public: 
    Result()
    {
        percentage = (phymarks + mathsmarks + chemmarks)/3.0;
    }

    void display()
    {
        cout << "Percentage scored by " << name << " is " << percentage << endl; 
    }
};

int main()
{
    Result s1;
    s1.display();    
    return 0;
}