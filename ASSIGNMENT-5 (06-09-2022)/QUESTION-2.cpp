#include<iostream>
using namespace std;
class ti
{
    int hr,min,m;
    public:
    	ti()
        {
    		cout<<"Enter the time in minute:";
    		cin>>min;
		}
		void dis()
        {
			hr=min/60;
			m=min%60;
			cout<<"Time: "<<hr<<" HH : "<<m<<" mm.";
		}
};
int main()
{
	ti t;
	t.dis();
	return 0;
}