#include <iostream>
using namespace std;

class Test
{
    // private variables.
private:
    int x, y;

public:
    // parameterized constructor
    Test(int cx, int cy)
    {
        x = cx;
        y = cy;
    }
    // method to add two numbers
    void add() { cout << x + y << endl; }
};
int main()
{
    // Initializing 3 array Objects with function calls of
    // parameterized constructor as elements of that array
    Test obj[] = {Test(1, 1), Test(2, 2), Test(3, 3)};

    // using add method for each of three elements.
    for (int i = 0; i < 3; i++)
    {
        obj[i].add();
    }

    return 0;
}