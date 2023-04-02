// #include <iostream>
// #include <cstdlib>
// using namespace std;
// int bg;

// class time
// {
//     int hours, minutes, seconds, totaltime;

// public:
//     void input()
//     {
//         cout << "Enter hours: " << endl;
//         cin >> hours;
//         cout << "Enter minutes: " << endl;
//         cin >> minutes;
//         cout << "Enter seconds: " << endl;
//         cin >> seconds;
//     }

//     void display()
//     {
//         cout << "Hours: " << hours << endl;
//         cout << "Minutes: " << minutes << endl;
//         cout << "Seconds: " << seconds << endl;
//     }

//     void totaltime (time t)
//     {
//         totaltime = t.hours*3600 +t.minutes*60 + t.seconds;
//     }

//     void timeDifference(time t1, time t2)
//     {
//         // int a = t1.totaltime;
//         // int b = t2.totaltime;

//         if(t1.totaltime > t2.totaltime)
//         {
//             int diff = t1.totaltime - t2.totaltime; //a-b;
//             hours = diff / 3600;
//             diff = diff % 3600;
//             minutes = diff / 60;
//             diff = diff % 60;
//             seconds = diff;
//         }
//         else if(t2.totaltime > t1.totaltime)
//         {
//             int diff = t2.totaltime - t1.totaltime; //b-a;
//             hours = diff / 3600;
//             diff = diff % 3600;
//             minutes = diff / 60;
//             diff = diff % 60;
//             seconds = diff;
//         }
//         else
//         {
//             cout << "No time difference" << endl;
//         }
//     }

//     // void otherZone(time t1, time t2)
//     // {
//     //     int c = t2.hours*3600 +t2.minutes*60 +t2.seconds;
//     //     if(t1.totaltime < t2.totaltime)
//     //     {
//     //         int diff = t2.totaltime - c;
//     //         hours = diff / 3600;
//     //         diff = diff % 3600;
//     //         minutes = diff / 60;
//     //         diff = diff % 60;
//     //         seconds = diff;
//     //         cout << hours << endl << minutes << endl << seconds << endl;
//     //     }
//     //     else if(t1.totaltime > t2.totaltime)
//     //     {
//     //         int diff = t2.totaltime + c;
//     //         hours = diff / 3600;
//     //         diff = diff % 3600;
//     //         minutes = diff / 60;
//     //         diff = diff % 60;
//     //         seconds = diff;
//     //         cout << hours << endl << minutes << endl << seconds << endl;
//     //     }        
//     // }
// };

// int main()
// {
//     time t1, t2, t3;
//     t1.input();
//     t2.input();
//     t3.timeDifference(t1, t2);
//     t3.display();
//     // t1.otherZone(t1, t2);
//     return 0;
// }
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