#include<bits/stdc++.h>
#include<string>
#include<vector>
#include <cstdlib>
using namespace std;

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef long long li;

#define ms(x,a) memset(x,a,sizeof(x))
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define pi      acos(0.0)*2 // 3.1415926535897932
#define mx      100007
#define mod     1000000007
#define base    10000007
#define pb      push_back

//ll a[10005];
void inOut();
vector<ll>ans;

int main()
{
    inOut();
    ll i,j,k,l,q,n,m;
    string s;

    scanf("%lld%lld", &m, &n);

    ll mid = m/2;
    if(m%n!=0)
        return 0;
    for(i=n; i<=mid; i+=n)
    {
        if(m%i==0)
            ans.pb(i);
    }
    ans.pb(m);
    for(i=0; i<ans.size(); i++)
        printf("%lld ", ans[i]);
    printf("\n");
    return 0;
}


void inOut()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
#endif
}
