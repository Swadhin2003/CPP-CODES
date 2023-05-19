#include<iostream>
using namespace std;
class a
{
	public:
	a()
    {
		cout<<"Constructor is called."<<endl;
	}
	~a()
    {
	cout<<"Destructor is called.";
	}	
};
int main()
{
	a t;
}