#include <iostream>
using namespace std;
void increment( int &a )
{
    a++;
}
int main()
{
    int a;
    cout << "Enter a number:";
    cin >> a;
    increment(a);
    cout << "After incrementing:" << a << endl;
    return 0;
}
