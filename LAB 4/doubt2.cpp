#include <iostream>
using namespace std;

class time
{
    int hours, minutes, seconds, total;

public:
    void input()
    {
        cout << "Enter hours" << endl;
        cin >> hours;
        cout << "Enter minutes" << endl;
        cin >> minutes;
        cout << "Enter seconds" << endl;
        cin >> seconds;
    }

    void display()
    {
        cout << "Hours: " << hours << endl;
        cout << "Minutes: " << minutes << endl;
        cout << "Seconds: " << seconds << endl;
    }

    int timeDifference(time t1, time t2)
    {
        int diff, difference;
        t1.total = 3600*t1.hours +60*t1.minutes + t1.seconds;
        t2.total = 3600*t2.hours +60*t2.minutes + t2.seconds;

        if(t1.total > t2.total)
        {
            difference = t1.total - t2.total;
            diff = difference;
            hours = diff / 3600;
            diff = diff % 3600;
            minutes = diff / 60;
            diff = diff % 60;
            seconds = diff;
        }
        else if(t1.total < t2.total)
        {
            diff = t2.total - t1.total;
            diff = difference;
            hours = diff / 3600;
            diff = diff % 3600;
            minutes = diff / 60;
            diff = diff % 60;
            seconds = diff;
        }
        else
        {
            cout << "Hours: 0" << endl;
            cout << "Minutes: 0" << endl;
            cout << "Seconds: 0" << endl;
        }
        return difference;
    }

    int greaterTime(time t1, time t2)
    {
        if (t1.total > t2. total)
        {
            return 1;
        }
        else if (t1.total < t2. total)
        {
            return 2;
        }
    }

    void otherZone(int diff, int greater, time t)
    {
        int time1 = 3600*t.hours +60*t.minutes + t.seconds;
        if (greater == 1)
        {
            int otherTime = time1 - diff;
            hours = otherTime / 3600;
            otherTime = otherTime % 3600;
            minutes = otherTime / 60;
            otherTime = otherTime % 60;
            seconds = otherTime;
            cout << "Time of other zone: " << hours << ":" << minutes << ":" << seconds << endl;
        }
        else if (greater == 2)
        {
            int otherTime = time1 + diff;
            hours = otherTime / 3600;
            otherTime = otherTime % 3600;
            minutes = otherTime / 60;
            otherTime = otherTime % 60;
            seconds = otherTime;
            cout << "Time of other zone: " << hours << ":" << minutes << ":" << seconds << endl;
        }
    }
};

int main()
{
    time t1, t2, t3;
    t1.input();
    t1.display();
    t2.input();
    t2.display();
    int diff = t3.timeDifference(t1, t2);
    int greater = t1.greaterTime(t1, t2);
    t3.display();
    t2.otherZone(diff, greater, t1);
    return 0;
}