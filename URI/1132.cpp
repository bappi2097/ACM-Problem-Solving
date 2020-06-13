#include<iostream>
using namespace std;
int main()
{
    long long int x,y,sum=0;
    cin>>x>>y;
    if(x>y)
    {
        x+=y;
        y=x-y;
        x-=y;
    }
    for(x;x<=y;x++)if(x%13!=0)sum+=x;
    cout<<sum<<endl;
    return 0;
}
