#include <iostream>
using namespace std;
class X
{
    static int c;
    static void countt()
    {
        c++;
    }
    public:
    static void display()
    {
        countt();
        cout << c << endl;
    }
};
int X :: c;
int main()
{
    X :: display();
    X :: display();
    X :: display();
    X :: display();
    X :: display();
    return 0;
}