#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll> divisors[100005];
void Divisor(ll n)
{
    for(ll i=1;i<=n;i++)
    {
        for(ll j=i;j<=n;j+=i)divisors[j].push_back(i);
    }
    return;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    #endif // ONLINE_JUDGE
    Divisor(100000);
    ll t;
    cin>>t;
    for(int p=0;p<t;p++)
    {
        ll k,a,b,num=0;
        cin>>k>>a>>b;
        for(int i=a;i<=b;i++)if(divisors[i].size()==k)num++;
        cout<<num<<endl;
    }
    return 0;
}
