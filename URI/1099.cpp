#include<iostream>
using namespace std;
int main()
{
    int n,x,y,sum;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        sum=0;
        cin>>x>>y;
        if(x>y)
        {
            x+=y;
            y=x-y;
            x-=y;
        }
        if(x%2==1)for(x+=2;x<y;x+=2)sum+=x;
        else for(x+=1;x<y;x+=2)sum+=x;
        cout<<sum<<endl;
    }
    return 0;
}
