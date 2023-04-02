#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
    int year;
    cout << "Enter the year \n";
    cin >> year;
    cout << "\n";
    if (year % 400 == 0)
    {
        cout << year << "is a leap year \n";
    }
    else if (year % 100 == 0)
    {
        cout << year << "is not a leap year \n";
    }
    else if (year % 4 == 0)
    {
        cout << year << "is a leap year \n";
    }
    else
    {
        cout << year << "is not a leap year \n";
    }
    return 0;
}