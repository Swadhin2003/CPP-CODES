#include <iostream>
using namespace std;
int area( int l, int b=0 )
{
    if( b == 0 )
        return (l*l);
    else
        return (l*b);
}
float area( float r )
{
    return (3.14*r*r);
}
float area( float h, float b )
{
    return (0.5*h*b);
}
int main()
{
    int s, l, b;
    float r, h, base;
    cout << "Enter side of square:";
    cin >> s;
    cout << "Enter sides of rectangle:";
    cin >> l >> b;
    cout << "Enter radius of circle:";
    cin >> r;
    cout << "Enter height and base of triangle:";
    cin >> h >> base;
    cout << "\nArea of square:" << area(s);
    cout << "\nArea of rectangle:" << area(l,b);
    cout << "\nArea of circle:" << area(r);
    cout << "\nArea of triangle:" << area(h,base) << endl;
    return 0;
}
