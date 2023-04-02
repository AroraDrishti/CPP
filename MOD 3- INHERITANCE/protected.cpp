#include <iostream>
using namespace std;

class A
{
private:
    int x;

protected:
    int y;

public: 
    int z;
    void fun()
    {
        cout << x << endl << y << endl << z << endl;
    }
};

class B : public A 
{
private:
    int a1;

protected: 
    int b1;

public:
    int c1;
    void bfun()
    {
        cout << a1 << endl << b1 << endl << c1 << endl;
        // cout << x << endl << y << endl << z << endl; //error --> x is private member of base class A
    }        
};

int main()
{
    A a11;
    B b11;

    // a11.x = 6; //error --> private member of base class A
    // a11.y = 7; //error --> protected member of base class A
    a11.z = 8; 

    // a11.a1 = 1; //error --> base class cannot inherit members of derived class
    // a11.b1 = 2; //error --> base class cannot inherit members of derived class
    // a11.c1 = 3; //error --> base class cannot inherit members of derived class

    a11.fun();
    // a11.bfun(); //error

    // b11.x = 6; //error --> private member of base class A
    // b11.y = 7; //error --> protected member of base class A
    b11.z = 8;

    // b11.a1 = 1; //error --> private member of base class B
    // b11.b1 = 2; //error --> protected member of base class B
    b11.c1 = 3;

    b11.fun();
    b11.bfun();

    return 0;
}