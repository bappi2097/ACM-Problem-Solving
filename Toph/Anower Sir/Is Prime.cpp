#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int nprime,prime[1006],mark[1006];
void sieve()
{
    int limit=sqrt(1006),i,j,n=1006;
    mark[1]=1;
    prime[nprime++]=2;
    for(i=4; i<=n; i+=2)mark[i]=1;
    for(i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;
            if(i<=limit)
            {
                for(j=i*i; j<=n; j+=i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }
}
int main()
{
    sieve();
    int n,flag;
    while(cin>>n)
    {
        flag=0;
        for(int i=0; i<nprime; i++)
        {
            if(prime[i]==n)
            {
                cout<<"Yes"<<endl;
                flag=1;
                break;
            }
        }
        if(!flag)cout<<"No"<<endl;
    }
    return 0;
}
