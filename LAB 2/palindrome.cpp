#include <iostream>
#include <string.h>
using namespace std;

void String();
void Number();

int main()
{
    int choice;
    cout << "Enter 1: Check a string for palindrome." <<  endl;
    cout << "Enter 2: Check a number for palindrome." << endl;
    cin >> choice;

    if(choice==1)
    {
        String();
    }
    else
    {
        Number();
    }
    return 0;
}

void Number()
{
    int num, rem, rev=0, a, base=1;

    cout << "Enter a number";
    cin >> num;

    a=num;

    while(a>0)
    {
        rem=a%10;
        rev=rev+rem*base;
        a=a/10;
        base=base*10;
    }
    if(rev==num)
    {
        cout << "The number is a palindrome.";
    }
    else
    {
        cout << "The number is not a palindrome.";
    }
}

void String()
{
    char s[100];
    int len, i, n, flag=0;
    cout << "Enter the string ";
    cin >> s;

    len= strlen(s);
    for(i=0;i<len;i++)
    {
        if(s[i]!=s[len-i-1])
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        cout << s << " is not a palindrome";
    }
    else
    {
        cout << s << " is a palindrome";
    }
}      