// Create a class Bank Account with appropriate data members and functions. The class should also have a data member opening_balance and function set_opening_balance. This function should initialize the value of opening_balance to 10000. Create appropriate objects and call the functions. Make use of public and private access specifier wherever required.

#include <iostream>
using namespace std;

class BankAccount
{
    int customer_id;
    string name;
    float opening_balance;

public:
    void input(void)
    {
        cout << "Enter customer id: ";
        cin >> customer_id;
        cout << "Enter customer name: ";
        cin >> name;
    }

    void set_opening_balance(void)
    {
        opening_balance = 10000;
    }

    void display(void)
    {
        cout << "Name: " << name << endl;
        cout << "Customer Id: " << customer_id << endl;
        cout << "Opening Balance: " << opening_balance << endl;
    }
};

int main()
{
    BankAccount customer1, customer2, customer3, customer4, customer5, customer6, customer7, customer8, customer9, customer10;
    customer1.input();
    customer1.set_opening_balance();
    customer1.display();
    customer2.input();
    customer2.set_opening_balance();
    customer2.display();
    customer3.input();
    customer3.set_opening_balance();
    customer3.display();
    customer4.input();
    customer4.set_opening_balance();
    customer4.display();
    customer5.input();
    customer5.set_opening_balance();
    customer5.display();
    customer6.input();
    customer6.set_opening_balance();
    customer6.display();
    customer7.input();
    customer7.set_opening_balance();
    customer7.display();
    customer8.input();
    customer8.set_opening_balance();
    customer8.display();
    customer9.input();
    customer9.set_opening_balance();
    customer9.display();
    customer10.input();
    customer10.set_opening_balance();
    customer10.display();
    return 0;
}