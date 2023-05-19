#include<iostream>
using namespace std;
int n;
class no
{
    public:
    void square();
    void cube();
};
int main()
{
    cout<<"Enter the no:";
    cin>>n;
    no n1;
    n1.square();
    n1.cube();
    return 0;
}
inline void no::square()
{  
    int s=n*n;
    cout<<"Square of "<<n<<" is "<<s<<endl;
}
inline void no::cube()
{
    int c=n*n*n;
    cout<<"Cube of "<<n<<" is "<<c;
}