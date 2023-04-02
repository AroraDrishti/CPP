#include <iostream>
using namespace std;

class Shape
{
public:
    float height, breadth, ar;

    Shape()
    {
        cout << "Enter height: " << endl;
        cin >> height;
        cout << "Enter breadth: " << endl;
        cin >> breadth;
    }

    virtual void area() = 0;
};

class Rectangle : public Shape
{
public:
    void area()
    {
        ar = height * breadth;
        cout << "Area of rectangle is " << ar << endl
             << endl;
    }
};

class Triangle : public Shape
{
public:
    void area()
    {
        ar = 0.5 * height * breadth;
        cout << "Area of triangle is " << ar << endl
             << endl;
    }
};

int main()
{
    Rectangle obj1;
    obj1.area();

    Triangle obj2;
    obj2.area();

    return 0;
}