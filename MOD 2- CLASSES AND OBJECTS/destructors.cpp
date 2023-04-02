#include <iostream>
using namespace std;

class A
{
    int x;

public:
    A(int a)
    {
        x = a;
        cout << "Calling constructors" << endl;
    }
    ~A()
    {
        cout << "Calling destructors" << endl;
        cout << this->x << endl;
    }
};

int main()
{
    A a1(1), a2(2), a3(3);
    return 0;
}