#include <iostream>
using namespace std;

float amount(float principle, int period, float rate=0.15);

int main()
{
    cout << amount(5000.00, 5, 3);
    return 0;
}

float amount(float p, int x, float r)
{
    float amount= p*x*r;
    return amount;
}