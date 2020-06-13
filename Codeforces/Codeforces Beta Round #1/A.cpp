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
    ll n,m,a,net=0;
    cin>>n>>m>>a;
    net=(n%a>0 ? (n/a)+1 : n/a);
    net*=(m%a>0 ? (m/a)+1 : m/a);
    cout<<net<<endl;
    return 0;
}
