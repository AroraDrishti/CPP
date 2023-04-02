#include <iostream>
using namespace std;

void aFunc(int & a, const int & b);

int main()
{
    int alpha = 7, beta = 11;
    aFunc(alpha, beta);
    return 0;
}

void aFunc(int & a, const int & b)
{
    a = 107; //ok
    // b = 111; //error
    cout << a << endl << b;
}