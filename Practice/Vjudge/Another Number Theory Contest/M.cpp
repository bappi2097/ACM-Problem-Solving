#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
long long H(int n)
{
    long long res = 0;
    for( int i = 1; i <= n; i=i+1 )
    {
        res = (res + n/i);
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    //freopen("input.cpp","r",stdin);
    freopen("input.cpp","w",stdout);
    #endif // ONLINE_JUDGE
    ll t,n;
    //cin>>t;
    for(ll i=1;i<=1000;i++)
    {
        //cin>>n;
        cout<<1000000000<<endl;
    }
    return 0;
}
