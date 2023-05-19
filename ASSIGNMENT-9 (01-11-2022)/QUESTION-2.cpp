#include <iostream>
using namespace std;
class Employee 
{
    public:
    string name;
    int id, salary;
    Employee()
    {
        cout << "Enter name and id:";
        cin >> name >> id;
    }
    virtual void display()
    {
        cout << "Name:" << name << "\nID:" << id;
        cout << "\nSalary:" << salary << endl;
    }
};
class Regular:public Employee 
{
    public:
    int ha, dra, bPay;
    Regular()
    {
        cout << "Enter ha dra bPay:";
        cin >> ha >> dra >> bPay;
        salary = ha + dra + bPay;
    }
};
class PartTime:public Employee 
{
    public:
    int hours, ppH;
    PartTime()
    {
        cout << "Enter hours and pay per hour:";
        cin >> hours >> ppH;
        salary = hours*ppH;
    }
};
int main()
{
    Regular e1;
    PartTime p1;
    cout << "\n---REGULAR---" << endl;
    e1.display();
    cout << "\n---PART-TIME---" << endl;
    p1.display();
    return 0;
}
