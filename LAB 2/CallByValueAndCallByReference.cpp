#include <iostream>
using namespace std;

void SwapCallByValue(int a, int b);
void SwapCallByReference(int &a, int &b);

void SwapCallByValue(int a, int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

void SwapCallByReference(int &a, int &b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a, b;
    cout << "Enter two numbers ";
    cin >> a >> b;

    cout << "Before Swapping " << a << " " << b << endl;
    SwapCallByValue(a, b);
    cout << "After swapping by Call By Value " << a << " " << b << endl;
    SwapCallByReference(a, b);
    cout << "After swapping by Call By Reference " << a << " " << b << endl;

    return 0;
}