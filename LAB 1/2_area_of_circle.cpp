#include <iostream>

#include <math.h>
using namespace std;

int main()
{
    int rad;
    cout <<"Enter radius \n";
    cin >> rad;
    float area=3.14*pow(rad,2);
    cout << "Area of the circle is ";
    cout << area;
    return 0;
}