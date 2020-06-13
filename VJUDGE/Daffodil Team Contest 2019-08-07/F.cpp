#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,mini=LONG_MAX,sum=0;
        cin>>n;
        ll ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
            sum+=ar[i];
            mini=min(mini,ar[i]);
        }
        while(1)
        {
            if(sum%mini==0)
            {
                cout<<mini<<' '<<sum/mini<<endl;
                break;
            }
            else mini=sum%mini;
        }
    }
    return 0;
}
