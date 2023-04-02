#include <iostream>
#include<string.h>
using namespace std;

class Person{
    private:
            char name[64],address[64];
            int age;
            float salary;
    public:
            void input(){
                //cout<<"***************";
                cout<<endl<<endl<<"Enter the Name : ";
                cin.getline(name,64);
                cout<<name;
                cout<<endl<<"Enter the Age : ";
                cin>>age;
                cout<<endl<<"Enter your salary : ";
                cin>>salary;
                cout<<endl<<"Enter your address (press . to complete) : ";
                cin.getline(address,64);
            }
};
int main() {
  Person P[10];
    for(int i=0;i<10;i++){
        P[i].input();
    }
    return 0;
}