#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
int nprime,prime[300000],mark[1000005];
void sieve(int n)
{
    int i,j,limit=sqrt(n+1)+2;
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
    sieve(1000000);

    return 0;
}
