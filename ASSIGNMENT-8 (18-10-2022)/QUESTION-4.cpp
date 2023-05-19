#include <iostream>
#include <string.h>
using namespace std;
class Str 
{
    public:
    char *s;
    int l;
    Str(): l(0){};
    Str( char *st )
    {
        l = strlen( s ) + 1;
        s = new char[ l ];
        strcpy( s, st ); 
    }
    Str* operator +( const Str &b )
    {
        Str *c = new Str;
        c->l = strlen(s) + strlen(b.s) + 1;
        c->s = new char[ c->l ];
        strcpy( c->s, s );
        strcat( c->s, b.s );
        return c;
    }
};
int main()
{
    Str a("Hello"), b(" World");
    Str *c = a + b;
    cout << "Output:" << c->s << endl;
    return 0;
}
