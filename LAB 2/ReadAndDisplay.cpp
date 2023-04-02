#include <iostream>
using namespace std;

int main()
{
    int a[10][10];
    int r1, c1, i, j;

    //Input matrix
    cout << "Enter the number of rows of matrix";
    cin >> r1;
    cout << "Enter the number of columns of matrix";
    cin >> c1;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout << "Enter element a[" << i << "][" << j << "]" << endl;
            cin >> a[i][j];
        }
    }
   
    //Display
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}