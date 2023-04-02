#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    Student()
    {
        cout << "Enter roll number: " << endl;
        cin >> roll_no;
    }

    void get_data()
    {
        cout << "Roll number is " << roll_no << endl;
    }
};

class Test : public Student
{
public:
    int marks;
    void set_marks()
    {
        cout << "Enter marks: " << endl;
        cin >> marks;
    }

    void get_marks()
    {
        cout << "Marks scored by roll number " << roll_no << " are " << marks << endl;
    }
};

int main()
{
    Test s1;
    s1.set_marks();
    s1.get_marks();
    return 0;
}