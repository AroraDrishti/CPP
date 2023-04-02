#include <iostream>
using namespace std;

inline void Largest(int n1, int n2)
{
    (n1>n2) ? cout << n1 << " is the largest" : cout << n2 << " is the largest";
}

int main()
{
    int a, b, c;
    cout << "Enter three distinct numbers";
    cin >> a >> b >> c;

    (a>b) ? Largest(a, c) : Largest(b, c);
    return 0;
}