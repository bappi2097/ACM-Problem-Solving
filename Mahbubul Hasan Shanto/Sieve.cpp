#include<iostream>
#include<cmath>
#include<bits/stdc++.h>
using namespace std;
int prime[300000],nprime,mark[1000005];
void sieve(int n)
{
    int limit=sqrt(n+1)+2,i,j;
    mark[1]=1;
    prime[nprime++]=2;
    for(i=4;i<=n;i+=2)mark[i]=1;
    for(i=3;i<=n;i+=2)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;
            if(i<=limit)
            {
                for(j=i*i;j<=n;j+=i*2)mark[j]=1;
            }
        }
    }
}
int main()
{
    sieve(100000);
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a,f=1;
        cin>>a;
        for(int j=0;j<=a;j++)
        {
            if(prime[j]==a)
            {
                cout<<a<<" is a Prime Number\n";
                f=0;
                break;
            }
        }
        if(f)cout<<a<<" is Not a Prime Number\n";
    }
    return 0;
}

