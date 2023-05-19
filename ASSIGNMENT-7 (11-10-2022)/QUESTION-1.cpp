#include<iostream>
using namespace std;
class Base1
{
public:
Base1 (void)
{
    cout<<"Constructor of class Base1 invoked\n";
}
~Base1()
{
    cout<<"Destructor of class Base1 invoked\n";
}
};
class Base2
{
public:
Base2 (void)
{
    cout<<"Constructor of class Base2 invoked\n";
}
~Base2()
{
    cout<<"Destructor of class Base2 invoked\n";
}
};
class Derive:public Base1,public Base2
{
public:
Derive(void)
{
    cout<<"Constructor of class Derive invoked\n";
}
~Derive()
{
    cout<<"Destructor of class Derive invoked\n";
}
};
int main()
{
    Derive x;
    cout<<"Destructors are:"<<endl;
}