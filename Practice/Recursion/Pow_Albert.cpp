#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

#define sl(n)           scanf("%lld",&n)

ll Pow(ll n,int x)
{
    if(x<=1)return n*x;
    return n*Pow(n,x-1);
}
int main()
{
    ll n;
    sl(n);
    int x;scanf("%d",&x);
    printf("%lld",Pow(n,x));
    return 0;
}
