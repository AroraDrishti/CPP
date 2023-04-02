#include <iostream>
using namespace std;

void Addition();
void Subtraction();
void Multiplication();
void Transpose();

int main()
{
    int choice;
    cout << "Enter a number" << endl;
    cout << "1: Addition of matrices" << endl;
    cout << "2: Subtraction of matrices" << endl;
    cout << "3: Multiplication of matrices" << endl;
    cout << "4: Transpose of matrix" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Addition of matrices" << endl;
        Addition();
        break;

    case 2:
        cout << "Subtraction of matrices" << endl;
        Subtraction();
        break;

    case 3:
        cout << "Multiplication of matrices" << endl;
        Multiplication();
        break; 

    case 4:
        cout << "Transpose of matrix" << endl;
        Transpose();
        break;           
    
    default:
        cout << "Enter other input" << endl;
        break;
    }
    return 0;
}

void Addition()
{
    int a[10][10], b[10][10], add[10][10];
    int r1, r2, c1, c2, i, j;

    //Input first matrix
    cout << "Enter the number of rows of first matrix ";
    cin >> r1;
    cout << "Enter the number of columns of first matrix ";
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
    cout << "Enter the number of rows of second matrix ";
    cin >> r2;
    cout << "Enter the number of columns of second matrix ";
    cin >> c2;

    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            cout << "Enter element b[" << i << "][" << j << "]" << endl;
            cin >> b[i][j];
        }
    }    

    if(r1==r2 && c1==c2)
    {
        //Addition
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                add[i][j] = a[i][j] +b[i][j];
            }
        }      

        //Display
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout << add[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "Cannot perform addition";
    }   
}

void Subtraction()
{
    int a[10][10], b[10][10], sub[10][10];
    int r1, r2, c1, c2, i, j;

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

    if(r1==r2 && c1==c2)
    {
        //Subtraction
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                sub[i][j] = a[i][j] - b[i][j];
            }
        }      

        //Display
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                cout << sub[i][j] << " ";
            }
            cout << "\n";
        }
    }
    else
    {
        cout << "Cannot perform subtraction";
    }   
}

void Multiplication()
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

void Transpose()
{
    int a[10][10], t[10][10];
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
   
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            t[i][j]=a[j][i];
        }
    }

    //Display
    for(i=0;i<c1;i++)
    {
        for(j=0;j<r1;j++)
        {
            cout << t[i][j] << " ";
        }
        cout << "\n";
    }
}