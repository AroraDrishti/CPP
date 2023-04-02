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

class Exam : protected Student
{
protected:
    int phymarks, mathsmarks, chemmarks, biomarks, csmarks, engmarks;

public:
    Exam()
    {
        cout << "Enter biology marks: " << endl;
        cin >> biomarks;
        cout << "Enter english marks: " << endl;
        cin >> engmarks;
        cout << "Enter CS marks: " << endl;
        cin >> csmarks;
        cout << "Enter physics marks: " << endl;
        cin >> phymarks;
        cout << "Enter maths marks: " << endl;
        cin >> mathsmarks;
        cout << "Enter chemistry marks: " << endl;
        cin >> chemmarks;
    }

    void get_marks()
    {
        cout << "Biology Marks : " << biomarks << endl;
        cout << "English Marks : " << engmarks << endl;
        cout << "CS Marks : " << csmarks << endl;
        cout << "Physics Marks : " << phymarks << endl;
        cout << "Maths Marks : " << mathsmarks << endl;
        cout << "Chemistry Marks : " << chemmarks << endl;
    }
};

class Result : protected Exam
{
    float total, percentage;

public: 
    Result()
    {
        total = biomarks + engmarks + csmarks + phymarks + mathsmarks + chemmarks;
        percentage = (total)/6.0;
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