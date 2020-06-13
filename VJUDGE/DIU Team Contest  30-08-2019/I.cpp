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

int main()
{
    //inOut();

    ll i,j,n;
    string s;
    ll stp  = 0, lprm = 0;
    cin>>s;
    if(!(s[0]>='0' && s[0]<='9'))
    {
        cout<<-1<<endl;
        return 0;
    }
    for(int i=0;i<s.size();i++)
    {
        if(s[i]>='0' && s[i]<='9')cout<<s[i];
        else break;
    }
    cout<<endl;
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
