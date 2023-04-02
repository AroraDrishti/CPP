#include <iostream>
using namespace std;

class Students
{
    int roll_no;
    string name;
    float marks;
    int fee_paid;

public:
    void input()
    {
        cout << "Enter the roll number ";
        cin >> roll_no;
        cout << "Enter the name ";
        cin >> name;
        cout << "Enter the marks ";
        cin >> marks;
    }

    void display() 
    {
        cout << "The name of student is " << name << " and the roll number is " << roll_no << " who scored " << marks << endl;
        cout << "Fees paid is " << fee_paid << endl;
    }

    void initialize()
    {
        fee_paid=150000;
    }
};    

int main()
{
    Students s1, s2;
    s1.input();
    s1.initialize();
    s1.display();
    s2.input();
    s2.initialize();
    s2.display();
    return 0;
}