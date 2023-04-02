#include <iostream>
using namespace std;

class Base
{
public: 
    virtual void func()
    // void func()
    {
        cout << "In base class" << endl;
    }
};

class Derived : public Base
{
public: 
    void func()
    {
        cout << "In derived class" << endl;
    }
};

int main()
{
    Base *ptr;
    Base baseobj;
    Derived derobj;

    ptr = &baseobj;
    ptr->func(); //calls base class member function

    ptr = &derobj;
    ptr->func(); //calls derived class member function

    return 0;
}