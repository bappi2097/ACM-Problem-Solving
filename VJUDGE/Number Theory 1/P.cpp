#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<ll> divisors;
    for(ll i=1; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            divisors.push_back(i);
            divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(),divisors.end());
    vector<ll> sdivisors;
    for(ll i=0,j=0; i<divisors.size()-1; i++)
        if(divisors[i]!=divisors[i+1])sdivisors.push_back(divisors[i]);
    sdivisors.push_back(divisors[divisors.size()-1]);
    if(sdivisors.size()<k)cout<<-1<<endl;
    else cout<<sdivisors[k-1]<<endl;
    return 0;
}
