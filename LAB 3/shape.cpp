// Define a class Shape whose attributes are radius, length and width calculate the perimeter of the rectangle and circle. Use constructors and destructors.
#include <iostream>
using namespace std;

class Shape
{
    int radius;
    int length;
    int width;

public:
    Shape()
    {
    }

    Shape(int r)
    {
        radius = r;
        perimetercircle();
        areacircle();
    }

    Shape(int l, int w)
    {
        length = l;
        width = w;
        perimeterrectangle();
        arearectangle();
    }

    void perimetercircle()
    {
        float peri = 6.28 * radius;
        cout << "Perimeter of circle is " << peri << endl;
    }

    void perimeterrectangle()
    {
        int peri = 2 * (length + width);
        cout << "Perimeter of rectangle is " << peri << endl;
    }

    void areacircle()
    {
        float area = 3.14 * radius * radius;
        cout << "Area of circle is " << area << endl;
    }

    void arearectangle()
    {
        float area = length * width;
        cout << "Area of rectangle is " << area << endl;
    }
};

int main()
{
    Shape s1(7);
    Shape s2(3, 4);
    return 0;
}