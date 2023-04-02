#include <iostream>
using namespace std;

class Enclosing
{
public:
    int x;
    class Nested
    {
    public:
        int y;
        void NestedFun(Enclosing *e)
        {
            cout << e->x;
        }
    };
};     

int main()
{
    Enclosing :: Nested obj;
    cout << obj.y;
    // Enclosing obj2;
    // obj.NestedFun(* obj2);
    return 0;
}
