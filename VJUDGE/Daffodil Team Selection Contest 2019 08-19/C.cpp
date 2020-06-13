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
//void inOut();
vector<ll>ans;

void inOut()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
}
int main()
{
    inOut();
    ll i,j,k,l,q,n,m;
    string s;

    scanf("%lld%lld", &m, &n);

    for(i=1; i*i<=m; i++)
    {
        if(m%i==0)
        {
            j = m/i;
            if(i%n == 0 && i>=n)
                ans.pb(i);
            if(j%n ==0 && j>=n)
                ans.pb(j);
        }
    }


    if(ans.size()>0)
    {
        sort(ans.begin(), ans.end());
        for(i=0; i<ans.size(); i++)
            printf("%lld ", ans[i]);
        printf("\n");
    }

    return 0;
}


