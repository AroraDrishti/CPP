#include <iostream>
using namespace std;

float division(int a, int b)
{
    if (b == 0)
    {
        throw 1;
    }
    return (a / b);
}

int main()
{
    int x = 50;
    int y = 0;
    float z = 0;

    try
    {
        z = division(x, y);
        cout << z << endl;
    }

    catch (int a)
    {
        cout << "Division by zero is not possible\n" << endl;
    }

    return 0;
}