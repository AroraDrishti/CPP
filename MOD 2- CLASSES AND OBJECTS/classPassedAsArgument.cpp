#include <iostream>
using namespace std;

class time
{
    int hours, minutes;

public: 
    void input()
    {
        cout << "Enter hours" << endl;
        cin >> hours;
        cout << "Enter minutes" << endl;
        cin >> minutes;
    }

    void display()
    {
        cout << "Hours: " << hours << endl;
        cout << "Minutes: " << minutes << endl;
    }

    void sum(time t1, time t2)
    {
        minutes = t1.minutes + t2.minutes;
        hours = minutes/60;
        minutes = minutes%60;
        hours = hours + t1.hours +t2.hours;
    }
};

int main()
{
    time t[3];
    t[0].input();
    t[1].input();
    t[2].sum(t[0], t[1]);
    t[2].display();

    return 0;
}