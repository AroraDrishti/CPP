#include <iostream>
using namespace std;

class A
{
    public:
    A()
    {
        cout << "Constructor of A" << endl;
    }
    void fun()
    {
        cout << 1 << endl;
    }
};

class B 
{
    public:
    B()
    {
        cout << "Constructor of B" << endl;
    }
    void fun()
    {
        cout << 2 << endl;
    }
};

class C : public A, B
{
    public:
    C()
    {
        cout << "Constructor of C" << endl;
    }
    void fun()
    {
        cout << 3 << endl;
    }
};

int main()
{
    C c1;
    c1.fun();
    return 0;
}