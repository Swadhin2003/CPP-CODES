#include<iostream>
using namespace std;
class height
{
    public :
        int f,i;
    public :
        void input(void);
        void display(void);
    void add(height ,height);
    height add(height);
};
void height::input()
{
    cout<<"Enter feet:";
    cin>>f;
    cout<<"Enter inches:";
    cin>>i;
}
void height::display()
{
    cout<<"The height is:"<<f<<"'"<<i<<"''"<<endl;
}
void height::add(height a,height b)
{
    f=a.f+b.f;
    i=a.i+b.i;
    if(i>12)
    {
        f+=i/12;
        i=i%12;
    }
}
height height::add(height s)
{
    height temp;
    temp.f=f+s.f;
    temp.i=i+s.i;
    if(temp.i>12)
    {
        temp.f+=temp.i/12;
        temp.i=temp.i%12;
    }
    return temp;
}
int main()
{
    height h1,h2,h3,h4;
    cout<<"Enter height of person 1:"<<endl;
    h1.input();
    cout<<"Enter height of person 2:"<<endl;
    h2.input();
    h3.add(h1,h2);
    h4=h2.add(h1);
    cout<<"Method 1 output:"<<endl;
    h3.display();
    cout<<"Method 2 output:"<<endl;
    h4.display();
}