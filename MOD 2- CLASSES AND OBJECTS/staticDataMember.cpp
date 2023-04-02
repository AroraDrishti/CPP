#include <iostream>
using namespace std;

class A
{
    int x, y; //instance variables--> tied to a particular object
    //static variables--> tied to the class, not specific to an object
    
public:
    static int z; // cannot be initialized here
    A()
    {
        x = 0;
        y = 0;
        z++;
        cout << x << endl
             << y << endl
             << z << endl;
    }
};

int A :: z = 5; //for initialization

int main()
{
    A a1, a2, a3;
    cout << A::z; //called using class name cz static variable
    // cout << a1.z; // can be called via objects too
    return 0;
}