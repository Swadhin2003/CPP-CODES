#include<iostream>
#include<math.h>
using namespace std;
class distances
{
    private:
    int x1,x2,y1,y2;
    public:
    float d;
    void input();
    void dis();
}a1,a2;
void distances::input()
{
    cout<<"Enter point1's coordinates:";
    cin>>a1.x1>>a1.y1;
    cout<<"Enter point2's coordinates:";
    cin>>a2.x2>>a2.y2;
}
void distances::dis()
{
    d=(float)sqrt(pow(a2.x2-a1.x1,2)+pow(a2.y2-a1.y1,2));
    cout<<"The distance: "<<d;
}
int main()
{  
    distances c;
    c.input();
    c.dis();
    return 0;
}