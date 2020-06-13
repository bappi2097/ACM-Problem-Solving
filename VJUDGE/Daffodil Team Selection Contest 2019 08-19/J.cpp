#include<bits/stdc++.h>
#include<string>
#include<vector>

using namespace std;

typedef long long int ll;
typedef long double ld;
typedef unsigned long long int ull;
typedef long long li;

#define ms(x,a) memset(x,a,sizeof(x))
#define forn(i, n) for (int i = 0; i < int(n); i++)
#define pi      acos(0.0)*2 // 3.1415926535897932
#define mx      100000007
#define mod     1000000007
#define base    10000007
#define pb      push_back

void inOut();
const int N = 70000;
bool B[70050];
vector<ll>prime;
vector<ll>prm;
vector<ll>ans;


void seive()
{
    prime.pb(2);

    for(ll i=3; i*i<=N; i+=2)
    {
        if(!B[i])
            for(ll j=i*i; j<=N; j+= i<<1) B[j] = 1;
    }

    for(ll i=3; i<=N; i+=2) if(!B[i]) prime.pb(i);
}

int main()
{
    inOut();
    seive();
    ll i,j,n;
    string s;
    ll stp  = 0, lprm = 0;
    cin>>n;
    ll a[n+2];

    for(i=0; i<n; i++)
        cin>>a[i];
    sort(a, a+n);

    for(i=0; i<prime.size(); i++)
    {
        if(a[n-1] == 1)
        {
            prm.pb(prime[0]);
            break;
        }
        else if(prime[i]>a[n-1])
            break;
        else
            prm.pb(prime[i]);
    }

    int sz = prm.size();

    for(i=0; i<sz; i++)
    {
        for(j=0; j<n; j++)
            stp += abs(a[j] - prm[i]);

        ans.pb(stp); stp = 0;
    }

    sort(ans.begin(), ans.end());

    cout<<ans[0]<<endl;

    return 0;
}

void inOut()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    #ifndef ONLINE_JUDGE
        freopen("input.cpp", "r", stdin);
        //freopen("output.txt", "w", stdout);
    #endif
}
