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
    ll t;
    cin>>t;
    for(int l=0;l<t;l++)
    {
        ll n,cnt=0;
        cin>>n;
        while(n)
        {
            n/=5;
            cnt+=n;
        }
        cout<<cnt<<endl;
    }
    return 0;
}
