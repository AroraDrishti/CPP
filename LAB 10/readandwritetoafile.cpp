#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    // fstream obj("sample.txt", ios::in|ios::out);
    // obj << "hi";
    ifstream in;
    string str;

    in.open("sample.txt");

    while(in.eof() == 0)
    {
        getline(in, str);
        cout << str << endl;
    }

    ofstream out;

    out.open("sample2.txt");
    out << str;

    in.close();
    // obj.close();
    return 0;
}