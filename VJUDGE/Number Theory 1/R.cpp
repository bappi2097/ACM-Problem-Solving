#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define maxSz 4000007
bool mark[maxSz];
vector<int> prime;
void sieve(ll n)
{
    mark[1]=1;
    mark[2]=0;
    for(ll i=4;i<=n;i+=2)mark[i]=1;
    for(ll i=3;i*i<=n;i+=2)if(!mark[i])for(ll j=i*i;j<=n;j+=i*2)mark[j]=1;
    prime.push_back(2);
    for(ll i=3;i<=n;i+=2)if(!mark[i])prime.push_back(i);
    return;
}
int main()
{
    sieve(maxSz);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    ll n;
    while(cin>>n && n!=0)
    {
        n=abs(n);
        ll cnt=0,ans=0;
        for(ll i=0;prime[i]*prime[i]<=n && i<prime.size();i++)
        {
            if(n%prime[i]==0)
            {
                ans=prime[i];
                cnt++;
                while(n%prime[i]==0)
                {
                    n/=prime[i];
                }
            }
        }
        if(n>ans)
        {
            ans=n;
            cnt++;
        }
        if(cnt>=2)cout<<ans<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}
