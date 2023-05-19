#include <iostream>
using namespace std;
class Account
{
    public:
    string name;
    int custNum, bal;
    Account()
    {
        cout << "Enter name, cust. no, balance:";
        cin >> name >> custNum >> bal;
    }
    virtual void withdraw(int) = 0;
    virtual void deposit(int amt)
    {
        bal += amt;
    }
    virtual void display()
    {
        cout << "Name:" << name << "\nBalance:" << bal << endl;
    }
};
class Savings : public Account
{
    public:
    const int MIN_BAL = 5000;
    void withdraw(int amt)
    {
        if (bal - amt < MIN_BAL)
        {
            cout << "Can't withdraw.\n";
            return;
        }
        bal -= amt;
    }
};
class Current : public Account
{
    public:
    int ovamt;
    Current()
    {
        cout << "Input overdue amount:";
        cin >> ovamt;
    }
    void withdraw(int amt)
    {
        if (bal - amt < ovamt)
        {
            cout << "Can't withdraw.\n";
            return;
        }
        bal -= amt;
    }
};
int main()
{
    Savings ac1;
    Current ac2;
    ac1.deposit(100);
    ac1.withdraw(5000);
    ac1.display();
    ac2.display();
    return 0;
}