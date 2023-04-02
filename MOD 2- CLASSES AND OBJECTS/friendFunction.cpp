#include <iostream>
using namespace std;

class Beta; // forward declaration

class Alpha
{
    int data;

public: 
    Alpha()
    {
        data = 3;
    }
    friend int FriendFunc(Alpha, Beta); //friend function
};

class Beta
{
    int data;

public: 
    Beta() : data(7) {}; 

    friend int FriendFunc(Alpha, Beta); //friend function
};

int FriendFunc(Alpha a, Beta b)
{
    return a.data + b.data; 
}

int main()
{
    Alpha a;
    Beta b;
    cout << FriendFunc(a,b) << endl;
    return 0;
}