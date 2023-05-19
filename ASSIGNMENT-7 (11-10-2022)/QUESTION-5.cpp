#include <iostream>
using namespace std;
class A
{
    public:
    A(int a)
    {
       cout<<"Base 1 constructor"<<endl;
    }
    ~A()
    {
        cout<<"Base 1 Destructor"<<endl;
    }
};
class B
{
    public:
    B(int a)
    {
        cout<<"Base 2 constructor"<<endl;
    }
    ~B()
    {
        cout<<"Base 2 Destructor"<<endl;
    }
};
class C: public A,public B
{
    public:
    C(int a):A(a),B(a)
    {
        cout<<"Derived 1 constructor"<<endl;
    }
    ~C()
    {
        cout<<"Derived 1 Destructor"<<endl;
    }
};
int main()
{
    C c1(10);
    return 0;
}

