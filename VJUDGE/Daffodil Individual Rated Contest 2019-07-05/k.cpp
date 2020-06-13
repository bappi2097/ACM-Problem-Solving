#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
ll result=0;
void subset(ll ar[],ll n,ll i,ll o)
{
    if(n==i)
    {
        result+=o;
        return;
    }
    subset(ar,n,i+1,o|ar[i]);
    subset(ar,n,i+1,o);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    #endif // ONLINE_JUDGE
    ll n,ar[100];
    cin>>n;
    for(int i=0;i<n;i++)cin>>ar[i];
    subset(ar,n,0,0);
    cout<<result<<endl;
    return 0;
}
