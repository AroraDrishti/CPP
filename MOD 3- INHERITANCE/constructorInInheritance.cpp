#include <iostream>
using namespace std;

class A
{
public: 
    A()
    {
        cout << "Constructor of A" << endl;
    }
    A(int c)
    {
        cout << "Constructor of A" << endl;
        cout << c << endl;
    }
};

class B : public A
{
public: 
    B() : A(20) //calls A()
    {
        cout << "Constructor of B" << endl;
    }
    B(int d) : A(d)
    {
        cout << "Constructor of B" << endl;
        cout << d << endl;
    }
};

//order of call -> B->A
//order of execution -> A->B

int main()
{
    A a1, a2(5);
    cout << endl;
    B b1, b2(2); 
    return 0;
}