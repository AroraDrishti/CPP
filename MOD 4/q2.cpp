// Write a program to calculate the total mark of a student using the concept of virtual base class.

#include <iostream>
using namespace std;

class Student
{
protected:
    string name;
    int roll_no;

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
        cout << "Name of the student is " << name << endl; 
        cout << "Roll number is " << roll_no << endl;
    }
};

class Sports : virtual public Student
{
protected:
    int score;

public:
    Sports()
    {
        cout << "Enter score for sports: " << endl;
        cin >> score;
    }
};

class Academic : virtual public Student
{
protected:
    int phymarks, mathsmarks, chemmarks, average;

public:
    Academic()
    {
        cout << "Enter physics marks: " << endl;
        cin >> phymarks;
        cout << "Enter maths marks: " << endl;
        cin >> mathsmarks;
        cout << "Enter chemistry marks: " << endl;
        cin >> chemmarks;
    }

    void get_average()
    {
        average = (phymarks + mathsmarks + chemmarks) / 3.0;
    }
};

class Result : public Sports, public Academic
{
protected:
    float total;

public:
    void get_total()
    {
        get_average();
        total = average + score;
        cout << name << " (" << roll_no << ") has scored " << total << endl;
    }
};

int main()
{
    Result obj;
    obj.get_total();
    return 0;
}