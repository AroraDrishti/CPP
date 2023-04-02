#include <iostream>
using namespace std;

class A // base class
{
protected:
    int varA;

public:
    void getVariablesA()
    {
        cout << "Enter a number: " << endl;
        cin >> varA;
    }

    void PrintVariablesA()
    {
        cout << "VarA: " << varA << endl << endl;
    }
};

class B : public A // derived class 1
{
protected:
    int varB;

public:
    void getVariablesB()
    {
        cout << "Enter a number: " << endl;
        cin >> varB;
    }

    void PrintVariablesB()
    {
        cout << "VarA: " << varA << endl;
        cout << "VarB: " << varB << endl << endl;
    }
};

class C : public A // derived class 2
{
protected:
    int varC;

public:
    void getVariablesC()
    {
        cout << "Enter a number: " << endl;
        cin >> varC;
    }

    void PrintVariablesC()
    {
        cout << "VarA: " << varA << endl;
        cout << "VarC: " << varC << endl << endl;
    }
};

int main()
{
    A a1;
    a1.getVariablesA();
    a1.PrintVariablesA();

    B b1;
    b1.getVariablesA();
    b1.getVariablesB();
    b1.PrintVariablesB();

    C c1;
    c1.getVariablesA();
    c1.getVariablesC();
    c1.PrintVariablesC();
    return 0;
}