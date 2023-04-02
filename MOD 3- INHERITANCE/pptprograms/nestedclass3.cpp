#include <iostream>
using namespace std;

class Enclosing
{
    int x;
    class Nested
    {
        int y;
    };

    void EnclosingFun(Nested *n)
    {
        cout << n->y; // Compiler Error: y is private in Nested
    }
};
