#include <iostream>
using namespace std;
using std::string;

// void display(int account_no, char name[20], float balance);

class BankAccount
{
private:
    int Account_no;
    string Name;
    float Balance;

public:
    BankAccount(int account_no, string name, float balance)
    {
        Account_no = account_no;
        Name = name;
        Balance = balance;
    }

    void display()
    {
        cout << "Account number: " << Account_no << endl;
        cout << "Account Holder Name: " << Name << endl;
        cout << "Balance: " << Balance << endl;
    }

    void deposit()
    {
        int deposited_amount;
        cout << "Enter amount to be deposited ";
        cin >> deposited_amount;
        Balance = Balance + deposited_amount;
        cout << "Updated balance is " << Balance;
    }

    void withdraw()
    {
        int amount_withdrawn;
        cout << "Enter amount to be withdrawn ";
        cin >> amount_withdrawn;
        Balance = Balance - amount_withdrawn;
        cout << "Updated balance is " << Balance;
    }
};

int main()
{
    int account_no;
    string name;
    float balance;

    cout << "Enter the account number ";
    cin >> account_no;
    cout << "Enter the account holder name ";
    cin >> name;
    cout << "Enter the balance ";
    cin >> balance;

    BankAccount b1(account_no, name, balance);
    b1.display();
    b1.deposit();

    return 0;
}