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
        cout<<"Derived 1 constructor"<<endl;
    }
    ~B()
    {
        cout<<"Derived 1 Destructor"<<endl;
    }
};
class C:public B
{
    public:
    C()
    {
        cout<<"Derived 2 constructor"<<endl;
    }
    ~C()
    {
        cout<<"Derived 2 Destructor"<<endl;
    }
};
int main()
{
    C c1;
    return 0;
}