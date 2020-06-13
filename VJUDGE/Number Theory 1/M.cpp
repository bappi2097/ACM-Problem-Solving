#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll noOfDivisor(ll n)
{
    ll ans=1,s=sqrt(n);
    for(ll i=2;i<=s;i++)
    {
        if(n%i==0)
        {
            ll cnt=0;
            while(n%i==0)
            {
                n/=i;
                cnt++;
            }
            ans*=cnt+1;
            s=sqrt(n);
        }
    }
    if(n!=1)ans*=2;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    //freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    ll a,b,k,cnt=0;
    cin>>a>>b>>k;
    if(a>b)swap(a,b);
    for(ll i=a;i<=b;i++)
        if(noOfDivisor(i)==k)cnt++;
    cout<<cnt<<endl;
    return 0;
}
