#include <iostream>
using namespace std;

class Number
{
protected:
    int num;

public:
    void setnumber()
    {
        cout << "Enter a number: " << endl;
        cin >> num;
    }

    void getnumber()
    {
        cout << "Number: " << num << endl << endl;
    }
};

class Square : public Number
{
protected:
    int sq;

public:
    void calculateSquare(void)
    {
        setnumber();
        sq = num * num;
    }

    void getSquare()
    {
        cout << "Square of " << num << " is " << sq << endl;
    }
};

class Cube : public Number
{
protected:
    int cu;

public:
    void calculateCube(void)
    {
        setnumber();
        cu = num * num * num;
    }

    void getCube()
    {
        cout << "Cube of " << num << " is " << cu << endl;
    }
};

int main()
{
    Square s1;
    Cube c1;
    s1.calculateSquare();
    s1.getSquare();
    c1.calculateCube();
    c1.getCube();
    return 0;
}