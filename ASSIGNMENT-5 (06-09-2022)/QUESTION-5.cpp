#include<iostream>
#include<stdlib.h>
using namespace std;
class a
{
	static int c;
	public:
	a()
    {
	c++;
	}
	static void dis()
    {
	cout<<c;
	}
};
int a::c=1;
int main()
{
	a t;
	t.dis();
	return 0;
} 