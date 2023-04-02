#include <iostream>
#include <cstdlib>

using namespace std;

class time
{
    int hours, minutes, seconds;

public:
    void input()
    {
        cout << "Enter hours: " << endl;
        cin >> hours;
        cout << "Enter minutes: " << endl;
        cin >> minutes;
        cout << "Enter seconds: " << endl;
        cin >> seconds;
    }

    void display()
    {
        cout << "Hours: " << hours << endl;
        cout << "Minutes: " << minutes << endl;
        cout << "Seconds: " << seconds << endl;
    }

    int totaltime (time t)
    {
        int tt;
        tt = t.hours*3600 +t.minutes*60 + t.seconds;
        return tt;
    }

    void timeDifference(time t1, time t2)
    {
        int tt1, tt2;
        int a = totaltime(t1);
        int b = totaltime(t2);

        if(a>b)
        {
            int diff = a-b;
            hours = diff / 3600;
            diff = diff % 3600;
            minutes = diff / 60;
            diff = diff % 60;
            seconds = diff;
        }
        else if(b>a)
        {
            int diff = b-a;
            hours = diff / 3600;
            diff = diff % 3600;
            minutes = diff / 60;
            diff = diff % 60;
            seconds = diff;
        }
        else
        {
            cout << "Time difference: 0" << endl;
        }
    }
};

int main()
{
    time t1, t2, t3;
    t1.input();
    t2.input();
    t3.timeDifference(t1, t2);
    t3.display();
    return 0;
}