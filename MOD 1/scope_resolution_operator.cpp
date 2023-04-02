#include <iostream>
using namespace std;
int m=10;

int main()
{
    int m=20;
    {
        int k=m;
        int m=30;
        cout << k << endl << m << endl << ::m << endl;
    }
    cout << m << endl << ::m << endl;
    return 0;
}