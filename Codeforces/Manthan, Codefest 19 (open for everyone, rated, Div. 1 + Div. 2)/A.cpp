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
    ll t,_case=0;
    cin>>t;
    while(++_case<=t)
    {
        ll a,b,n,c;
        cin>>a>>b>>n;
        switch(n%3)
        {
        case 0:
            cout<<a<<endl;
            break;
        case 1:
            cout<<b<<endl;
            break;
        default:
            c=a^b;
            cout<<c<<endl;
            break;
        }

    }
    return 0;
}
