#include <iostream>
using namespace std;

class aClass
{

public:
    int alpha = 11;
    void nonFunc() 
    {
        alpha = 99;
        // conFunc(); //can be called  but error
    }

    void conFunc() const
    {
        // nonFunc(); // cannot call another function to change the value
        // alpha = 99; // error->cannot modify a member
    }
};

int main()
{
    aClass a1;
    cout << a1.alpha << endl;
    a1.nonFunc();
    cout << a1.alpha << endl;
    a1.conFunc();
    cout << a1.alpha << endl;
    return 0;
}