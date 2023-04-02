#include <iostream>
#include <math.h>
using namespace std;

class simpleCalculator
{
    int a, b;

public:
    simpleCalculator()
    {}

    simpleCalculator(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void add()
    {
        cout << "Sum is " << a + b << endl;
    }

    void sub()
    {
        cout << "Difference is " << a - b << endl;
    }

    void mul()
    {
        cout << "Product is " << a * b << endl;
    }

    void div()
    {
        cout << "Quotient is " << a / b << endl;
    }

    void mod()
    {
        cout << "Remainder is " << a % b << endl;
    }
};

class scientificCalculator : private simpleCalculator
{
    int a, b;

public:
    scientificCalculator(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void trigo()
    {
        cout << "sin(a) is " << sin(a) << endl;
        cout << "cos(a) is " << cos(a) << endl;
        cout << "tan(a) is " << tan(a) << endl;
        cout << "exp(a) is " << exp(a) << endl;
    }
};

int main()
{
    simpleCalculator c1(1,3);
    c1.add();
    scientificCalculator c2(1,2);
    // c2.add(); //--> error
    c2.trigo();
    return 0;
}