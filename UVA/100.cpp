#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    freopen("output.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    ll a,b;
    while(cin>>a>>b)
    {
        bool bl=false;
        ll maxi=0;
        if(a>b)
        {
            swap(a,b);
            bl=true;
        }
        ll cnt=0;
        for(ll i=a;i<=b;i++)
        {
            ll n=i;
            cnt++;
            while(n!=1)
            {
                if(n%2==1)n=3*n+1;
                else n/=2;
                cnt++;
            }
            maxi=max(maxi,cnt);
            cnt=0;
        }
        if(bl)swap(a,b);
        cout<<a<<' '<<b<<' '<<maxi<<endl;
    }
    return 0;
}
