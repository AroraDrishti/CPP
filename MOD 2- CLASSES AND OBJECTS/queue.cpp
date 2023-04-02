#include <iostream>
using namespace std;

class Queue
{
    static int count;

public:
    static void IncreaseCount()
    {
        count++;
        cout << "Passenger number " << count << endl;
    }
};

int Queue ::count = 0;

int main()
{
    Queue p[10];
    for (int i = 0; i < 10; i++)
    {
        Queue :: IncreaseCount();
    }
    return 0;
}