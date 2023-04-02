#include <iostream>
#include <cstdlib>
using namespace std;

int Leap(int year);

struct Date
{
    int d, m, y;
}dt1, dt2;

int monthDays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30,31};

int LeapYears(Date d)
{
    int years = d.y;
    int j, count=0;
    for(j=0;j<years;j++)
    {
        if(Leap(j)==1)
        {
            count++;
        }
    }
    return count;
}

int Leap(int year)
{
    if(year%400==0)
        return 1;
    else if(year%100==0)
        return 0;
    if(year%4==0)
        return 1;     
}

int Diff(Date dt1, Date dt2)
{
    int n1 = dt1.y *365 + dt1.d;

    for(int i=1; i< dt1.m; i++)
    {
        n1 += monthDays[i];
    }
    n1 += LeapYears(dt1);

    int n2 = dt2.y *365 +dt2.d;
    for(int i=1; i< dt2.m; i++)
    {
        n2 += monthDays[i];
    }
    n2 += LeapYears(dt2);

    return (n1-n2);
}

int main()
{
    Date date1 = {12, 8, 1995};
    Date date2 = {22, 7, 2020};

    cout << "Difference is " << abs(Diff(date1, date2));
    
    return 0;
}

// bool validDate(int Date.d, int Date.m, int Date.y)
// {
//     int d= Date.d;
//     int m= Date.m;
//     int y= Date.y;
    
//     //check year
//     if(y>=1200 && y<=9999)
//     {
//         //check month
//         if(m>=1 && m<=12)
//         {
//             //check day
//             if((d>=1 &&d<=31) && (m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12))
//             {
//                 return true;
//             }
//             else if((d>=1 &&d<=30) && (m==4 || m==6 || m==9 || m==11))
//             {
//                 return true;
//             }
//             else if((d>=1 && d<=28) && m==2)
//             {
//                 return true;
//             }
//             else if(d==29 && m==2 && (y%400==0 || y%4==0 && y%100!=0))
//             {
//                 return true;
//             }
//         }
//     else 
//     {
//         return false;
//     }
// }