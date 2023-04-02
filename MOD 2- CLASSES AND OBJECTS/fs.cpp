#include<iostream>
using namespace std;

class number2;

class number1
{
private:
    int a;

public:
    void input1()
    {
        cout<<"enter the 1st number";
        cin>>a;
    }
    friend void swap(number1, number2);
};

class number2
{
    private:
    int b;
    public:
    void input2()
    {
        cout<<"enter the 2nd number";
        cin>>b;
    }
    friend void swap(number1, number2);
};

void swap(number1 object1, number2 object2)
{
    object1.a=object1.a*object2.b;
    object2.b=object1.a/object2.b;
    object1.a=object1.a/object2.b;
    cout<<object1.a<<object2.b;
}

int main()
{
    number1 ob1;
    number2 ob2;
    ob1.input1();
    ob2.input2();
    swap(ob1,ob2);
    return 0;
}