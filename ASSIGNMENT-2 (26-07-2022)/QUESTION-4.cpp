#include <iostream>
using namespace std;
class complex
{
    public:
    int real[10],img[10];
};
int main()
{
    complex c;
    int i;
    cout<<"Enter 10 complex no:"<<endl;
    for(i=0;i<10;i++)
    {
    cout<<"real"<<i+1<<":";
    cin>>c.real[i];
    cout<<"imaginary"<<i+1<<":";
    cin>>c.img[i];
    }
    for(i=0;i<10;i++)
    {
    cout<<"Complex no"<<i+1<<":"<<c.real[i]<<"+i"<<c.img[i]<<endl;
    }
    return 0;
}