#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define maxSz 10e7
int divisors[10000007];
void Divisor(int n)
{
    for(int i=1;i<=n;i++)for(int j=i;j<=n;j+=i)divisors[j]++;
    return;
}
int main()
{
    freopen("output.cpp","w",stdout);
    ll t;
    cin>>t;
    Divisor(t);
    cout<<divisors[t]<<endl;
    return 0;
}
