#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int a[10][10], b[10][10], mul[10][10];
    int r1, r2, c1, c2, i, j, k;

    //Input first matrix
    cout << "Enter the number of rows of first matrix";
    cin >> r1;
    cout << "Enter the number of columns of first matrix";
    cin >> c1;

    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            cout << "Enter element a[" << i << "][" << j << "]" << endl;
            cin >> a[i][j];
        }
    }

    //Input second matrix
    cout << "Enter the number of rows of second matrix";
    cin >> r2;
    cout << "Enter the number of columns of second matrix";
    cin >> c2;

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout << "Enter element b[" << i << "][" << j << "]" << endl;
            cin >> b[i][j];
        }
    }    

    if(r2==c1)
    {
        //Multiplication
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                mul[i][j]=0;
                for(k=0; k<r2; k++)
                {
                    mul[i][j]= mul[i][j]+ a[i][k]*b[k][j];
                }
            }
        }      

        //Display
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c2;j++)
            {
                cout << mul[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "Cannot perform multiplication";
    }   
}