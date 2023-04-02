#include <iostream>
using namespace std;

int sum(int, int);
int sum(int, int, int);
char sum(char, char);

int main()
{
    cout << sum(1.1, 2);
    cout << sum(1, 2, 3);
    cout << sum('A', 'B');
    return 0;
}

int sum(int a, int b)
{
    int sum;
    sum = a + b;
    return sum;
}

int sum(int a, int b, int c)
{
    int sum;
    sum = a + b + c;
    return sum;
}

char sum(char a, char b)
{
    char sum;
    sum = a + b;
    return sum;
}