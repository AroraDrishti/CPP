// Write a program to find the area of circle and cylinder by virtual function runtime polymorphism overloading concept.

#include <iostream>
using namespace std;

class circle
{
protected:
    float radius;

public:
    virtual void input()
    {
        cout << "Enter radius: ";
        cin >> radius;
    } 

    virtual void area() //virtual function
    {
        float ar;
        ar = 3.14 * radius * radius;
        cout << "Area of the circle is " << ar << endl;
    }
};

class cylinder :  public circle
{
protected:
    float height;

public:
    void input()
    {
        cout << "Enter radius: ";
        cin >> radius;
        cout << "Enter height: ";
        cin >> height;
    } 

    void area() //overridden function
    {
        float ar;
        ar = 2 * 3.14 * height * radius;
        cout << "Area of the cylinder is " << ar << endl;
    }
};

int main()
{
    circle *ptr;
    circle objcircle;
    cylinder objcylinder;

    ptr = &objcircle;
    ptr->input();
    ptr->area();

    ptr = &objcylinder;
    ptr->input();
    ptr->area();

    return 0;
}