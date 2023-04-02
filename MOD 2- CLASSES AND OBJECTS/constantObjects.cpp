#include <iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;

public:
    Distance(int ft, float in) //2 arg constructor
    // constructor or destructor cannot be declared as const
    {
        feet = ft;
        inches = in;
    }

    void getDist()
    {
        cout << "Enter feet: ";
        cin >> feet;
        cout << "Enter inches";
        cin >> inches;
    }

    void showDist() const
    {
        cout << feet << "-" << inches << endl;
    }

};

int main()
{
    const Distance football(300, 0);
    // football.getDist(); //const object cannot call non- const member function 
    football.showDist(); //ok
    return 0;
}