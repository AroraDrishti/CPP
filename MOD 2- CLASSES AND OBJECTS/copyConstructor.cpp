#include <iostream>
using namespace std;

class alpha
{
private:
    int data;

public:
    alpha() //default constructor
    {
        data = 0;
        cout << "\nDefault Constructor invoked\n";
    }

    alpha(int d) //parametrized constructor
    {
        data = d;
        cout << "\nParametrized Constructor invoked\n";
    }

    alpha(alpha & a) //copy constructor
    {
        data = a.data;
        cout << "\nCopy Constructor invoked\n";
    }

    void display()
    {
        cout << data << endl;
    }
};

int main()
{
    alpha a1(7), a2(a1), a3();
    a1.display();
    a2.display();
    return 0;
}