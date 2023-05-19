#include <iostream>
using namespace std;
class Distance
{
int meters;
int centi;
public:
void setDistance()
{
    cout <<"Enter the distance in meters:";
    cin >> meters;
    cout <<"Enter the distance in centimeters:";
    cin >> centi;
    if(centi > 100)
    {
        meters += centi/100;
        centi = centi%100;
    }
}
void getDistance()
{
    cout << "The total distance is " << meters << " meters and " << centi << " centimeters.\n";
}
void operator > (Distance &d1)
{
    if(meters+0.01*centi > d1.meters+0.01*d1.centi)
    {
        cout << "\nThe distance with " << meters+0.01*centi << " meters is larger.";
    }
    else
    {
        cout << "\nThe distance with " << d1.meters+0.01*d1.centi << " meters is larger than or equal to the other.";
    }
}
void operator == (Distance &d2)
{
    if(meters+0.01*centi == d2.meters+0.01*d2.centi)
    cout << "\nThe two distances are equal";
    else
    cout << "\nThe two distances are not equal";
}
};
int main()
{
Distance a,b,c;
a.setDistance();
a.getDistance();
b.setDistance();
b.getDistance();
c.setDistance();
c.getDistance();
a > b;
b == c;
}
