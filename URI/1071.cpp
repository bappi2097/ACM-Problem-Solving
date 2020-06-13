#include<iostream>
using namespace std;
int main()
{
    int x,y,sum=0;
    cin>>x>>y;
    if(x<y)
    {
        x+=y;
        y=x-y;
        x-=y;
    }
    if(y%2==0)for(y+=1;y<x;y+=2)sum+=y;
    else for(y+=2;y<x;y+=2)sum+=y;
    cout<<sum<<endl;
    return 0;
}
