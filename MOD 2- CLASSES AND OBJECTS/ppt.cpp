#include <iostream>
using namespace std;

class Car 
{
    private:
    //Attributes of the class
        string color;;
        int year;
        string fuel_type;

    public:
    //Methods of the class
        void start();
        void accelerate();
        void stop();
};

int main()
{
    Car car1, car2, car3;

    car1.start();
    car1.accelerate();
    car1.stop();

    return 0;
}

