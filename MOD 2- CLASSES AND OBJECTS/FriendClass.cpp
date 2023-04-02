// #include <iostream>
// using namespace std;

// class Beta;

// class Alpha
// {
//     int data1;

// public:     
//     friend class Beta; //Beta is a friend class  

//     Alpha() : data1(7){};

//     void fun(Beta b);
    
// };

// class Beta 
// {
//     int data2;

// public:     
//     friend class Alpha; //Alpha is a friend class
//     Beta() : data2(17){};

//     void fun(Alpha a);
    
// };

// void Alpha :: fun(Beta b)
// {
//     cout << b.data2;
// }    

// void Beta :: fun(Alpha a)
// {
//     cout << a.data1;
// }

// int main()
// {
//     Alpha a;
//     Beta b;
//     b.fun(a);
//     return 0;
// }

#include <iostream>

class A {
private:
    int a;
 
public:
    A() { a = 0; }
    friend class B; // Friend Class
};
 
class B {
private:
    int b;
 
public:
    void showA(A& x)
    {
        // Since B is friend of A, it can access
        // private members of A
        std::cout << "A::a=" << x.a;
    }
};
 
int main()
{
    A a;
    B b;
    b.showA(a);
    return 0;
}