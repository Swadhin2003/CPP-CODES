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
    int sub[5];
    public:
    void getmark()
    {
        cout << "Enter 5 subjects marks:";
        cin >> sub[0] >> sub[1]>> sub[2]>> sub[3]>> sub[4];
    }
    void details()
    {
        cout << "Name:" << name << "\nRoll number:" << roll << endl;
        cout << "Marks in 5 subjects:" << sub[0] << ", " << sub[1] << ", " << sub[2] << ", " << sub[3] << ", " << sub[4] << endl;
    }
};
int main()
{
    test ob;
    ob.getdata();
    ob.getmark();
    ob.details();
}