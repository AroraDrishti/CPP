#include <iostream>
#include <fstream>
using namespace std;

// class for taking input of student details   
class Details
{
public:
    string name;
    int rollno;

    void get_details()
    {
        cout << "Enter name of the student " << endl;
        cin >> name;
        cout << "Enter roll number of the student " << endl;
        cin >> rollno;
    }
};


// class for taking input of marks scored in quarterly exams   
class Quarterly
{
protected:
    float qmarks;

public:
    void get_quarterly()
    {
        cout << "Enter marks scored in Quarterly exams" << endl;
        cin >> qmarks;
    }
};

// class for taking input of marks scored in half yearly exams   
class HalfYearly
{
protected:
    float hymarks;

public:
    void get_halfyearly()
    {
        cout << "Enter marks scored in Half Yearly exams" << endl;
        cin >> hymarks;
    }
};

// class for taking input of marks scored in final exams   
class Final
{
protected:
    float fmarks;

public:
    void get_final()
    {
        cout << "Enter marks scored in Final exams" << endl;
        cin >> fmarks;
    }
};

// class which exhibits multiple inheritance 
// it calculates percentage and displays the grade    
class Result : public Details, public Quarterly, public HalfYearly, public Final
{
public: 
    float percentage;
    char grade;

    void calc_percentage()
    {
        percentage = (qmarks + hymarks + fmarks) / 3.0;
        cout << name << " scored " << percentage << "%" << endl;
    }    

    void get_grade()
    {
        if(percentage > 90)
        {
            grade = 'A';
            cout << "A grade" << endl;
        }
        else if(percentage > 80)
        {
            grade = 'B';
            cout << "B grade" << endl;
        }
        else if(percentage > 70)
        {
            grade = 'C';
            cout << "C grade" << endl;
        }
        else if(percentage > 60)
        {
            grade = 'D';
            cout << "D grade" << endl;
        }
        else
        {
            grade = 'E';
            cout << "E grade" << endl;
        }
    }
};

int main()
{
    fstream file;
    Result st[30];

    //opening a text file using fstream in append mode
    file.open("report1.txt", ios::app);
    file << "NAME \t\t" << "ROLL NUMBER\t\t" << "GRADE" << endl;
    file << "******************************************" << endl;

    // array of objects
    for(int i = 0; i < 30; i++)
    {
        st[i].get_details();
        st[i].get_quarterly();
        st[i].get_halfyearly();
        st[i].get_final();
        st[i].calc_percentage();
        st[i].get_grade();
        cout << endl;
        // writing the result to the file
        file << st[i].name << "\t\t\t" << st[i].rollno << "\t\t\t\t" << st[i].grade << endl;
    }

    // closing the file
    file.close();
    return 0;
}