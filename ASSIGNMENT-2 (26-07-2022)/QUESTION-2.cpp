#include<iostream>
using namespace std;
class student
{
    private:
    int data;
    char name[20];
    int roll;
    int marks;
    public:
    void getDetails();
    void putDetails();
};
void student::getDetails()
{
    cout<<"Enter Name:";
    cin>>name;
    cout<<"Enter Roll:";
    cin>>roll;
    cout<<"Enter Marks:";
    cin>>marks;
};
void student::putDetails()
{
    cout<<"\nSTUDENT DETAILS\n";
    cout<<"Name:";
    cout<<name;
    cout<<"\nRoll:";
    cout<<roll;
    cout<<"\nMarks:";
    cout<<marks;
};
int main()
{
    student std;
    std.getDetails();
    std.putDetails();
    return 0;
}
