#include <iostream>
using namespace std;
class student
{
    public:
    char name[50];
    int roll,mark[5],tmark=0;
    float per;
};
int main()
{
    student s;
    cout<<"Enter Student's Name:";
    cin>>s.name;
    cout<<"Enter roll:";
    cin>>s.roll;
    int i;
    cout<<"Enter mark out of 100"<<endl;
    for(i=0;i<5;i++)
    {
    cout<<"Enter mark "<<i+1<<":";
    cin>>s.mark[i];
    s.tmark+=s.mark[i];
    }
    s.per=(float)s.tmark*0.2;
    cout<<"\nDETAILS\n";
    cout<<"Student's Name:"<<s.name<<endl;
    cout<<"Roll:"<<s.roll<<endl;
    for(i=0;i<5;i++)
    {
    cout<<"Mark"<<i+1<<":"<<s.mark[i]<<endl;
    }
    cout<<"Total Mark:"<<s.tmark<<endl;
    cout<<"Percentage:"<<s.per<<"%";
    return 0;
}