#include <iostream>
using namespace std;

class Base1
{
protected:
    int n1;

public:
    Base1()
    {
        cout << "Enter a number" << endl;
        cin >> n1;
    }    
};

class Base2
{
protected:
    int n2;

public:
    Base2()
    {
        cout << "Enter a number" << endl;
        cin >> n2;
    }    
};

class Derived : public Base1, public Base2
{
public:
    void display()
    {
        cout << "Value of base 1 is " << n1 << endl; 
        cout << "Value of base 2 is " << n2 << endl; 
        cout << "Sum is " << n1 + n2 << endl;
    }
};

int main()
{
    Derived d1;
    d1.display();
    return 0;
}