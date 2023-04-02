#include <iostream>
using namespace std;

void factorial(int); //function prototype

void factorial(int num) //function definition
{
    int i=1, fact=1;
    for(i=1;i<=num;i++)
    {
        fact=fact*i;
    }
    cout <<"The factorial is " << fact;
}

int main()
{
    int num, fact;
    cout << "Enter the number: ";
    cin >> num;

    factorial(num); //function call

    return 0;
}