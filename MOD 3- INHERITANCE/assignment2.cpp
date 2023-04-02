#include <iostream>
using namespace std;

class Media
{
protected:
    string title;
    string pub;

public:
    virtual void read() = 0;
    virtual void show() = 0;
};

class Book : protected Media
{
    int pages;

public:
    void read()
    {
        cout << "Enter the title of the book: " << endl;
        cin >> title;
        cout << "Enter the name of publication: " << endl;
        cin >> pub;
        cout << "Enter the number of pages: " << endl;
        cin >> pages;
    }
    void show()
    {
        cout << "Title: " << title << endl;
        cout << "Name of publication: " << pub << endl;
        cout << "Number of pages: " << pages << endl;
    }
};

class VideoTapes : protected Media
{
    float time;

public:
    void read()
    {
        cout << "Enter the title of the video: " << endl;
        cin >> title;
        cout << "Enter the name of publication: " << endl;
        cin >> pub;
        cout << "Enter the playing time: " << endl;
        cin >> time;
    }
    void show()
    {
        cout << "Title: " << title << endl;
        cout << "Name of publication: " << pub << endl;
        cout << "Number of playing time: " << time << endl;
    }
};

int main()
{
    Book * obj1;
    VideoTapes * obj2;
    Book bookobject;
    VideoTapes videoobject;

    obj1 = &bookobject;
    obj2 = &videoobject;

    obj1->read();
    obj1->show();
    obj2->read();
    obj2->show();
    
    return 0;
}