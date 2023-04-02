#include <iostream>
using namespace std;

double power(double, int=2);

int main()
{ 
    double m;
    int n;
    cout << "Enter the number ";
    cin >> m;
    cout << "Enter the exponent ";
    cin >> n;

    cout << m << " ^ " << n << " = " << power(m,n);
    return 0;
}

double power(double m, int n)
{
    int i, pro=1;
    for(i=0;i<n;i++)
    {
        pro=pro*m;
    }
    return pro;
}