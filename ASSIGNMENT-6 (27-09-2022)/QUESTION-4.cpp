#include<iostream>
using namespace std;
class student
{
    protected:
    char name[20];
    int roll;
    public:
    void getdata()
    {
        cout << "Enter roll and name:";
        cin >> roll >> name;
    }
};
class test : public student
{
    protected:
    int sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;
    public:
    void getmark()
    {
        cout << "Enter 5 subjects marks:";
        cin >> sub1 >> sub2>> sub3 >> sub4 >> sub5;
    }
    void details()
    {
        cout << "Name:" << name << "\nRoll number:" << roll << endl;
        cout << "Marks in 5 subjects:" << sub1 << ", " << sub2 << ", " << sub3 << ", " << sub4 << ", " << sub5 << endl;
    }
};
class sports
{
    protected:
    int msports;
    public:
        void getspo()
        {
            cout << "Enter marks in sports:";
            cin >> msports;
        }
};
class result : public sports, public test
{
    int total;
    float percent;
    public:
    void display()
    {
        cout << "Marks in sports:" << msports << endl;
        total = sub1+sub2+sub3+sub4+sub5+msports;
        percent = (total*100)/600;
        cout << "Total marks:" << total << "\nPercent:" << percent << endl;
    }
};
int main()
{
    result ob1;
    ob1.getdata();
    ob1.getmark();
    ob1.getspo();
    ob1.display();
    ob1.details();
    ob1.display();
}