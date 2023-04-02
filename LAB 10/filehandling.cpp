#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream obj;
    int num;
    obj.open("example.dat");

    if (!obj)
    {
        cout << "Error: file does not exist\n" << endl;
    }
    return 0;
}