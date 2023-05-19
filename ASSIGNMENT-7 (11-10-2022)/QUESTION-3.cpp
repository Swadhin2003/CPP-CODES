#include<iostream>
using namespace std;
class A
{    
    public:
    A()
    {
       cout<<"Base 1 constructor"<<endl;
    }
    ~A()
    {
        cout<<"Base 1 Destructor"<<endl;
    }
};
class B:public A
{
    public:
    B()
    {
        cout<<"Hier 1 constructor"<<endl;
    }
    ~B()
    {
        cout<<"Hier 1 Destructor"<<endl;
    }
};
class C:public A
{
    public:
    C()
    {
        cout<<"Hier 2 constructor"<<endl;
    }
    ~C()
    {
        cout<<"Hier 2 Destructor"<<endl;
    }
};
class D:virtual public B, virtual public C
{
    public:
    D()
    {
        cout<<"Hybrid constructor"<<endl;
    }
    ~D()
    {
        cout<<"Hybrid destructor"<<endl;
    }
};
int main()
{
    D d1;
    return 0;
}