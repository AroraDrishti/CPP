// Create a class Mobile Phones with appropriate data members and functions. The class should also have a function that initializes some data member (Think of a data member for the class mobile phone and initialize it to some value as done in the previous programs). Create appropriate objects and call the functions. Make use of public and private access specifier wherever required.

#include <iostream>
using namespace std;

class MobilePhones
{
    string company;
    float price;
    string color;

public:

    void initialize(void)
    {
        cout << "Enter company of the mobile phone ";
        cin >> company;
        cout << "Enter price of the mobile phone ";
        cin >> price;
        cout << "Enter the color of the mobile phone ";
        cin >> color;
    }

    void display(void)
    {
        cout << "Company: " << company << endl;
        cout << "Price: " << price << endl;
        cout << "Color: " << color << endl;
    }

};

int main()
{
    MobilePhones mp1, mp2;
    mp1.initialize();
    mp1.display();
    mp2.initialize();
    mp2.display();

    return 0;
}