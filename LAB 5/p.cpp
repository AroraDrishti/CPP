#include <iostream>
using namespace std;

class Base
{
private:
    int pvtbase;

protected:
    int protbase;  

public:
    int pubbase;

    Base()
    {
        cout << "Enter the value of private member of base class" << endl;
        cin >> pvtbase;
        cout << "Enter the value of protected member of base class" << endl;
        cin >> protbase;
        cout << "Enter the value of public member of base class" << endl;
        cin >> pubbase;
    }
};

class Derived : protected Base
{
private:
    int pvtderived;

protected:
    int protderived;  

public:
    int pubderived;    

    Derived()
    {
        cout << "Enter the value of private member of derived class" << endl;
        cin >> pvtderived;
        cout << "Enter the value of protected member of derived class" << endl;
        cin >> protderived;
        cout << "Enter the value of public member of derived class" << endl;
        cin >> pubderived;
    }
};

int main()
{
    Derived d1;
    // cout << sizeof(d1) << endl;
    // cout << "Private member of base class: " << d1.pvtbase << endl; --> inaccessible
    // cout << "Protected member of base class: " << d1.protbase << endl; --> inaccessible
    // cout << "Public member of base class: " << d1.pubbase << endl; --> inaccessible
    // cout << "Private member of derived class: " << d1.pvtderived << endl; --> inaccessible
    // cout << "Protected member of derived class: " << d1.protderived << endl; --> inaccessible
    cout << "Public member of derived class: " << d1.pubderived << endl; //-->accessible
    return 0;
}