#include <iostream>
using namespace std;

int main()
{
    int i, j, arr[3];

    cout << "Enter the elements in the array";

    for (i = 0; i < 3; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the position";
    cin >> j;

    try
    {
        if (j > 3)
        {
            int a = 1;
            throw a;
        }

        else
        {
            cout << arr[j - 1];
        }
    }

    catch (int analysis)
    {
        cout << "Array out of bound\n";
    }

    return 0;
}