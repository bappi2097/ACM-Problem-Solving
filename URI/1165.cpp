#include<cmath>
#include<iostream>
using namespace std;
int prime[1000000],mark[10000000],nprime;
void Prime()
{
    int i,j,n=10000000,limit=sqrt(n)+2;
    mark[1]=1;
    prime[nprime++]=2;
    for(i=4; i<=n; i+=2)mark[i]=2;
    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;
            if(i<=limit) for(j=i*i; j<=n; j+=i*2) mark[j]=1;
        }
    }
}
int main()
{
    Prime();
    int t,x;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>x;
        if(!mark[x])cout<<x<<" eh primo"<<endl;
        else cout<<x<<" nao eh primo"<<endl;
    }
    return 0;
}
