#include <iostream>
using namespace std;
class B;
class A
{
    public:
    int x=100;
    friend class B;
};
class B
{
    public :
    int y=200;
    friend class A;
    void swapp(A &ob)
    {
        ob.x = ob.x+y;
        y=ob.x-y;
        ob.x=ob.x-y;
    }
};
int main()
{
    A ob1;
    B ob;
    cout << ob1.x << " " << ob.y << endl;
    ob.swapp(ob1);
    cout << ob1.x << " " << ob.y << endl;
    return 0;
}