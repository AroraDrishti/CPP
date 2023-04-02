#include <iostream>
using namespace std;

class EmpDetails
{
protected:
    string name;
    int EmpId;

public:
    EmpDetails()
    {
        cout << "Enter name: " << endl;
        cin >> name;
        cout << "Enter employee id: " << endl;
        cin >> EmpId;
    }
};

class department : protected EmpDetails
{
protected:
    string dept;

public:
    department()
    {
        cout << "Enter department: " << endl;
        cin >> dept;
    }

    void get_details()
    {
        cout << "Name: " << name << endl;
        cout << "Employee Id: " << EmpId << endl;
        cout << "Department: " << dept << endl << endl;
    }
};

class calculatepf : protected EmpDetails
{
protected:
    float pf;

public:
    calculatepf(int bs)
    {
        cout << "Provident fund: " << 0.12 * bs << endl;
    }
};

int main()
{

    department d1;
    d1.get_details();

    calculatepf pf1(60000);

    return 0;
}