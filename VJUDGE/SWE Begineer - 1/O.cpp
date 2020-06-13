#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    while(cin>>a>>b>>c)
    {
        int x,y,z;
        if(a==0 && b==0 && c==0)break;
        x=a*a;
        y=b*b;
        z=c*c;
        if(x+y==z || y+z==x || z+x==y)cout<<"right\n";
        else cout<<"wrong\n";
    }
    return 0;
}
