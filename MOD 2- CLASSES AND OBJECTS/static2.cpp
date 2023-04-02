#include <iostream>
using namespace std;

class A
{
public: 
    static int count;
    int x;
    
    A()
    {
        x=0;
    }    
    static void fun()
    {
        cout << count << endl;
        // cout << x << endl; --> static function cannot access non-static data members --> as they are associated with the class and not objects
    }
    void funny()
    {
        cout << count << endl;
    }
};

int A :: count = 0;

int main()
{
    cout << A :: count << endl;
    A a1;
    a1.x = 5;
    cout << a1.x << endl;
    cout << a1.count << endl;
    a1.fun();
    a1.funny();
    return 0;
}