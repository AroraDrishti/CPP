#include <iostream>
using namespace std;

class A //base class
{
protected:
    int x;

public: 
    A()
    {
        x = 0;
    }

    A(int c)
    {
        x = c;
    }

    int get()
    {
        return x;
    }
};

class B : public A //derived class
{
public:
    void input()
    {
        cout << "Enter x: " <<  endl;
        cin >> x;
    }    

    void factorial()
    {
        int fact = 1;
        for (int i = 1; i <= x; i++)
        {
            fact = fact * i;
        }
        cout << "\nFactorial: " << fact<< endl;
    }
};

int main()
{
    A a1; 
    B b1;
    a1.get();
    b1.get();
    b1.input();
    b1.factorial();
    return 0;
}