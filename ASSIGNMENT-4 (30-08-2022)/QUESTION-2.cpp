#include <iostream>
using namespace std;
float volume( float r )
{
    return (4/3)*3.14*r*r*r;
}
float volume( float r, float h )
{
    return 3.14*r*r*h;
}
int volume( int a )
{
    return a*a*a;
}
int main()
{
    int a;
    float r, r2, h;
    cout << "Radius of sphere:";
    cin >> r;
    cout << "Radius and height of cylinder:";
    cin >> r2 >> h;
    cout << "Side of cuboid:";
    cin >> a;
    cout << "\nVolume of sphere:" << volume(r);
    cout << "\nVolume of cylinder:" << volume(r2,h);
    cout << "\nVolume of cuboid:" << volume(a);
    cout << endl;
    return 0;
}
