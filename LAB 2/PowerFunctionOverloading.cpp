#include <iostream>
using namespace std;

int power(int, int=2);
double power(double, int=2);

int main()
{ 
    int m;
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
    cout << "Executing double power function";
    return pro;
}

int power(int m, int n)
{
    int i, pro=1;
    for(i=0;i<n;i++)
    {
        pro=pro*m;
    }
    cout << "Executing int power function";
    return pro;
}