#include<iostream>
using namespace std;
int n;
class employee
{
    int basicsalary;
    float da,hra,gs;
    public:
    int id;
    char name[20];
    int age;
    void details();
    void out();
}e[100];
void employee::details()
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<"Enter employee name:";
        cin>>e[i].name;
        cout<<"Enter employee Id:";
        cin>>e[i].id;
        cout<<"Enter employee age:";
        cin>>e[i].age;
        cout<<"Enter basic salary:";
        cin>>e[i].basicsalary;
        e[i].da=(float)e[i].basicsalary*.8;
        e[i].hra=(float)e[i].basicsalary*.1;
        e[i].gs=(float)e[i].basicsalary+e[i].hra+e[i].da;
    }  
}
void employee::out()
{
    int i;
    cout<<"ID\tName\tAge\tBasic Salary\tGross Salary"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<e[i].id<<"\t";
        cout<<e[i].name<<"\t";
        cout<<e[i].age<<"\t";
        cout<<e[i].basicsalary<<"\t";  
        cout<<"\t"<<e[i].gs<<endl;
    }
}
int main()
{   
    cout<<"Enter number of employee:";
    cin>>n; 
    employee e1;
     e1.details();
     e1.out();
    return 0;
}