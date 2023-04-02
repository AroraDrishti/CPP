#include <iostream>
using namespace std;

void swap(int &x, int &y);

int main()
{
    int a, b;
    cout << "Enter 2 numbers";
    cin >> a >> b;
    // int &x = a;
    // int &y = b;
    swap(a, b);

    return 0;
}

void swap(int &x, int &y)
{
    int temp;
    temp= x;
    x=y;
    y= temp;
    cout << "Swapped number:" << x << y;
}