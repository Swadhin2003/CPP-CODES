#include<iostream>
using namespace std;
class cmp
{
    int r,i,c;
    public:
    	cmp()
        {
    		cout<<"Enter the real no:";
    		cin>>r;
    		cout<<"Enter the imaginary no:";
    		cin>>i;
		}
		cmp(const cmp &x,const cmp &y)
        {
            r=x.r;
            i=y.i;
        }
		void dis()
        {
			cout<<"The complex no:"<<r<<"+i"<<i<<endl;
		}
		void dis(int x,int y)
        {
			cout<<"The complex no:"<<x<<"+i"<<y<<endl;
		}
		~cmp()
        {
			cout<<"Destructor called.\n";
		}
};
int main()
{
cmp c1;
c1.dis();
cmp c2;
c2.dis(3,7);
cmp c3(c1);
c3.dis();
cmp c4(c2);
c4.dis();
return 0;
}