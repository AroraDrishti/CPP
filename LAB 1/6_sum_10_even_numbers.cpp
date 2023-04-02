#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
   int sum=0;
   int i=0;
   for(i=0;i<=18;i+=2)
   {
       sum=sum+i;
   }
   cout << "Sum of first 10 even numbers is " << sum;
    return 0;
}