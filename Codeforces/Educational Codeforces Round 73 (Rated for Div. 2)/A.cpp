#include<bits/stdc++.h>
typedef long long int ll;
using namespace std;
map<ll,ll> mp;
map<ll,ll>::iterator it1,it2,it3;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
#endif // ONLINE_JUDGE
    ll t;
    cin>>t;
    for(ll i=1; i<=pow(2,32); i*=2)
        mp[i]=0;
    while(t--)
    {
        ll n,s;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>s;
            mp[s]++;
        }
        ll p=2048,cnt=1;
        while(cnt && cnt!=12 && !mp[2048])
        {
            if(mp[p/pow(2,cnt)]>=2)
            {
                mp[p/pow(2,cnt)]-=2;
                cnt--;
                mp[p/pow(2,cnt)]++;
            }
            else cnt++;
        }
        if(mp[2048])cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        mp.clear();
    }
    return 0;
}
