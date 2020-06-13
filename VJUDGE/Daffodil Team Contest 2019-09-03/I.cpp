#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.cpp","r",stdin);
    #endif // ONLINE_JUDGE
    ll n;
    cin>>n;
    while(n!=0)
    {
        ll t=0;
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=n;j++)
            {
                for(ll k=1;k<=n;k++)
                {
                    for(ll l=1;l<=n;l++)
                    {
                        for(ll m=1;m<=n;m++)
                        {
                            t+=(abs(abs(i-j)*abs(j-k)*abs(k-l)*abs(m-i)));
                        }
                    }
                }
            }
        }
        cout<<t%10007<<endl;
        cin>>n;
    }
    return 0;
}
