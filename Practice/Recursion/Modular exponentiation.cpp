#include<bits/stdc++.h>
using namespace std;
long long int mod(long long int x,long long int n,long long int m)
{
    if(n==0)return 1;
    else if(m%2==0)
    {
        long long int y=mod(x,n/2,m);
        return (y*y)%2;
    }
    else return ((x%m)*(mod(x,n-1,m)))%m;
}
int main()
{
    long long int x,n,m;
    scanf("%lld%lld%lld",&x,&n,&m);
    printf("%lld\n",mod(x,n,m));
    return 0;
}
